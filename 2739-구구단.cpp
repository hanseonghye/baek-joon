#include <iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;
    cout<<num<<" * 1 "<<"= "<<num<<endl;

    if(num>=1){
        for(int i=2;i<=9;++i){
            cout<<num<<" * "<<i<<" = "<<num*i<<endl;
        }
    }
    return 0;
}
