#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t,t_count=0,r;
    cin>>t;
    string str1;


    while(t_count!=t){
        cin>>r>>str1;
        for(int i=0;i<str1.length();++i){
            for(int j=0;j<r;++j){
                cout<<str1[i];
            }
        }
        cout<<endl;
        ++t_count;
    }

    return 0;
}
