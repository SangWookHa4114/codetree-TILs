#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int count_digit(int n);
int get_digit_num(int n,int digit);
int main(){
    int n,max=0; cin>>n;
    vector<int> arr(n),new_arr;
    vector<vector<int>> digit;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        int comp=count_digit(arr[i]);
        if(max<comp)max=comp;
    }
    for(int i=1;i<=max;i++){
        digit.clear();
        digit.resize(10);
        new_arr.resize(0);
        for(int j=0;j<n;j++)digit[get_digit_num(arr[j],i)].push_back(arr[j]);
        for(int j=0;j<10;j++){
            if(!digit[j].empty()){
                for(int k=0;k<(int)digit[j].size();k++)new_arr.push_back(digit[j][k]);
            }
        }
        arr=new_arr;
    }
    for(auto i:arr)cout<<i<<" ";
    return 0;
}
int count_digit(int n){
    if(n==0)return 1;
    int cnt=0;
    while(n>0){
        n/=10;
        cnt++;
    }
    return cnt;
}
int get_digit_num(int n,int digit){
    if(n==0)return 0;
    if(n<(int)pow(10,digit-1))return 0;
    for(int i=0;i<digit-1;i++)n/=10;
    return n%10;
}