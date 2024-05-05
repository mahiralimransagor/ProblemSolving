a = int(input())
b = int(input())
c = int(input())

dollar = a*c + (b*c)//100
cent = (b*c)%100

print(dollar,cent)
