#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int sum =0, maximum = INT_MIN;
    for(int i = 0; i<sizeof(arr)/sizeof(arr[0]); i++){
        // cout<<maximum;
        sum=sum+arr[i];
        if(sum>maximum){
            maximum=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    cout<<maximum;


return 0;
}