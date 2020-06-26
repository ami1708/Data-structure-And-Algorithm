#include <iostream>
using namespace std;
long long int fibonacci(int n)
{
	long long int a[n+1];
	a[0] = 0;
	a[1] = 1;
	for(int i = 2 ; i <= n ; i++)
	{
		a[i] = a[i-1] + a[i-2];
	}
	return a[n];
}

int main() {
	int n;
	cin>>n;
	cout<<fibonacci(n);
	return 0;
}
