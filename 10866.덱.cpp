#include <iostream>
#include <deque>
using namespace std;

deque<int> my1;

void fun(){
    string str;
    cin>>str;
    if(str=="push_back"){
        int num;
        cin>>num;
        my1.push_back(num);
    }
    
    else if(str=="push_front"){
        int num;
        cin>>num;
        my1.push_front(num);
    }
    
    else if(str=="pop_front"){
        if(my1.empty())
            cout<<"-1\n";
        else {
            cout<<my1.front()<<"\n";
            my1.pop_front();
        }
    }
    
    else if(str=="pop_back"){
        if(my1.empty())
            cout<<"-1\n";
        else {
            cout<<my1.back()<<"\n";
            my1.pop_back();
        }
    }
    
    else if(str=="size")
        cout<<my1.size()<<"\n";
        
    else if(str=="empty")
        cout<<my1.empty()<<"\n";
        
    else if(str=="front"){
        if(my1.empty())
            cout<<"-1\n";
        else
            cout<<my1.front()<<"\n";
    }
    
    else if(str=="back"){
        if(my1.empty())
            cout<<"-1\n";
        else
            cout<<my1.back()<<"\n";
    }
}

int main()
{
    int number;
    cin>>number;
    for(int i=0;i<number;++i){
       fun();
    }
}
