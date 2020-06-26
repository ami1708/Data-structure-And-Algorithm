#include<bits/stdc++.h>
using namespace std;

int longest_subsequence_two(int a[] , int n , int b[] , int m)
{
    if(n == 0 || m == 0)
        return 0;
    int output[n+1][m+1];
    for(int i = 0 ; i <= n ; i++)
    {
        output[i][0] = 0;
    }
    for(int i = 0 ; i <= m ; i++)
    {
        output[0][i] = 0;
    }
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= m ; j++)
        {
            int x = output[i-1][j];
            int y = output[i][j-1];
            int z = output[i-1][j-1];
            if(a[n-i] == b[m-j])
            {
                output[i][j] = 1+z;
            }
            else
            {
                output[i][j] = max(x , max(y , z));
            }
        }
    }
    return output[n][m];
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin>>a[i];
    }
    int m;
    cin>>m;
    int b[m];
    for(int i = 0 ; i < m ; i++)
    {
        cin>>b[i];
    }
    cout<<longest_subsequence_two(a , n , b , m);
    return 0;
}
