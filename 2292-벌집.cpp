#include <iostream>
#include <cmath>

using namespace std;
void bee(long num){
        cout<<ceil((pow(12LL*num-3,0.5)+3)/6);
}

int main()
{
    long n;
    cin>>n;
    bee(n);

   return 0;
}
