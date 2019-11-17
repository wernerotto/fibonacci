/* We can avoid the repeated work done is the method 1 (recursion) 
by storing the Fibonacci numbers calculated so far. */

//Fibonacci Series using Dynamic Programming 
#include<stdio.h> 

int fibonacci(int n) 
{ 
/* Declare an array to store Fibonacci numbers. */
int f[n+2]; // 1 extra to handle case, n = 0 
int i; 

/* 0th and 1st number of the series are 0 and 1*/
f[0] = 0; 
f[1] = 1; 

for (i = 2; i <= n; i++) 
{ 
	/* Add the previous 2 numbers in the series 
		and store it */
	f[i] = f[i-1] + f[i-2]; 
} 
printf("%d",n);
return f[n]; 
} 

int main () 
{ 
int n = 9; 
printf("%d", fibonacci(n)); 
getchar(); 
return 0; 
} 

// gcc -o fibonacci_dynamic fibonacci_dynamic.c