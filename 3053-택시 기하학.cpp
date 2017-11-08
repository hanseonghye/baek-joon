#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;

int main()
{
	int r;
	cin>>r;
	
	printf("%.6f\n",r*r*M_PI);
	printf("%.6f",(double)2*r*r);

	return 0;
}