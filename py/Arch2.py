# This program will find the sum of the even values
# of the fibonnaci seq that are under 4 mil


cur_fib = 2
prev_fib = 1 #these are our starting values anyhow
next_fib = 3
sumTotal = 0

while cur_fib < 4000000:
    if cur_fib%2 == 0:
        sumTotal = sumTotal + cur_fib
    next_fib = cur_fib + prev_fib
    prev_fib = cur_fib
    cur_fib = next_fib

print(sumTotal)
