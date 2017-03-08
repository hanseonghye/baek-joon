#include <iostream>
#include <queue>

using namespace std;

queue<int> que1;
int number;

void push(){
    int n;
    cin>>n;
    que1.push(n);
}



void fun1()
{
    string doing;
    cin>>number;

    for(int i=0;i<number;++i){
        cin>>doing;
        if(doing=="push"){
            push();
        }
        else if(doing=="front"){
            if(que1.empty()==1)
                cout<<"-1\n";
            else
                cout<<que1.front()<<"\n";
        }
        else if(doing=="back"){
            if(que1.empty()==1)
                cout<<"-1\n";
            else
                cout<<que1.back()<<"\n";
        }
        else if(doing=="size"){
            cout<<que1.size()<<"\n";
        }
        else if(doing=="empty"){
            cout<<que1.empty()<<"\n";
        }
        else if(doing=="pop"){
             if(que1.empty()==1)
                cout<<"-1\n";
            else{
                cout<<que1.front()<<"\n";
                que1.pop();
            }

        }

    }
}

int main()
{
    fun1();
}
