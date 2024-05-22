a = int(input())
b = int(input())

if a<b:
  for i in range(a,b+1):
    print(i,end=" ")
elif a>b:
  for j in reversed(range(b,a+1)):
    print(j,end=" ")
else:
  print(a)
