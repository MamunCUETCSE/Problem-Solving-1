#include<bits/stdc++.h>
#include <vector>
using namespace std;
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
     if(a.first < b.first) return true;
    if(a.first == b.first) return a.second > b.second;
    else return false;
}

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    int i;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
    v.push_back(make_pair(x,y));
    }
   sort(v.begin(), v.end(),sortbysec);
    for(auto i:v)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
}
