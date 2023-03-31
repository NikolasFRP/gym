inp = list(input())


def swap(a, b):
    temp = a
    a = b
    b = temp

print(inp)
for j in range(0, (len(inp) - 1)):
    for i in range(0, (len(inp) - 1)):
        if inp[i] > inp[i + 1]:
           temp = inp[i]
           inp[i] = inp[i+1]
           inp[i+1] = temp

print(inp)
