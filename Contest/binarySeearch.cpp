#include<iostream>

using namespace std;
int binary_search(int arr[],int x,int low,int high){
    if(high>=low){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            return mid;
        }if(arr[mid]<x){
            return binary_search(arr,x,mid,high);
        }else{
            return binary_search(arr,x,low,mid);
        }    
    }
    
}
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
 
    if(k<arr[0]){
        cout<<-1;
    }
    else if(k>arr[n-1]){
        cout<<-1;
    }
    else{
        int out=binary_search(arr,k,0,n);
        cout<<out;
    }
    return 0;
}