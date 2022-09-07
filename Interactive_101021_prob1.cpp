#include<bits/stdc++.h>
#include<cstdio>
#include<stdlib.h>
#include<cstring>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int left=1,Right=1000000,mid;
    while(left!=Right)
    {
        mid=(left+Right+1)/2;
        printf("%d\n",mid);
        fflush(stdout);
        char s[10];
        scanf("%s",&s);
        if(strcmp(s, "<")==0)
           {
            Right=mid-1;
        }
            else{
                left=mid;
            }
    }
    printf("! %d\n",left);
    fflush(stdout);
    return 0;
}
