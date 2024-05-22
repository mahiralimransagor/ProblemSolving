n = input()

c = n.count('f')

if c == 0:
  print("-2")
elif c == 1:
  print("-1")
else:
  print(n.find('f',n.find('f')+1))
