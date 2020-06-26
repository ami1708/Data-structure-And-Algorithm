#include <bits/stdc++.h>
using namespace std;

int knapsnack(int w , int a[] , int n , int **b)
{
	if(n == 0 || w <= 0)
	{
		return 0;
	}
	if(b[w][n] != -1)
	{
		return b[w][n];
	}
	int x = 0 , y = 0;
	x = knapsnack(w , a+1 , n-1 , b);
	if(a[0] <= w)
	{
		y = a[0] + knapsnack(w-a[0] , a+1 , n-1 , b);
	}
	b[w][n] = max(x , y);
	return max(x , y);
}

int main() {
	// your code goes here
	int w , n;
	cin>>w>>n;
	int a[n];
	for(int i = 0 ; i < n ; i++)
	{
		cin>>a[i];
	}
	int **arr = new int*[w+1];
    for(int i = 0 ; i <= w ; i++)
    {
        arr[i] = new int[n+1];
    }
    for(int i = 0 ; i <= w ; i++)
    {
        for(int j = 0 ; j <= n ; j++)
        {
            arr[i][j] = -1;
        }
    }
	cout<<knapsnack(w , a , n , arr);
	return 0;
}
