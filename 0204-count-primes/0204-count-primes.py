class Solution:
    def countPrimes(self, n: int) -> int:
        if n < 3: return 0
        primes = [1]*n
        primes[0] = primes[1] = 0
        for i in range(2, round(n**(1/2)+1)):
            if primes[i]:
                primes[i*i: n: i] = len(primes[i*i: n: i])*[0]
        return sum(primes)
        
            
            