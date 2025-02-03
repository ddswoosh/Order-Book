import socket
import redis
from tokeninfo import TokenInfoApi

class CacheHandler:
    # Initialize cache connection
    def __init__(self):
        self.cache = redis.Redis(
            host='redis-19126.c12.us-east-1-4.ec2.redns.redis-cloud.com',
            port=19126,
            decode_responses=True,
            username="default",
            password="Nj6NBHYQ2hhiSDTVkHM0u0egOw8mIvIX",
        )

    # Stores token data for 60 seconds 
    def write(self, symbol, price):
        
        #TODO set to 60 secs in prod, dont waste api calls for dev 
        self.cache.set(symbol, price)

    # Calls api if there is a cache miss
    def read(self, symbol):
        price = self.cache.get(symbol)
        if not price:
            priceHandler = TokenInfoApi()
            price = priceHandler.getTokenInfo(symbol)
            self.write(symbol, price)

        return price

class SocketHandler:
    # Initialize local host socket connection
    def __init__(self):
        self.sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

    # Send udp packets over local host for QT to read
    def sendData(self, symbol):
        cache = CacheHandler()
        self.sock.sendto(cache.read(symbol).encode("utf-8"), ("127.0.0.1", 5000))