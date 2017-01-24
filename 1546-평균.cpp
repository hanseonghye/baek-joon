#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    double a,m=0;
    cin>>a;
    double score[1000];
    for(int i=0;i<a;++i){
        cin>>score[i];
        if(score[i]>m)
            m=score[i];
    }

    double sum=0;
    for(int i=0;i<a;++i){
        score[i]=(score[i]/m)*100;
        sum+=score[i];

    }
    double avg=sum/a;
  //  printf("%f  %f \n",avg,sum);
    avg= ( ( floor( (avg*100) + 0.5 ) ) / 100 );
    printf("%.2f",avg);

    return 0;
}
