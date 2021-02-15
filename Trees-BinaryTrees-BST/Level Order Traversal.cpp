void printLevelATNewLine(BinaryTreeNode<int> *root) {
    // Write your code here
	if(root->data==-1){
        return;
    }
    
    queue<BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    pendingNodes.push(NULL);
    while(pendingNodes.size()!=0){
        BinaryTreeNode<int>*front=pendingNodes.front();
        pendingNodes.pop();
        if(front == NULL) {
				if(pendingNodes.empty()) {
					break;
				}
				cout << endl;
				pendingNodes.push(NULL);
				continue;
			}
        
        cout<<front->data<<" ";
        if(front->left!=NULL && front->left->data!=-1){
            BinaryTreeNode<int>* child=front->left;
            pendingNodes.push(child);
        }
        
        if(front->right!=NULL && front->right->data!=-1){
            BinaryTreeNode<int>* child=front->right;
            pendingNodes.push(child);
        }
        
    }
}

