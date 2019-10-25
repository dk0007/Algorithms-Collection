#include <iostream>
#include <math.h>
using namespace std;

/*
	Function to check if a number is prime or not
	int n	-	The input number to check
	returns	-	1 if the number is prime and 0 otherwise
*/

int isPrime(int n){
	if (n == 2)
		return 1;
	if (n <= 1 || (n % 2 == 0))
		return 0;
	
	// Set the limit to check
	int limit = sqrt(n);
	
	// i += 2 because we already checked for 2
	// So, it can't be divisible by any even number
	for (int i = 3; i <= limit + 1; i += 2)
		if (n % i == 0)
			return 0;
	return 1;
}

// Main funtion to test the algorithm
int main(){
	// Verify for numbers from 0 upto 40
	for (int i = 0; i <= 40; i++)
		if (isPrime(i))
			cout << i << " is a prime number!"  << endl;
	return 0;
}
