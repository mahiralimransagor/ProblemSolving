n = int(input())

if n == 0:
  print("0")
else:
  a , b = 0 , 1
  f = a + b
  i = 1

  while f != n:
    f = a + b
    a = b
    b = f
    i += 1
    if f > n:
      i = -1
      break
  if i == -1:
    print(i)
  else:
    print(i)
