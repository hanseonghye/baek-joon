#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    double case_num,st_num;
    double sum=0,avg,big_st=0;
    double st_score[1000];
    cin>>case_num;
    for(int i=0;i<case_num;++i){
        cin>>st_num;
        for(int j=0;j<st_num;++j){
            int my_num;
            cin>>my_num;
            st_score[j]=my_num;
            sum+=my_num;
        }
        avg=sum/st_num;

        for(int j=0;j<st_num;++j){
            if(st_score[j]>avg)
                ++big_st;

        }
        double percent=big_st/st_num;
        percent=percent*100;
        percent= ( ( floor( (percent*1000) + 0.5 ) ) / 1000 );
        printf("%.3f\%\n",percent);
        sum=0;
        big_st=0;

    }


    return 0;
}
