#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n,c=0;
    cin>>n;
    
    for(int i=0;i<n;++i){
        int alp[26]={0,};
        string str;
        cin>>str;
        int check=0;

        for(int j=0;j<str.length();++j){
            if(alp[str[j]-'a']==0){
                alp[str[j]-'a']=1;
            }
            else if(alp[str[j]-'a']==1){
                if(str[j]!=str[j-1])
                   check=1;
            }
        }
        if(check==0)
            ++c;
    }
    cout<<c;

}
