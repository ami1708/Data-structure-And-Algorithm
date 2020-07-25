#include<bits/stdc++.h>
using namespace std;

bool cmp(string x , string y)
{
    return (x + y) > (y + x);
}

int main()
{
    int n;
    cin>>n;
    vector<string> a;
    for(int i = 0 ; i < n ;i++)
    {
        string s;
        cin>>s;
        a.push_back(s);
    }
    sort(a.begin() , a.end() , cmp);
    string ans = "";
    for(int i = 0 ; i < n ; i++)
    {
        ans = ans + a[i];
    }
    cout<<ans;
    return 0;
}
