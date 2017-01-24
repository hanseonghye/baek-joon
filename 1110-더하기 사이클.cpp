#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int num,number,c=0,num1,num2;
    cin>>num;
    number=num;
    num1=num/10;
    num2=num%10;
    num=num2*10+(num2+num1)%10;
    ++c;

    while(num!=number){
            num1=num/10;
            num2=num%10;
            num=num2*10+(num2+num1)%10;
            ++c;
       //     cout<<num<<","<<c<<endl;
    }
   // cout<<num<<"\n";
    cout<<c;


}
