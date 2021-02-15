void printLevelWise(TreeNode<int>* root) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output as specified in the question.
     */
    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0){
        TreeNode<int>* front=pendingNodes.front();
        pendingNodes.pop();
        cout<<front->data<<":";
        for(int i=0;i<front->children.size();i++){
            if(i==front->children.size()-1){
            	cout<<front->children[i]->data;    
                pendingNodes.push(front->children[i]);
            }
            else{
            cout<<front->children[i]->data<<",";
            pendingNodes.push(front->children[i]);
            }
        }
        cout<<endl;
        
        
    }
    
}
