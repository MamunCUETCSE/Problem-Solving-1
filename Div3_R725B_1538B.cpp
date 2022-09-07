#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0;
        cin>>n;
        vector<int>v(n);
        for(int &it :v)
        {
            cin>>it;
            sum+=it;
        }
        if(sum%n)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            int cnt=0;
            sum/=n;
            for(int &it :v)
            {
                if(sum<it)
                    cnt++;
            }
            cout<<cnt<<endl;

        }
    }
}
