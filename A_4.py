n = int(input())

if n % 2 != 0:
    print(-1)
else:
    print(*[x for i in range(1, n, 2) for x in (i + 1, i)])