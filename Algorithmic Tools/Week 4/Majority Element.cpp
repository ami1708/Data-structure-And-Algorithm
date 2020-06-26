#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin>>a[i];
    }
    int answer = 0;
    unordered_map<int,int> umap;
    for(int i = 0 ; i < n ; i++)
    {
        umap[a[i]]++;
    }
    int x;
    x = ceil(n/2);
    for(int i = 0 ; i < n ; i++)
    {
        if(umap[a[i]] > x)
            {
                answer = 1;
                break;
            }
    }
    cout<<answer;

}
