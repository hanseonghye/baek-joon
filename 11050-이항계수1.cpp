#include <iostream>

using namespace std;

int fibo(int f){
    if(f<=1)
        return 1;
    else return f*fibo(f-1);
}

void biomial(int n,int c){
    cout <<fibo(n)/(fibo(c)*fibo(n-c));
}

int main(){

    int n,c;
    cin>>n>>c;

    biomial(n,c);

}
