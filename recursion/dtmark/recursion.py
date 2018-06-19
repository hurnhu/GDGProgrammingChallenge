def isPrime(n, a):
    if a == 1: return True
    elif n%a == 0: return False
    else: return isPrime(n, a - 1)

while True:
    num = int(input("Input a number: "))
    if isPrime(num, num-1):
        print("OUT")
        break
