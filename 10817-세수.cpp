#include <iostream>
using namespace std;

int main()
{
    int num[3];
    cin>>num[0]>>num[1]>>num[2];
    for(int i=0;i<3;++i){
        for(int j=i;j<3;++j){
            if(num[j]>num[i]){
                int temp=num[j];
                num[j]=num[i];
                num[i]=temp;
            }
        }
    }

    cout<<num[1];

    return 0;
}
