t = int(input())

sum = (t * (t+1)) // 2

for i in range(1,t):
  n = int(input())
  sum = sum - n

print(sum)
