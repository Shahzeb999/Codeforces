
a,b,c,d = map(int, input().split())

s = set()

s.add(a)
s.add(b)
s.add(c)
s.add(d)

print(4 - len(s))