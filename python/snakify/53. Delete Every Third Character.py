n = input()
a = ''
for i in range(len(n)):
    if i % 3 != 0:
        a = a + n[i]
print(a)
