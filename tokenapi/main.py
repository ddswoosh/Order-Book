from datahandler import CacheHandler, SocketHandler
from tokeninfo import TokenInfoApi

import sys

def main():
    # symbol = sys.argv[1]
    writer = CacheHandler() 
    # api = TokenInfoApi()
    # print(writer.read("BTC"))
    # writer.write("BTC", api.getTokenInfo("BTC"))

    sock = SocketHandler()
    sock.sendData("BTC")
if __name__ == "__main__":
    main()