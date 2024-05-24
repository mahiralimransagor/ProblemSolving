sum = 0

n = int(input())
i = 0
while n != 0:
  sum += n
  i += 1
  n = int(input())

print(float(sum/i))
