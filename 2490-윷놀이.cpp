#include <iostream>

using namespace std;

int get_yoog(int ch){
	switch (ch){
		case 0 : cout<<"E\n";
				 break;
		case 1 : cout<<"A\n";
				 break;
		case 2 : cout<<"B\n";
				 break;
		case 3 : cout<<"C\n";
				 break;
		case 4 : cout<<"D\n";
				 break; 
	}
}

int main()
{
	for(int i=0;i<3;++i){
		
		int yoog=0;
		for(int j=0;j<4;++j){
			int k; cin>>k;
			if(k==0) ++yoog;	
		}
		
		get_yoog(yoog);
		
	}

	return 0;
}

