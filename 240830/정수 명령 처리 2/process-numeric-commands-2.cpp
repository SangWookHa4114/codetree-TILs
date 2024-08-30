#include<iostream>
#include<queue>

using namespace std;

int main(){
    int n;cin>>n;
    queue<int> q;
    for(int i=0;i<n;i++){
        string temp;cin>>temp;
        if(temp=="push"){
            int A;cin>>A;
            q.push(A);
        }
        if(temp=="pop"){
            cout<<q.front()<<endl;
            q.pop();
        }
        if(temp=="size")cout<<q.size()<<endl;
        if(temp=="empty"){
            if(q.empty())cout<<"1"<<endl;
            else cout<<"0"<<endl;
        }
        if(temp=="front")cout<<q.front()<<endl;
    }
}