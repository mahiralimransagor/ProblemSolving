s = input()
c = s.count('f')
if c == 1:
    print(s.find('f'))
if c > 1:
    print(s.find('f'),s.rfind('f'))
