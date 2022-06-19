#include <bits/stdc++.h>
using namespace std;

int main(){
    // 2, 1, 5, 6, 2, 3
    // output -> 1, 6, 2, 2, 6, 6
    int arr[] = {2, 1, 5, 6, 2, 3};
    stack<int> s;
    vector<int> v;
    
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    // cout<<arr_size;
    for(int i = arr_size-1; i>= 0; i--){
        // cout<<arr[i];
        if(s.empty()){
            v.push_back(arr_size);
        }
        else if(!s.empty() && s.top()< arr[i]){
            v.push_back(s.top());
        }
        else if(!s.empty() && s.top()>=arr[i]){
            while(!s.empty() && s.top()>=arr[i]){
                s.pop();
            }
            if(s.empty()){
                v.push_back(arr_size);
            }
            else{
                v.push_back(s.top());
            }
        }
        s.push(arr[i]);
    }
    for(auto x: v){
        cout<<x;
    }

    


    return 0;
}