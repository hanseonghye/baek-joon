#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main()
{
    int n,sum=0,before=0,t=0;
    cin>>n;
    string str;
    int sum1[n];
    for(int i=0;i<n;++i){
        sum=0;
        before=0;
        cin>>str;
        for(int j=0;j<str.length();++j){
            if(str[j]=='O'){
                if(before==0){
                    t=1;
                    sum+=t;
                   // cout<<sum<<" ";
                }
                else {
                    t++;
                    sum+=t;
                   // cout<<sum<<" ";
                }
                before=1;
            }
            else if(str[j]=='X'){
                before=0;
                t=0;
            }
        }
        cout<<sum<<endl;
    }


}
