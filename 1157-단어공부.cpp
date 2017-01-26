#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int alp[26]={0,};
    int m=0,m_count=0,m_i;

    for(int i=0;i<str.length();++i){
        if((int)str[i]<97){
            str[i]+=32;
        }
    }

    for(int i=0;i<str.length();++i){
        ++alp[str[i]-97];
    }

    for(int i=0;i<26;++i){
        if(alp[i]>m)
            m=alp[i];
    }

    for(int i=0;i<26;++i){
        if(alp[i]==m){
            ++m_count;
            m_i=i;
        }
        if(m_count>1){
            cout<<"?";
            return 0;
        }
    }
    char mm=m_i+65;
    cout<<(char)mm;


    return 0;
}
