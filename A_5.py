n, m = map(int, input().split())

cnt = 0

for i in range(int(n**0.5) + 1):  # Iterate only up to sqrt(n)
    j = n - i * i  # Compute j directly

    if j >= 0 and i == m - j * j:  # Ensure valid values
        cnt += 1

print(cnt)
