t = int(input())

for _ in range(t):
    n = int(input())
    s = input()
    count_zeroes = 0
    count_ones = 0

    for c in s:
        if c == '0':
            count_zeroes += 1
        else:
            count_ones += 1

    if count_zeroes > count_ones:
        print("YES")
        continue

    while True:
        new_s = ""  # Create a new string to store the updated values

        for i in range(len(s) - 1):
            if s[i] == s[i + 1]:
                continue
            else:
                new_s += s[i] + '0' + s[i + 1]
                count_zeroes += 1
                if count_zeroes>count_ones:
                    break

        s = new_s  # Update the original string with the new values

        if count_zeroes > count_ones:
            print("YES")
            break

        if count_zeroes <= count_ones:
            print("NO")
            break
