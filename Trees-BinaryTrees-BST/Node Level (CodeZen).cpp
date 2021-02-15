int solve(BinaryTreeNode<int>* root, int M){
    // Write your code here
	int num=1;
    
    queue<BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    pendingNodes.push(NULL);
    
    while(pendingNodes.size()!=0){
        BinaryTreeNode<int>* front=pendingNodes.front();
        pendingNodes.pop();
        
        if(front==NULL){
            if(pendingNodes.size()==0){
                break;
            }
            num++;
            pendingNodes.push(NULL);
            continue;
        }
        if(front->data==M){
            return num;
        }
        
        if(front->left!=NULL){
            pendingNodes.push(front->left);
        }
        if(front->right!=NULL){
            pendingNodes.push(front->right);
        }
    }
   
}

