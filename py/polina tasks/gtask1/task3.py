index1 = 1;
index2 = 1;
n = 5;
ans1 = []


# self written
def pastri2(rows):
    row = [1]
    row2 = row
    for i in range(1, rows + 1):
        print(row2)
        row1 = row2        # 1 3 3 1
        row2 = [1] + row2  # 0 1 3 3 1 adding first elem shifts arr 1 elem to right.
                           # 1 4 6 4 1   then just summ
        for j in range(1, len(row2) - 1):  # from second to last previous element
            row2[j] = row1[j] + row2[j]


# then got from google
def pastri1(rows):
    row = [1]
    for i in range(rows):
        print(row)
        row = [sum(x) for x in zip([0] + row, row + [0])]


pastri1(5)
pastri2(5)

