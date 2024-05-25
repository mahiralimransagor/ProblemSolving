max = 0
count = 1

n = int(input())
while n != 0:
  if n == max:
    count += 1 
  elif max < n:
    count = 1
    max = n
  
  n = int(input())

print(count)
