#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int partition(vector<int>&arr,int left,int right);
void quick_sort(vector<int>&arr,int left,int right);
int main(){
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    quick_sort(arr,0,n-1);
    for(auto i:arr)cout<<i<<" ";
    return 0;
}
int partition(vector<int>&arr,int left,int right){
    int mid=(right-left)/2+left;
    int pivot_index=max(min(left,mid),min(max(left,mid),right));
    int pivot=arr[pivot_index];
    swap(arr[pivot_index],arr[right]);
    int temp=left-1;
    for(int i=left;i<=right;i++){
        if(arr[i]<pivot){
            swap(arr[++temp],arr[i]);
        }
    }
    swap(arr[++temp],arr[right]);
    return temp;
}
void quick_sort(vector<int>&arr,int left,int right){
    if(left<right){
        int pos= partition(arr,left,right);
        quick_sort(arr,left,pos-1);
        quick_sort(arr,pos+1,right);
    }
}