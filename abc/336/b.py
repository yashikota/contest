n = input()
count = 0

s = reversed(bin(int(n)))
for i in s:
    if i == "0": count += 1
    else: break

print(count)
