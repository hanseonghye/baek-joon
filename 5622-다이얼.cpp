#include <iostream>
#include <string>
using namespace std;

int sum=0;

void dial(char a){
    if(a>='A'&&a<='C')
        sum+=(2+1);
    else if(a>='D'&&a<='F')
        sum+=(3+1);
    else if(a>='G'&&a<='I')
        sum+=(4+1);
    else if(a>='J'&&a<='L')
        sum+=(5+1);
    else if(a>='M'&&a<='O')
        sum+=(6+1);
    else if(a>='P'&&a<='S')
        sum+=(7+1);
    else if(a>='T'&&a<='V')
        sum+=(8+1);
    else if(a>='W'&&a<='Z')
        sum+=(9+1);

}

int main()
{
    string str;
    cin>>str;

    for(int i=0;i<str.length();++i)
        dial(str[i]);
    cout<<sum;

    return 0;
}
