#include<bits/stdc++.h>
using namespace std;
void palindromeHard();
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin>>test;
    while(test--){
    palindromeHard();
    }
    return 0;
}
void palindromeHard()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool is_palindrome = 1;
    int Count_zero=0, Count_one=0;
    for(int i=0;i<n; i++)
    {
        if(s[i]=='0')
            Count_zero++ ;
    }
    for(int i=0; i<n/2; i++)
    {
        if(s[i] != s[n-1-i]) is_palindrome=0;
        if((s[i]=='1' || s[n-1-i]=='1') && s[i]!=s[n-1-i]){
            Count_one++;}
    }
    if(is_palindrome)
    {
        if(Count_zero==1){
            cout<<"BOB"<<"\n";
            return;
        }
        if(Count_zero%2)
        {
            cout<<"ALICE"<<"\n";
            return;
        }
        cout<<"BOB"<<"\n";
        return;
    }
    if(Count_zero ==2 && Count_one==1)
    {
        cout<<"DRAW"<<"\n";
        return;
    }
    cout<<"ALICE"<<"\n";
    return;

}
