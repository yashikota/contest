n, a, b = list(map(int, input().split()))
x = list(map(int, input().split()))

for i in range(n):
    if (x[i] > a + b):
        x[i] %= a + b
    if (x[i] > a):
        print("No")
        exit()

print("Yes")
