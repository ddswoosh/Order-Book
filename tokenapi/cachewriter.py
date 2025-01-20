import redis

class CacheWrite:
    def __init__(self):
        self.cache = redis.Redis(
            host='redis-19126.c12.us-east-1-4.ec2.redns.redis-cloud.com',
            port=19126,
            decode_responses=True,
            username="default",
            password="Nj6NBHYQ2hhiSDTVkHM0u0egOw8mIvIX",
        )

    def write(self):
        self.cache.set("test", 1)

    def read(self):
        print(self.cache.get("test"))

