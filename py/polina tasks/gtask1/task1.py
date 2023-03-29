a = [1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89]
ans1 = filter(lambda number: number < 5, a)
ans2 = [num for num in a if num < 5]
# print(list(ans1))
# print(list(ans2))
exit()
# or just print
for x in a:
    if x < 5:
        print(x, '', end='')
    pass
