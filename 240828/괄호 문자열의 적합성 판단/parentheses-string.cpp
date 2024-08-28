#include<iostream>
#include<vector>
using namespace std;

int main(){
    string brackets;cin>>brackets;
    vector<char> stack;
    bool anw= true;
    for(auto i:brackets){
        if(i=='('){
            stack.push_back('(');
        }
        else{
            if(stack.empty()){
                anw=false;
                break;
            }
            stack.pop_back();
        }
    }
    if(!stack.empty())anw=false;
    anw?cout<<"Yes":cout<<"No";
}