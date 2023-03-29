a = [1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89]
b = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]
ans1 = [j for i in a for j in b if j == i]
# how can i filter it???
# ans2 = filter(lambda number: , a)
ans3 = list(set(a) & set(b))  # no duplicates
# cos set data type cannot contain
# duplicated data

print(ans1)
# print(ans2)
print(ans3)

