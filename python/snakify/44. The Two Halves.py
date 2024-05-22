import math

n = input()

l  = math.ceil(len(n)/2)

print(n[l:]+n[:l])
