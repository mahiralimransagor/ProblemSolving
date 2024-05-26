n = int(input())

prev = 0
count = 1
maxc = 1

while n != 0:
  if n == prev:
    count += 1
    maxc = max(count,maxc)
  else:
    count = 1
  prev = n 
  prev , n = n, int(input())

print(maxc)
