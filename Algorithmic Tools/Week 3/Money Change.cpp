#include<bits/stdc++.h>
using namespace std;

int get_change(int m)
{
    int ten = m/10;
    m = m%10;
    int five = m/5;
    m = m%5;
    int result = ten + five + m;
    return result;
}

int main()
{

    int m ;
    cin>>m;
    cout<<get_change(m)<<"\n";
}
