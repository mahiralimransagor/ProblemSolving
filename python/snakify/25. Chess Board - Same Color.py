a = int(input())
b = int(input())
c = int(input())
d = int(input())

if a%2!=0 and c%2!=0:
  if b%2!=0 and d%2!=0:
    print("YES")
  elif b%2==0 and d%2==0:
    print("YES")
  else:
    print("NO")

elif a%2==0 and c%2==0:
  if b%2==0 and d%2==0:
    print("YES")
  elif b%2!=0 and d%2!=0:
    print("YES")
  else:
    print("NO")

elif a%2!=0 and c%2==0:
  if b%2!=0 and d%2==0:
    print("YES")
  elif b%2==0 and d%2!=0:
    print("YES")
  else:
    print("NO")

elif a%2==0 and c%2!=0:
  if b%2==0 and d%2!=0:
    print("YES")
  elif b%2!=0 and d%2==0:
    print("YES")
  else:
    print("NO")

else:
  print("NO")
