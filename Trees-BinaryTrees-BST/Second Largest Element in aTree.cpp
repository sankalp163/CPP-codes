class Pair{
    public:
    TreeNode<int>* max_element;
    TreeNode<int>* second;
};
Pair holder(TreeNode<int> *root){
    Pair p1;
    p1.max_element=NULL;
    p1.second=NULL;
    if(root==NULL){
        return NULL;
    }
    
    for(int i=0;i<root->children.size();i++){
        Pair temp=holder(root->children[i]);
        
        if(p1.max_element==NULL && p1.second==NULL){
            p1.max_element=temp.max_element;
            p1.second=temp.second;
        }
        if(p1.second==NULL && temp.second==NULL){
            if(p1.max_element->data < temp.max_element->data){
                TempNode<int>*x=p1.max_element;
                p1.max_element=temp.max_element;
                p1.second=x;
            }
            else{
                p1.second=temp.max_element;
            }
        }
        if(p1.second==NULL && temp.second!=NULL){
            if(p1.max_element->data < temp.max_element->data){
                TempNode<int>*x=p1.max_element;
                p1.max_element=temp.max_element;
                p1.second=(x->data >temp.second->data)?x:temp.second;
            }
            else{
                p1.second=temp.max_element;
            }
        }
        if(p1.second!=NULL && temp.second==NULL){
            if(p1.max_element->data < temp.max_element->data){
                TempNode<int>*x=p1.max_element;
                p1.max_element=temp.max_element;
                p1.second=x;
            }
            else{
                p1.second=(p1.second->data >temp.max_element->data)?p1.second:temp.max_element;
            }
        }
        if(p1.second!=NULL && temp.second!=NULL){
             if(p1.max_element->data < temp.max_element->data){
                 TempNode<int>*x=p1.max_element;
                 p1.max_element=temp.max_element;
                 p1.second=x;
             }
            else{
                p1.second=(p1.second->data >temp.max_element->data)?p1.second:temp.max_element;
            }
        }
        
        
        
    }
    return p1;
}
TreeNode <int>* secondLargest(TreeNode<int> *root) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    Pair p2=holder(root);
    
    return p2.second;

}


