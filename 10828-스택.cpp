#include <iostream>
#include <vector>

using namespace std;

vector<int> vec1;


void push(){
    int num;
    cin>>num;
    vec1.push_back(num);
}

void top(){
    if(vec1.empty())
        cout<<"-1\n";
    else cout<<vec1.back()<<"\n";
}

void pop(){
    if(vec1.empty())
        cout<<"-1\n";
    else {
        cout<<vec1.back()<<"\n";
        vec1.pop_back();
    }
}

int main()
{
    int num;
    cin>>num;

    for(int i=0;i<num;++i){
        string doing;
        cin>>doing;
        if(doing=="push")
            push();
        else if(doing=="top")
            top();
        else if(doing=="size")
            cout<<vec1.size()<<endl;
        else if(doing=="empty")
            cout<<vec1.empty()<<endl;
        else if(doing=="pop")
            pop();
    }

   return 0;
}
