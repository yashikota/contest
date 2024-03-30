a, b, c = list(map(int, input().split()))

for i in range(61):
    for j in range (61):
        x = (str(bin(i))).count("1")
        y = (str(bin(j))).count("1")
        z = int(bin(x)[2:]) ^ int(bin(y)[2:])
        print(f"{i}, {j}: {x}, {y}, {(bin(x))[2:]}, {bin(y)[2:0]}")
        if (x == a and y == b and z == c):
            print(int(bin(i), 2), int(bin(j), 2))
            exit()

print(-1)
exit()
