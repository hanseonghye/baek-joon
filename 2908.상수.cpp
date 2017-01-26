#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    char num1[3],num2[3];
    cin>>num1>>num2;

    for(int i=0;i<3;++i){
        if(num1[2-i]>num2[2-i]){
            for(int j=2;j>=0;--j)
                cout<<num1[j];
            return 0;
        }
        else if(num1[2-i]<num2[2-i]){
            for(int j=2;j>=0;--j)
                cout<<num2[j];
            return 0;
        }

    }

    return 0;
}

