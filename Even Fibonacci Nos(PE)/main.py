prev = next = 1
sum = val = 0
while val<=4000000:
    val = prev + next
    if val % 2 == 0:
        sum += val
    prev = next
    next = val
print(sum)