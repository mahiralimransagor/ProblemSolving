a = int(input())
b = int(input())
c = int(input())
d = int(input())

if c == a+1 or c == a-1:
  if d == b+2 or d == b-2:
    print("YES")
  else:
    print("NO")

elif d == b+1 or d == b-1:
  if c == a+2 or c == a-2:
    print("YES")
  else:
    print("NO")

else:
  print("NO")
