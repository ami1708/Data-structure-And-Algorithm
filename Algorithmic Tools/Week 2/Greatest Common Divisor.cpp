#include <iostream>
using namespace std;

int gcd(int a , int b)
{
	if(b != 0)
	return gcd(b , a%b);
	else
	return a;
}

int main() {
	// your code goes here
	int a , b;
	cin>>a>>b;
	int x = min(a,b);
	int y = max(a,b);
	cout<<gcd(x,y);
	return 0;
}
