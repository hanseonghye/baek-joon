#include <iostream>
using namespace std;

int main()
{
    int number[8];
    for(int i=0;i<8;++i)
        cin>>number[i];
    int i;
    if(number[0]==1){
        for(i=1;i<8;++i){
            if(number[i]!=(number[i-1]+1)){
                cout<<"mixed";
                return 0;
            }
        }
        if(i==8){
            cout<<"ascending";
            return 0;
        }
    }
    else if(number[0]==8){
        for(i=1;i<8;++i){
            if(number[i]!=(number[i-1]-1)){
                cout<<"mixed";
                return 0;
            }
        }
        if(i==8){
            cout<<"descending";
            return 0;
        }
    }
    else {
        cout<<"mixed";
        return 0;
    }
}
