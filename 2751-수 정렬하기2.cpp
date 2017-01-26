#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long num[n];
    for(long long i=0;i<n;++i)
        cin>>num[i];

    sort(num,num+n);

    for(long long i=0;i<n;++i)
        cout<<num[i]<<"\n";

    return 0;
}
