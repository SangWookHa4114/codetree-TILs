#include<iostream>
#include<deque>

using namespace std;

int main(){
    int n;cin>>n;
    deque<int> deq;
    for(int i=0;i<n;i++){
        string temp;cin>>temp;
        if(temp=="push_front"){
            int A;cin>>A;
            deq.push_front(A);
        }
        if(temp=="push_back"){
            int A;cin>>A;
            deq.push_back(A);
        }
        if(temp=="pop_front"){
            cout<<deq.front()<<endl;
            deq.pop_front();
        }
        if(temp=="pop_back"){
            cout<<deq.back()<<endl;
            deq.pop_back();
        }
        if(temp=="size")cout<<deq.size()<<endl;
        if(temp=="empty"){
            if(deq.empty())cout<<"1"<<endl;
            else cout<<"0"<<endl;
        }
        if(temp=="front")cout<<deq.front()<<endl;
        if(temp=="back")cout<<deq.back()<<endl;
    }
    return 0;
}