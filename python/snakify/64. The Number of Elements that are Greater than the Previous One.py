count = 0

n = int(input())
m = n
while n != 0: 
  n = int(input())
  if n > m:
    count +=1
  m = n

print(count)
