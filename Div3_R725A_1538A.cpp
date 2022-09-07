#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr),cout.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int &element : v)
        {
            cin>>element;
        }
        int maxp=max_element(v.begin(),v.end())-v.begin();
        int minp = min_element(v.begin(),v.end())-v.begin();
        cout<<min({
                  max(maxp,minp)+1,
                  (n-1)-min(maxp,minp)+1,
                  (n-1)-maxp+minp+2,
                  (n-1)-minp+maxp+2})<<endl;
    }
}
