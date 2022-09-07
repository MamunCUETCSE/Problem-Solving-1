#include<bits/stdc++.h>
using namespace std;
void greatHero()
{
    int Maxn=100000;
    long long A,B,n,a[Maxn],b[Maxn];

        cin>>A>>B>>n;
        for(int i=1;i<=n;i++){
            cin>>a[i];}
         for(int i=1;i<=n;i++){
            cin>>b[i];}
        int64_t lost=0;
        for(int i=1;i<=n; i++){
        lost+=int64_t((b[i]+A-1)/A*a[i]);}
        for(int i=1;i<=n;i++){
        if(B-(lost-a[i])>0)
            {
            cout<<"YES"<<endl;
            return;}
            }
     cout<<"NO"<<endl;
}
int main()
{
    int test;
     cin>>test;
    while(test--)
        greatHero();
}
