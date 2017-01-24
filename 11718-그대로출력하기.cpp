#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1;
    getline(cin,s1);
    while(s1.length()!=0){
        s1=s1+"\n";
        cout<<s1;
        getline(cin,s1);
    }

	return 0;
}
