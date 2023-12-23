import math


def main():
    a, m, l, r = map(int, input().split())
    if (a < l):
        print(math.ceil(abs(l-r)/m))
    elif (a > r):
        print(math.ceil(abs(r-l)/m))
    else:
        print(math.floor(((r-a)/m) + ((a-l)/m))+1)


if __name__ == '__main__':
    main()
