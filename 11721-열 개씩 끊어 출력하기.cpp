#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1;
    cin>>str1;
    for(int i=0;i<str1.length();){
        cout<<str1[i];
        ++i;
        if(i%10==0)
            cout<<endl;
    }
    return 0;
}
