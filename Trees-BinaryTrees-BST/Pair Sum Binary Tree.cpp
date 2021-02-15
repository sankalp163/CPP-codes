#include <bits/stdc++.h>
void pairSum(vector<int> &v,int size,int sum){
    //sort(v.begin(),v.end());
    //No sorting is required in case of a BST since inorder traversal enters elements in sorted manner in case of BST.
    
    int i=0;
    int j=size-1;
    
    
    while(i<j){
        
        if(v[i]+v[j]<sum){
            i++;
        }
        else if(v[i]+v[j]>sum){
            j--;
        }
        else if(v[i]+v[j]==sum){
            cout<<v[i]<<" "<<v[j]<<endl;
            i++;
            j--;
        }
        
    }
    
    
}
void helper(BinaryTreeNode<int>* root,vector<int> &v){
    if(root==NULL){
        return ;
    }
    
    helper(root->left,v);
    v.push_back(root->data);
    helper(root->right,v);

}
int numOfNodes(BinaryTreeNode<int>* root){
    if(root==NULL){
        return 0;
    }
    int leftTree=numOfNodes(root->left);
    int rightTree=numOfNodes(root->right);
    
    return leftTree+rightTree+1;
}
void nodesSumToS(BinaryTreeNode<int> *root, int sum) {
    // Write your code here
    int size=numOfNodes(root);
    vector<int> v;
	helper(root,v);
    pairSum(v,size,sum);
    
}

