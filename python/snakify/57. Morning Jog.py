n = int(input())
m = int(input())

count = 1

if n == m :
  print("1")
elif m == n+1:
  print("2")
else:
  i = n
  while i < m:
    count += 1
    i = i + (i*.10)
  print(count)
