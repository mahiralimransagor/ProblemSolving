max = 0
i = 0

n = int(input())
while n != 0:
  i +=1
  if max < n:
    max = n
    index = i
  n = int(input())


print(index)
