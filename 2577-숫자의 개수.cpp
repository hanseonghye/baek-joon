#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main()
{
    int a,b,c,num;
    int counting[10]={0,};
    cin>>a>>b>>c;
    num=a*b*c;
   // cout<<num;

    while(num>=1){
        counting[num%10]=counting[num%10]+1;
      //  cout<<num%10<<endl;
        num=num/10;
    }
    for(int i=0;i<10;++i)
        cout<<counting[i]<<endl;

}
