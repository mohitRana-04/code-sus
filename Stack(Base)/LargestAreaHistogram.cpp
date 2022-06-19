#include <bits/stdc++.h>
using namespace std;

int main(){
    // 2, 1, 5, 6, 2, 3
    // output -> -1, -1, 1, 5, 1, 2
    int arr[] = {2, 1, 5, 6, 2, 3};
    stack<int> s1;
    vector<int> v1;
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
    reverse(v.begin(), v.end());
    for(auto x: v){
        cout<<x;
    }
    
    // int arr_size = sizeof(arr)/sizeof(arr[0]);
    // cout<<arr_size;
    for(int i = 0; i< arr_size; i++){
        // cout<<arr[i];
        if(s1.empty()){
            v1.push_back(-1);
        }
        else if(!s1.empty() && s1.top()< arr[i]){
            v1.push_back(s1.top());
        }
        else if(!s1.empty() && s1.top()>=arr[i]){
            while(!s1.empty() && s1.top()>=arr[i]){
                s1.pop();
            }
            if(s1.empty()){
                v1.push_back(-1);
            }
            else{
                v1.push_back(s1.top());
            }
        }
        s1.push(arr[i]);
    }
    cout<<endl;
    for(auto x: v1){
        cout<<x;
    }
    cout<<endl;
    for(int i=0; i< arr_size; i++){
        cout<<arr[i]*(v[i]-v1[i]-1)<<endl;
    }

    
    

    


    return 0;
}