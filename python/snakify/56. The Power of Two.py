n = int(input())

if n == 1:
    print("0 1")
else:
    i = 0
    while 2**(i+1) <= n:
        i += 1
    print(i, 2**i)
