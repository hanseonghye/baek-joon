#include <iostream>

using namespace std;

int main()
{

	int num; cin>>num;
	int n=1;

	for(int i=2;i<=num;++i)
        n=n*i;
    cout<<n;



	return 0;
}
