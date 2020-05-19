class StockSpanner:



    def __init__(self):
        self.a = []

    def next(self, price):
        """
        :type price: int
        :rtype: int
        """
        cnt = 1
        while len(self.a) > 0 and price >= self.a[-1][0]:
            cnt += self.a.pop()[1]
                
        self.a.append((price, cnt))
        return cnt
        


# Your StockSpanner object will be instantiated and called as such:
# obj = StockSpanner()
# param_1 = obj.next(price)