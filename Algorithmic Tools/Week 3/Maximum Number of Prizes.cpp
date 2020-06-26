#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    int sum = n;
    for(int i = 1 ; i <= n ; i++)
    {
        if((sum - i) <= i )
        {
            v.push_back(sum);
            break;
        }
        else if(i <= sum)
        {
            v.push_back(i);
            sum = sum - i;
        }
    }
    cout<<v.size()<<"\n";
    for(int i = 0 ; i < v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
