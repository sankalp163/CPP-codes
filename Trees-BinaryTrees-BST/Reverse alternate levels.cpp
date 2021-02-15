#include<stack>
void inorder(BinaryTreeNode<int>* root){
    if(root==NULL){
        return;
    }
    
    inorder(root->left);
    
    cout<<root->data<<" ";
    inorder(root->right);
}
void solve(BinaryTreeNode<int>* root){
    	/* Don't write main().
	* Don't read input, it is passed as function argument.
	* Print the preorder traversal of output tree
	*/
    if(root==NULL){
        return;
    }
    queue<BinaryTreeNode<int>*>pendingNodes;
    pendingNodes.push(root);
    stack<int> s;
    int level=1;
    int n;
    while(pendingNodes.size()!=0){
        n=pendingNodes.size();
        while(n--){
        BinaryTreeNode<int>* front=pendingNodes.front();
        pendingNodes.pop();
        
            if(level%2!=0){
                if (front->left) { 
                    pendingNodes.push(front->left); 
                    s.push(front->left->data); 
                } 
  
                if (front->right) { 
                    pendingNodes.push(front->right); 
                    s.push(front->right->data); 
                } 
            }
            else {  
                front->data = s.top(); 
                s.pop(); 
  
                if (front->left) 
                    pendingNodes.push(front->left); 
                if (front->right) 
                    pendingNodes.push(front->right); 
            }
        }
        level++;
	}
    
    inorder(root);
}

