#include <iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;

    for(int i=1;i<=num;++i){
        for(int k=1;k<i;++k)
            cout<<" ";
        for(int j=num;j>=i;--j)
            cout<<"*";
        cout<<endl;
    }
    return 0;
}
