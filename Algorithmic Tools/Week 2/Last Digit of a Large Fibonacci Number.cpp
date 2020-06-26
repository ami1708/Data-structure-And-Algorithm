#include <iostream>
using namespace std;

long long int fibonacci_last_digit(long long int n)
{
	long long int a[n+2];
	a[0] = 0;
	a[1] = 1;
	for(long long int i = 2 ; i < n+1 ; i++)
	{
		a[0] = 0;
	    a[1] = 1;
		a[i] = (a[i-1] + a[i-2])%10;
	}
	return a[n];
}

int main() {
	long long int n;
	cin>>n;
	cout<<fibonacci_last_digit(n);
	// your code goes here
	return 0;
}
