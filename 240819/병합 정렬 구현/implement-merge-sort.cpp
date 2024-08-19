#include<iostream>
#include<vector>

using namespace std;
void merge_sort(vector<int>&arr,int left,int right);
void merge(vector<int>&arr,int left, int mid, int right);
int main(){
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    merge_sort(arr,0,n-1);
    for(auto i:arr)cout<<i<<" ";
    return 0;
}
void merge_sort(vector<int>&arr,int left,int right){
    if(left<right){
        int mid=(right-left)/2+left;
        merge_sort(arr,left,mid);
        merge_sort(arr,mid+1,right);
        merge(arr,left,mid,right);
    }
}
void merge(vector<int>&arr,int left, int mid, int right){
    vector<int> temp;
    int i=left,j=mid+1;
    while(i<=mid&&j<=right){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=right){
        temp.push_back(arr[j]);
        j++;
    }
    for(int index=left;index<(int)temp.size();index++){
        arr[index]=temp[index];
    }
}