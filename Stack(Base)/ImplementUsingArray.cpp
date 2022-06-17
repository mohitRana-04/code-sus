#include <bits/stdc++.h>
using namespace std;

void push(int &arr, int top, int push_element){
    arr[++top] = push_element;
}

int main(){
    int arr[5], top = -1, push_element = 5;
    cout<<top;
    push(arr, top, push_element);
return 0;
}