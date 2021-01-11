# This program gives the largest prime factor of 
# an input from the user

def isPrime(numCheck):
    primeCheck = True
    for i in range (2,numCheck):
        if numCheck%i == 0:
            primeCheck = False
        i = i + 1
    return primeCheck

print("What number do you want the largest prime factor of?")

numIn = int(input())
primeQ = False
highestPrime = 0
for j in range(3,numIn):
    if numIn%j == 0:
        if isPrime(j):
            highestPrime = j
            print(highestPrime)
    j = j + 2

print(highestPrime) 



