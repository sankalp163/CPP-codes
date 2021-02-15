bool hasData(BinaryTreeNode<int>* root, int val){
    if(root==NULL){
        return false;
    }
    
    if(root->data==val){
        return true;
    }
    
    bool leftAns=hasData(root->left,val);
    bool rightAns=hasData(root->right,val);
    
    return leftAns||rightAns;
    
}
int lcaBinaryTree(BinaryTreeNode <int>* root , int val1, int val2){
    // Write your code here
    
    if(root==NULL){
        return -1;
    }
    bool temp1=hasData(root,val1);
    bool temp2=hasData(root,val2);
    if(temp1==false || temp2==false){
        return -1;
    }
    if(temp1==true && temp2==true){
        int leftAns=0;
        int rightAns=0;
        if(val1==root->data||val2==root->data){
            return root->data;
        }
        bool temp1Left=hasData(root->left,val1);
        bool temp1Right=hasData(root->right,val1);
        bool temp2Left=hasData(root->left,val2);
        bool temp2Right=hasData(root->right,val2);
        
        if((temp1Left==true && temp2Right==true) || (temp1Right==true && temp2Left==true)){
            return root->data;
        }
        
        else if(temp1Left==true && temp2Left==true){
            leftAns=lcaBinaryTree(root->left,val1,val2);
        }
        else if(temp1Right==true && temp2Right==true){
            rightAns=lcaBinaryTree(root->right,val1,val2);
        }
        
        if(leftAns==0){
            return rightAns;
        }
        else if(rightAns==0){
            return leftAns;
        }
    }

}

