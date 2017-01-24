#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int t,sum=0;
    char num[101];
    cin>>t;
    scanf("%s",&num);
    for(int i=0;i<t;++i)
        sum+=(num[i]-'0');
    cout<<sum;
    return 0;
}