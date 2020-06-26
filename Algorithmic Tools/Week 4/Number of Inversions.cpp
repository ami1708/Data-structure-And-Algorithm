#include<bits/stdc++.h>
using namespace std;
#define MAXN 100005

long long merge(int part1[], int part2[],int size1, int size2, int output[]){
    int i = 0, j = 0, k = 0;
    long long count = 0;
    while(i < size1 && j < size2)
        if(part1[i] <= part2[j])
            output[k++] = part1[i++];
    	else{
            output[k++] = part2[j++];
            count += (size1-i);
        }
    while(i < size1)
        output[k++] = part1[i++];
    while(j < size2)
        output[k++] = part2[j++];
    return count;
}
long long merge_sort(int input[], int n){
    if(n <= 1)
        return 0;

    int size1 = n/2, size2 = n-size1;
    int part1[size1], part2[size2];
    for(int i = 0; i<size1; i++)
        part1[i] = input[i];
    int k = 0;
    for(int i = size1; i<n; i++)
        part2[k++] = input[i];

    long long ans1 = merge_sort(part1, size1);
    long long ans2 = merge_sort(part2, size2);
    long long ans3 = merge(part1, part2, size1, size2, input);
    return ans1+ans2+ans3;
}
long long solve(int A[], int n)
{
	// Write your code here.
    return merge_sort(A, n);
}

int main()
{
	int n,A[MAXN];
	cin>>n;
	for(int i = 0; i < n ; i++){
		cin>>A[i];
	}
	cout<<solve(A,n)<<endl;
}
