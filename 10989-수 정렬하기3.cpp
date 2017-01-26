#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 10000
int main()
{
    int num[10001]={0,};
    int n;
    cin>>n;

    for(int i=0;i<n;++i){
        int input;
        cin>>input;
        num[input]++;
    }

    for(int i=0;i<=MAX;++i){
        for(int j=0;j<num[i];++j)
            cout<<i<<"\n";
    }
    return 0;
}
