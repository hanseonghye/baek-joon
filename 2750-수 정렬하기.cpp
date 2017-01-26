#include <iostream>
#include <stdio.h>
#include <cstring>

using namespace std;

int main()
{
    int num[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;++i)
        cin>>num[i];

    for(int i=0;i<n;++i){
        for(int j=0;j<i;++j){
            if(num[j]>num[i]){
                int temp=num[j];
                num[j]=num[i];
                num[i]=temp;
            }
        }
    }

    for(int i=0;i<n;++i)
        cout<<num[i]<<endl;

    return 0;
}
