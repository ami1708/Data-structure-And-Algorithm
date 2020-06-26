#include<bits/stdc++.h>
using namespace std;

int longest_subsequence_two(int a[] , int n , int b[] , int m , int c[] , int l)
{
    if(n == 0 || m == 0 || l == 0)
        return 0;
    int output[n+1][m+1][l+1];
    for(int i = 0 ; i <= n ; i++)
    {
        output[i][0][0] = 0;
    }
    for(int i = 0 ; i <= m ; i++)
    {
        output[0][i][0] = 0;
    }
    for(int i = 0 ; i <= l ; i++)
    {
        output[0][0][i] = 0;
    }
    for(int i = 0 ; i <= n ; i++)
    {
        for(int j = 0 ;  j <= m ; j++)
        {
            output[i][j][0] = 0;
        }
    }
    for(int i = 0 ; i <= n ; i++)
    {
        for(int j = 0 ;  j <= l ; j++)
        {
            output[i][0][j] = 0;
        }
    }
    for(int i = 0 ; i <= m ; i++)
    {
        for(int j = 0 ;  j <= l ; j++)
        {
            output[0][i][j] = 0;
        }
    }
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= m ; j++)
        {
            for(int k = 1 ; k <= l ; k++)
            {
                int x = output[i-1][j][k];
                int y = output[i][j-1][k];
                int z = output[i][j][k-1];
                int p = output[i-1][j-1][k];
                int q = output[i][j-1][k-1];
                int r = output[i-1][j][k-1];
                int s = output[i-1][j-1][k-1];
                if(a[n-i] == b[m-j] && b[m-j] == c[l-k])
                {
                   output[i][j][k] = 1 + s;
                }
                else
                {
                   output[i][j][k] = max(x , max(y , max(z , max(p , max(q , max(r , s))))));
                }
            }
        }
    }
    return output[n][m][l];
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
    int l;
    cin>>l;
    int c[l];
    for(int i = 0 ; i < l ; i++)
    {
        cin>>c[i];
    }
    cout<<longest_subsequence_two(a , n , b , m , c , l);
    return 0;
}
