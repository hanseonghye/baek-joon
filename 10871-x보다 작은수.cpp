#include <iostream>
using namespace std;

int main()
{
    int num1,num2;
    cin>>num1>>num2;
    
    for(int i=0;i<num1;++i){
        int num;
        cin>>num;
        if(num<num2)
            cout<<num<<" ";
    }

    return 0;
}
