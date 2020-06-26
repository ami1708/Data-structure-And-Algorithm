#include<bits/stdc++.h>
using namespace std;

int binary_search(int a[] , int n , int x)
{
    int start = 0;
    int end = n-1;
    while(start <= end)
    {
        int mid = (start + end)/2;
        if(a[mid] == x)
        {
            return mid;
        }
        else if(x < a[mid])
            end = mid-1;
        else
            start = mid+1;
    }
    return -1;
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
    int k;
    cin>>k;
    int b[k];
    for(int i = 0 ; i < k ; i++)
    {
        cin>>b[i];
    }
    for(int i = 0 ; i < k ; i++)
    {
        cout<<binary_search(a , n , b[i])<<" ";
    }
}
