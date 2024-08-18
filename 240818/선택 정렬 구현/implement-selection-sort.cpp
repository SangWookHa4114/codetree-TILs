#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[min])min=j;
        }
        swap(arr[i],arr[min]);
    }
    for(auto i:arr)cout<<i<<" ";
    return 0;
}