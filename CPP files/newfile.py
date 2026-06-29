import math
def is_perfectsquare(x):
    a = int(math.sqrt(x))
    return a*a == x
def is_fibonacci(n):
    return is_perfectsquare(5*n*n +4) or is_perfectsquare(5*n*n -4 )

def count_1(s):
    vowels = "AEIOUaeiou"
    count = 0
    for c in s:
        if c in vowels:
            count += 1
    return count

def is_palindrome(string):
    clean_string = string.replace(" ","").lower()
    if clean_string == clean_string[::-1]:
        return True
    return False
# text = "madam"
# # if is_palindrome(text):
#     print("string is palindrome")
# # else:
#     print("not palindrome")

# num = 153

# if is_fibonacci(num):
#     print(f"(num) is a fibonacci number ")
# else:
#     print(f"(num) is not a fibonacci number ")

def min_max (numbers_list):
    if not numbers_list:
        return None, None
    smallest = min(numbers_list)
    largest = max(numbers_list)
    return smallest, largest
num_list = [1,4,3,2,5,6,95,45,2232,3]
min_val , max_val = min_max(num_list)

# print(f"Smallest = {min_val}, largest = {max_val}")  
squares = [x**2 for x in range (1,101)]
# print(squares) 
for i in range(1, 6):
    if i == 2:
        pass       # Does nothing, just a placeholder
    if i == 3:
        continue   # Skips printing 3
    if i == 5:
        break      # Exits the loop entirely before printing 5
    # print(i)
# from functools import reduce 

# # List of numbers
# numbers = [10, 20, 30, 40, 50]

# # Lambda function inside reduce to calculate the sum
# total_sum =reduce(lambda x, y: x + y, numbers)

# print("sum of numbers:", total_sum)

def check_armstrong(num):
    total_sum = 0
    temp = num 
    while temp>0:
        digit = temp%10
        total_sum += digit**3
        temp //= 10
    if num == total_sum:
        print(f"{num} is armstrong number")
    else:
        print(f"{num} is not an armstrong number")

check_armstrong(153)    



