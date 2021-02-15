class Pair{
    public:
    Node<int>* head;
    Node<int>* tail;
};
Pair helper(BinaryTreeNode<int>* root){
    if(root==NULL){
        Pair ans;
        ans.head=NULL;
        ans.tail=NULL;
        return ans;
    }
    Pair leftAns=helper(root->left);
    Pair rightAns=helper(root->right);
    
    Node<int>* newNode=new Node<int>(root->data);
    if(leftAns.tail!=NULL){
        leftAns.tail->next=newNode;
    }
        newNode->next=rightAns.head;
    Pair ans;
    if(leftAns.head!=NULL){
        ans.head=leftAns.head;
    }
    else
        ans.head=newNode;
    if(rightAns.tail!=NULL){
        ans.tail=rightAns.tail;
    }
    else
        ans.tail=newNode;
    
    return ans;
    
}
Node<int>* constructBST(BinaryTreeNode<int>* root) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    Pair ll=helper(root);
    
    return ll.head;
    
}
