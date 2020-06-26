#include <iostream>
using namespace std;

long long int gcd(long long int a , long long int b)
{
	if(b != 0)
	return gcd(b , a%b);
	else
	return a;
}

int main() {
	// your code goes here
	long long int a , b;
	cin>>a>>b;
	long long int x = min(a,b);
	long long int y = max(a,b);
	long long int divisor = gcd(x,y);
	long long int result;
	result = (x * y)/divisor;
	cout<<result;
	return 0;
}
