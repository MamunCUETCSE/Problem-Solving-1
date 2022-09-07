#include<bits/stdc++.h>
#include<algorithm>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    int arr[n],arr1[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i]>>arr1[i];
    v.push_back(make_pair(arr[i],arr1[i]));
    }
    sort(v.begin(),v.end());
    for(auto it:v)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
}
