#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++){
        for(int j=i-1;j>=0;j--){
            if(arr[j]>arr[j+1])swap(arr[j],arr[j+1]);
        }
    }
    for(auto i:arr)cout<<i<<" ";
    return 0;
}