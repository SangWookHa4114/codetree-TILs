#include<iostream>
#include<vector>
using namespace std;
void push(int&top,vector<int>&stack,int n);
void pop(int&top,vector<int>&stack);
void size(int&top);
void empty(int&top);
void get_top(int&top,vector<int>&stack);
int main(){
    int n;cin>>n;
    vector<int> stack(10001);
    int top=-1;
    for(int i=0;i<n;i++){
        string order;cin>>order;
        if(order=="push"){
            int temp;cin>>temp;
            push(top,stack,temp);
        }
        else if(order=="pop")pop(top,stack);
        else if(order=="size")size(top);
        else if(order=="empty")empty(top);
        else if(order=="top")get_top(top,stack);
    }
}
void push(int&top,vector<int>&stack,int n){
    stack[++top]=n;
}
void pop(int&top,vector<int>&stack){
    cout<<stack[top--]<<endl;
}
void size(int&top){
    cout<<top+1<<endl;
}
void empty(int&top){
    if(top==-1)cout<<1<<endl;
    else cout<<0<<endl;
}
void get_top(int&top,vector<int>&stack){
    cout<<stack[top]<<endl;
}