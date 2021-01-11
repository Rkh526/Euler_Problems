# This program will find the multiples of 3 and 5
# that are below a value input by the user.

print("What is the maximum multiple?")
max_mult = int(input())

sum_mult = 0

for i in range(0, max_mult):
    if (i%3==0) or (i%5==0):
        sum_mult = sum_mult + i
        i = i + 1
    else:
        i = i + 1


print(sum_mult)  
