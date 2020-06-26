#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n , m , o = 0 , p = 1 , q = 1 , a , b = 0 , c = 1 , d = 1;
    cin>>n;
    m = (n+1)%60;
    a = (n)%60;
if(n == 0)
{
cout<<"0";
return 0;
}
    for(long long int i = 2 ; i <= m ; i++)
    {
        q = o + p;
        o = p;
        p = q;
    }
    for(long long int i = 2 ; i <= a ; i++)
    {
        d = b + c;
        b = c;
        c = d;
    }
if(m == 0)
q = 0;
if(a == 0)
d = 0;
    long long int result;
    result = ((q%10) * (d%10))%10;
    cout<<result;
    return 0;
}

