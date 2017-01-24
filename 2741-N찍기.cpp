#include <iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;
    cout<<"1";

    if(num>=2){
        for(int i=2;i<=num;++i){
            cout<<"\n"<<i;
        }
    }
    return 0;
}
