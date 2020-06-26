#include<bits/stdc++.h>
using namespace std;

void calculator(int n)
{
    if(n == 1)
    {
        cout<<"0\n1";
        return;
    }
    int a[n+1];
    for(int i = 0 ; i <= n ; i++)
    {
        a[i] = 0;
    }
    a[1] = 1;
    a[2] = 1;
    a[3] = 1;
    for(int i = 4 ; i <= n ; i++)
    {
        int x , y , z;
        if(i%3 == 0)
            x = a[i/3]+1;
        else
            x = INT_MAX;
        if(i%2 == 0)
            y = a[i/2]+1;
        else
            y = INT_MAX;
        z = a[i-1]+1;
        a[i] = min(x , min(y , z));
    }
    int p = a[n]+1;
    int b[p];
    b[p-1] = n;
    int q = p-2;
    for(int i = n ; i > 1 ;)
    {
        int x , y , z;
        if(i%3 == 0)
            x = a[i/3];
        else
            x = INT_MAX;
        if(i%2 == 0)
            y = a[i/2];
        else
            y = INT_MAX;
        z = a[i-1];
        int mini = min(x , min(y , z));
        if(mini == x)
        {
            i = i/3;
            b[q] = i;
        }
        else if(mini == y)
        {
            i = i/2;
            b[q] = i;
        }
        else
        {
            i = i-1;
            b[q] = i;
        }
        q--;

    }
    cout<<a[n]<<"\n";
    for(int i = 0 ; i < p ; i++)
    {
        cout<<b[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    calculator(n);
    return 0;
}
