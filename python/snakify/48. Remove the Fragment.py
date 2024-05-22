n = input()

print(n[0:n.find('h')]+n[n.rfind('h')+1:])
