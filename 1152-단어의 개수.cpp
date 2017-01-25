#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    int t=1,c=0;

    for(int i=0;i<str.size();++i){
        if(str[i]==' ')
            t=1;
        else {
            if(t==1)
                c++;
                t=0;
        }

    }
    cout<<c;

}
