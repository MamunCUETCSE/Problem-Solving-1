#include<bits/stdc++.h>
#include<iostream>
#include<cstdio>
#include<stdlib.h>
#include<vector>
#include<map>
#include<list>
#include<iterator>
#define flr(i,a,b) for(int i=a,i<=b;i++)
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
int main()
{
    map<int, int>mp;
    map<int, list<int>>mp1;
    map<int,pair<int, int>>mp2;
    mp.insert({1,5});
    mp.insert({2,6});
    mp.insert({0,10});
    map<int, int>::iterator it,it1;
    for( it=mp.begin();it!=mp.end();it++)
    {cout<<it->first<<" "<<it->second<<endl;}
    int n;cin>>n;
     int v,nv;
    for(int i=0;i<n;i++)
    {

        cin>>v>>nv;
        mp1[v].push_back(nv);
    }
    for(it1=mp1.begin();it1!=mp1.end();it1++)
    {
        cout<<mp1[it];
    }
}
