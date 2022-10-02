#include <bits/stdc++.h>
using namespace std;


int maxHeight(TreeNode* root){
    if (root==NULL){
        return 0 ;
    }

    l = maxHeight(root-> left);
    r = maxHeight(root-> right);
    return 1+ max(l,r)
}

int main(){
    
    return 0;
}