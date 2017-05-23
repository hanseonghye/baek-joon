#include <iostream>
#include <math.h>

using namespace std;

int fun(int number){

    if(number<=110){ //111보다 작을 시
        if(number>=100)
            cout<<99;
        else cout<<number;
        return 0;
    }

    if(number==1000){
        return fun(999);
    }

    int mycount=99;
    char num[3];

    for(int i=111;i<=number;++i){
        char num[3];
        num[0]=i%10;
        num[1]=(i%100)/10;
        num[2]=i/100;

    if( ((num[2]-num[1]) == (num[1]-num[0]))  )
        ++mycount;
    }

    cout<<mycount;
    return 1;

}

int main(){
    int my_num;
    cin>>my_num;
    int nothing=fun(my_num);

    return 0;
}
