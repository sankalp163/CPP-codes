vector<int>* findPath(BinaryTreeNode<int> *root , int data){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
     if(root==NULL){
         return NULL;
     }
    
    if(root->data==data){
        vector<int>* output=new vector<int>();
        output->push_back(root->data);
        
        return output;
    }
    if(root->data >data){
    vector<int>* leftOutput=findPath(root->left,data);
    if(leftOutput!=NULL){
        leftOutput->push_back(root->data);
        return leftOutput;
    }
    }
    
    if(root->data < data){
    vector<int>* rightOutput=findPath(root->right,data);
    if(rightOutput!=NULL){
        rightOutput->push_back(root->data);
        return rightOutput;
    }
    }
    else{
        return NULL;
    }
    
