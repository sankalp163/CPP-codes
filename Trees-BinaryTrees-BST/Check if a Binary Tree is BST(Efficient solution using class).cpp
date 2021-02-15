#include<limits.h>
class triplet{
    public:
    bool isBST;
    int max_data;
    int min_data;
};
triplet helper(BinaryTreeNode<int>* root){
    if(root ==NULL){
        triplet obj;
        obj.isBST=true;
        obj.max_data=INT_MIN;
        obj.min_data=INT_MAX;
        
        return obj;
    }
    triplet leftData=helper(root->left);
    triplet rightData=helper(root->right);
    int minimum=min(root->data,min(leftData.min_data,rightData.min_data));
    int maximum=max(root->data,max(leftData.max_data,rightData.max_data));
        
    bool isBST_final= (root->data>leftData.max_data)&&(root->data<=rightData.min_data)&&(leftData.isBST)&&(rightData.isBST);
        
    triplet output;
    output.max_data=maximum;
    output.min_data=minimum;
    output.isBST=isBST_final;
    
    return output;
    
    
}
bool isBST(BinaryTreeNode<int> *root){
       /* Don't write main().
	* Don't read input, it is passed as function argument.
	* Return output and don't print it.
	* Taking input and printing output is handled automatically.
	*/
    triplet ans=helper(root);
    
    return ans.isBST;

}
