s = list()

def sub(n):
    if (n < 5):
        s.append(n)
    else:
        sub(n // 5)
        s.append(n % 5)

sub(int(input()) - 1)
print((int("".join(str(i) for i in s))) * 2)
