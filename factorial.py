def factorial(n):
    result = 1
    # for i in range(1,n+1):
    #     result*=i
    if n>0:
        result=n*factorial(n-1)
    
    return result

nums_list = list(map(int,input("enter the numbers to which you need to find the factorial:").strip().split()))
print(nums_list)
for i in nums_list:
    print(f"the factorial of {i} is {factorial(i)}")
    
    