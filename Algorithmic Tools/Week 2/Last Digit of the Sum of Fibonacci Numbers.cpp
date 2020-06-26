#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n , m , o = 0 , p = 1 , q = 1;
    cin>>n;
    m = (n+2)%60;
    for(long long int i = 2 ; i <= m ; i++)
    {
        q = o + p;
        o = p;
        p = q;
    }
if(m == 0)
q = 0;
    int result = (q-1 + 10)%10;
    cout<<result;
    return 0;
}
