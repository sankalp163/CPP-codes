#include<string>
#include<vector>
vector<vector<int>> print(BinaryTreeNode<int>* root,int k,vector<int> &current, vector<vector<int>> &ans){
    if(root==NULL){
        vector<vector<int>> ans;
        return ans;
    }
    
    k=k-root->data;
    current.push_back(root->data);
    
    if(root->left==NULL && root->right==NULL){
        if(k==0){
            ans.push_back(current);
        }
        else{
            current.pop_back();
        }
    }
    
    
    print(root->left,k-root->data, current,ans);
    print(root->right,k-root->data,current,ans);
    
    current.pop_back();
    
    return ans;
    
    
}
void rootToLeafPathsSumToK(BinaryTreeNode<int> *root, int k) {
    // Write your code here
    
    vector<int> current;
    vector<vector<int> > ans=print(root, k, current, ans);
    
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
