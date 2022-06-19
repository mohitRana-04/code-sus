#include <bits/stdc++.h>
using namespace std;

int main(){
    // 2, 1, 5, 6, 2, 3
    // output -> -1, -1, 1, 5, 1, 2
    int arr[] = {2, 1, 5, 6, 2, 3};
    stack<int> s1;
    vector<int> v1;
    
    int arr_size = sizeof(arr)/sizeof(arr[0]);
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
    for(auto x: v1){
        cout<<x;
    }

    


    return 0;
}