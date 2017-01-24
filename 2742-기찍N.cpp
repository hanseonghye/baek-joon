#include <iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;
    cout<<num;

    if(num>1){
        for(int i=num-1;i>=1;--i){
            cout<<"\n"<<i;
        }
    }
    return 0;
}
