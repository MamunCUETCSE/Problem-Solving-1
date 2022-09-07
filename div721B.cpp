#include<bits/stdc++.h>
using namespace std;
void StringGame();
int main()
{
    int test;
    cin>>test;
    while(test--)
    StringGame();

}
void StringGame()
{
    int n,Count = 0;
    cin>>n;
    string s;
    cin>>s;
    bool is_palindrome = 1;
    for(int i=0;i<n;i++)
    {
        Count += s[i]=='0';
    }
    if(Count==1){
        cout<<"BOB"<<"\n";
    return;
    }
    if(Count%2){
        cout<<"ALICE"<<endl;
        return;
        }

        cout<<"BOB"<<"\n";
        return;
}
