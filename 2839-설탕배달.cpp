#include <iostream>

using namespace std;

int main()
{
    int s;
    int five,sum;
    cin>>s;

    if(s%5==0){
        cout<<s/5;
        return 0;
    }

    five=s/5;

    for(int i=five;i>=0;--i){
        if((s-i*5)%3==0){
            sum=i+(s-i*5)/3;
            cout<<sum;
            return 0;
        }

    }

    cout<<"-1";

    return 0;
}
