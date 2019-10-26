# Algorithms-Collection

1. Write your code in CPP language 
2. Also mention testcase with output in comments


#code_to_check_prime_number(python)

n=int(input("enter a no.: "))  
#takes input of number
for i in range(2,n):
        if n%i==0:
            print("no. is not prime")
            break
#checks that number is divisible by any numberr from 2 to n 
        else:
            print("number is prime")
