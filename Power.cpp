/* Extended version of power function 
that can work for float x and negative y*/
#include <bits/stdc++.h> 
using namespace std; 

float power(float x, int y) 
{ 
	float temp; 
	if(y == 0) 
		return 1; 
	temp = power(x, y / 2); 
	if (y % 2 == 0) 
		return temp * temp; 
	else
	{ 
		if(y > 0) 
			return x * temp * temp; 
		else
			return (temp * temp) / x; 
	} 
} 

// Driver Code 
int main() 
{ 
	float x; 
	int y;
    cout<<"Enter first number, x"<<endl;
    cin>>x;
    cout<<"Enter second number, y"<<endl;
    cin>>y;
    cout<<"pow(x,y) :" ;
	cout << power(x, y); 
	return 0; 
} 

