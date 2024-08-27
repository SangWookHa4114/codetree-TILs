#include<iostream>
#include<vector>

using namespace std;
void heapify(int now,vector<int>&arr,int n);
void heap_sort(vector<int>&arr,int n);
int main(){
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    heap_sort(arr,n);
    for(auto i:arr)cout<<i<<" ";
}
void heapify(int now,vector<int>&arr,int n){
    int left=now*2+1,right=now*2+2,largest=now;
    if(left<n && arr[left]>arr[largest])largest=left;
    if(right<n && arr[right]>arr[largest])largest=right;
    if(largest!=now){
        swap(arr[now],arr[largest]);
        heapify(largest,arr,n);
    }
}
void heap_sort(vector<int>&arr,int n){
    for(int i=n/2-1;i>=0;i--)heapify(i,arr,n);
    for(int i=n-1;i>0;i--){
        swap(arr[0],arr[i]);
        heapify(0,arr,i);
    }
}