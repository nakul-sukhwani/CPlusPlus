# x = int(input("enter any integer"))
# y = int (input("enter 2nd integer"))
# sum = x+y
# subtract = x-y
# multiply = x*y
# mod = x%y
# exp = x**y
# floor_D = x//y
# print(sum)
# print(subtract)
# print(multiply)
# print(mod)
# print(exp)
# print(floor_D)
# a = 5 
# b = 7 
# if(a==b):
#     print("a=b")
# elif(a>b):
#     print("x is greator than y")
# elif(a<b):
#     print("x is less than y ")
# else: 
#     print("x is not equal to y")
# print(2*3//5)
# print(10*(2//3))
# print(2**2*(3//2)/(5+3)*(2**5)
# )
# a,b,c = 7 , 3, -2 
# exp_num = int(input ("enter number of expressions to be entered : "))
# for i in range (exp_num):
#     user_input = input("type exit or Stop to exit or Continue to proceed ")
#     if(user_input=="exit"):
#         print("Exiting the loop")
#         break 
#     elif(user_input=="continue"):
#         continue

#     state = eval(input("enter your expression"))

#     result = bool(False)
#     if (state):
#         result = True
#     else:
#         result = False
#     print(result)

# Dataset = {10,20,30,40}
# print(Dataset)
# Dataset.add(50)
# print(Dataset)
# Dataset.update([60,70,80,90])

# set_a = {10,20,30,40}
# set_b = {20,30,40,60}
# print(set_a.union(set_b))   
# print(set_a&set_b)
# print(set_a-set_b)
# # wap to compute the sum of A.P series  
# set1 = frozenset({10,20,30})
# set1.add(50)
# print(set1)
# array = list(map(int,input("enter element").split()))
# key = int(input("enter key value"))
# low = 0
# high = len(array)-1
# while low <=high:
#     mid = (low+high)//2
#     if array[mid]==key:
#         print("Element found at index",mid)
#     elif array[mid]<key:
#         low=mid+1
#     else:
#         high = mid-1

# INHERITANCE 
# Parent Class
class Animal:
    def __init__(self, name):
        self.name = name

    def speak(self):
        print(f"{self.name} makes a sound.")

# Child Class (inherits from Animal)
class Dog(Animal):
    def speak(self):
        # Using super() to call the parent's method if needed
        # or just overriding it entirely:
        print(f"{self.name} barks!")

# Child Class (inherits from Animal)
class Cat(Animal):
    def speak(self):
        print(f"{self.name} meows!")

# Creating instances
my_dog = Dog("Buddy")
my_cat = Cat("Whiskers")

my_dog.speak()  # Output: Buddy barks!
my_cat.speak()  # Output: Whiskers meows!