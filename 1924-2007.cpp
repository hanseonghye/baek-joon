#include <iostream>
#include <string>
using namespace std;

int main()
{
    string date[7]={"SUN","MON","TUE","WED","THU","FRI","SAT"};
    int day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int x,y,sum=0;
    cin>>x>>y;

    for(int i=0;i<x-1;++i)
        sum+=day[i];

    sum+=y;
   // cout<<sum;
    sum=sum%7;
    cout<<date[sum];

    return 0;
}
