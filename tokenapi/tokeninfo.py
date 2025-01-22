from requests import Session
import json

class TokenInfoApi:
    def __init__(self):
        # Generate reusable session for all requests
        self.apiKey = "2ee0998b-168f-49a4-87ae-0c9f994cb72a"
        self.requestUri = "https://pro-api.coinmarketcap.com/v2/cryptocurrency/quotes/latest"
        self.headers = {
            "Accepts": "application/json",
            "X-CMC_PRO_API_KEY": "2ee0998b-168f-49a4-87ae-0c9f994cb72a"
        }

        self.session = Session()
        self.session.headers.update(self.headers)

    def getTokenInfo(self, symbol: str):
        parameters = {
            "symbol" : symbol
        }

        res = self.session.get(self.requestUri, params=parameters).json()
        return res["data"][symbol][0]["quote"]["USD"]["price"]
       
