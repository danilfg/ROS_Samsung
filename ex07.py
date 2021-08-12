text = input()
list_int = list(map(int, text.split()))
n = list_int[0]
d = list_int[-1:][0]
list_int = list_int[:-1]
list_int = list_int[1:]
sum_ints = 0
for val in list_int:
    val_temp = val
    mult = 1
    while val > 0:
        digit = val % 10
        mult = mult * digit
        val = val // 10
    if mult % d == 0:
        sum_ints = sum_ints + val_temp
print(sum_ints)