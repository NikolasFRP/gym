def input(args):  # я ещё не знал что есть функция input()
    global argg
    a = 1
    ans = []
    for line1 in sys.stdin:
        argg = list(line1)
        for i in argg:
            if i != '\n':
                ans.append(i)
            else:
                break
        if a <= args:
            break
        a = a + 1
    return ans


def ispali(string):
    for i in range(0, int((len(string) - 1) / 2 + 1)):
        if string[i] != string[len(string) - i - 1]:
            return False
        else:
            continue
    return True


line = input(1)  # parameter - number of inputs(new lines)
print(ispali(line))

exit()

