a = int(input())
b = int(input())
c = int(input())
d = int(input())

if a==c or b==d:
  print("YES")

elif c>a:
  r = c-a
  if b+r==d or b-r==d:
    print("YES")
  else:
    print("NO")

elif c<a:
  r = a-c
  if b+r==d or b-r==d:
    print("YES")
  else:
    print("NO")
else:
  print("NO")
