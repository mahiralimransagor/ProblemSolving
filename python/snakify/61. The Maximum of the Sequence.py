max = 0

n = int(input())
while n != 0:
  if max < n:
    max = n
  n = int(input())

print(max)
