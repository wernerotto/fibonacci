# Function for nth fibonacci number - Dynamic Programing 
# Taking 1st two fibonacci nubers as 0 and 1 
# Fn = Fn-1 + Fn-2
# seed values F0 = 0 and F1 = 1.
# Given a number n, print n-th Fibonacci Number.

# Example: n = 2, output = 1
#          n = 9, output = 34

FibArray = [0,1] 

def fibonacci(n): 
	if n<0: 
		print("Incorrect input") 
	elif n<=len(FibArray): 
		return FibArray[n-1] 
	else: 
		temp_fib = fibonacci(n-1)+fibonacci(n-2) 
		FibArray.append(temp_fib) 
		return temp_fib 

# Driver Program 

print(fibonacci(9)) 

