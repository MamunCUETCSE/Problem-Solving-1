#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int test,s[4];
    cin>>test;
    while(test--)
    {
        for(int i=0;i<4;i++)
        {
            cin>>s[i];
        }
            if(min(s[0],s[1])>max(s[2],s[3]) || max(s[0],s[1])< min(s[2],s[3]))
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;

    }
}
