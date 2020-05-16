class Solution:
    def countPrimes(self, n: int) -> int:
        truth_table = n * [True]    
        for i in range(2, round(math.sqrt(n) + 1)):
            for j in range(i * i, n, i):
                truth_table[j] = False          
        primes = [i for i in range(2, n) if truth_table[i]]
        return len(primes)
        