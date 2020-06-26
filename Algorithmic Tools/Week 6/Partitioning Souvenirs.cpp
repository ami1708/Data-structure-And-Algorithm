#include <bits/stdc++.h>
using namespace std;

bool partition(int a[] , int n , int v1 , int v2 , int v3)
{
	if(n == 0)
	{
		if(v1 == v2 && v2 == v3)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	int x , y , z;
	x = partition(a+1 , n-1 , v1 + a[0] , v2 , v3);
	y = partition(a+1 , n-1 , v1 , v2 + a[0] , v3);
	z = partition(a+1 , n-1 , v1 , v2 , v3 + a[0]);
	return (x||y||z);
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n];
	for(int i = 0 ; i < n ; i++)
	{
		cin>>a[i];
	}
	cout<<partition(a , n , 0 , 0 , 0);
	return 0;
}
