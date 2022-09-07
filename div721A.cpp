#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,n;
    cin>>test;
    while(test--)
    {
        cin>>n;
        int lastValue=0;
        for(int i=0;i<=30;i++)
        {
            if(((n>>i)&1)==1)
              {
                  lastValue = i;
              }
        }
        cout<<(1<<lastValue)-1<<"\n";
    }
return 0;
}
