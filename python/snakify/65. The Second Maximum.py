max1 = 0
max2 = 0

n = int(input())
while n != 0:
  if max1 < n:
    max1 = n
  if max2 < max1:
    max1 , max2 = max2 , max1
  n = int(input())

print(max1)
