#include<bits/stdc++.h>
using namespace std;

int money_change(int n)
{
    int a[n+5];
    a[0] = 0;
    a[1] = 1;
    a[2] = 2;
    a[3] = 1;
    a[4] = 1;
    for(int i = 5 ; i <= n ; i++)
    {
        int x = a[i-1];
        int y = a[i-3];
        int z = a[i-4];
        a[i] = 1 + min(x , min(y , z));
    }
    return a[n];
}

int main()
{
    int n;
    cin>>n;
    cout<<money_change(n);
    return 0;
}
