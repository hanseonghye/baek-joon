#include <iostream>
#include <string>
using namespace std;

void fivo(int num){
    long long n1=0,n2=1;

    for(int i=1;i<num;++i){
        long long temp=n1;
        n1=n2;
        n2=n1+temp;
    }
    cout<<n2;
}

int main()
{
    int n;
    cin>>n;

    if(n==0)
        cout<<"0";
    else
        fivo(n);

    return 0;
}

