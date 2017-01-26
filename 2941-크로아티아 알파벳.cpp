#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main()
{
    string str;
    int c=0;
    cin>>str;

    for(int i=0;i<str.length();++i){

        if((str[i]=='c')&&(str[i+1]=='=')){
            ++c;
            ++i;
        }
        else if(str[i]=='c'&&str[i+1]=='-'){
            ++c;
            ++i;
        }
        else if(str[i]=='d'&&str[i+1]=='z'&&str[i+2]=='='){
            ++c;
            i=i+2;
        }
        else if(str[i]=='d'&&str[i+1]=='-'){
            ++c;
            ++i;
        }
        else if(str[i]=='l'&&str[i+1]=='j'){
            ++c;
            ++i;
        }
        else if(str[i]=='n'&&str[i+1]=='j'){
            ++c;
            ++i;
        }
        else if(str[i]=='s'&&str[i+1]=='='){
            ++c;
            ++i;
        }
        else if(str[i]=='z'&&str[i+1]=='='){
            ++c;
            ++i;
        }
        else ++c;
    }

    cout<<c;

    return 0;
}

