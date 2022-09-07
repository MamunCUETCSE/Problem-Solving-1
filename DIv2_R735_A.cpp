#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,mul;
        cin>>n;
        long long arr[n];
        for(long long i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        long long maxn=0;
        for(long long i=0;i<n-1;i++)
        {
            mul=arr[i]*arr[i+1];
            maxn=max(maxn,mul);
        }
        cout<<maxn<<endl;


    }
}