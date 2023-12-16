def main():
    n = input()
    numbers = ["1", "1", "1"]
    repunits = []

    for i in range(333):
        repunits.append(int(numbers[0]) + int(numbers[1]) + int(numbers[2]))
        # print(f"{i}, {numbers[0]}, {numbers[1]}, {numbers[2]}")
        if (numbers[0] == numbers[1] == numbers[2]):
            numbers[0] += "1"
            numbers[1] = "1"
            numbers[2] = "1"
        elif (len(numbers[1]) == len(numbers[2])):
            numbers[1] += "1"
            numbers[2] = "1"
        else:
            numbers[2] += "1"

    print(repunits[int(n) - 1])

if __name__ == "__main__":
    main()
