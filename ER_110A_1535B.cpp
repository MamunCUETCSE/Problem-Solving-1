#include<bits/stdc++.h>
using namespace std;
int compare(int x, int y){
return x%2 < y%2;
}

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int k;
        cin>>k;
        vector<int>vec(k);
        for(int& i:vec) cin>>i;
        sort(vec.begin(),vec.end(),compare);
        int cnt=0;
        for(int i=0;i<k;i++)
        {
            for(int j=i+1;j<k;j++)
            {
                if(__gcd(vec[i],2*vec[j])>1)
                    cnt++;

            }
        }
        cout<<cnt<<endl;
        flush(cout);
    }
}
