#include<queue>
long long sumOfNodes(BinaryTreeNode<int> *root, int k) {
     /* Don't write main().
     * Don't read input, they are passed as function arguments.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    int num=1;
    long long sum=0;
    
    queue<BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    pendingNodes.push(NULL);
    
    while(num<=k){
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
        if(num==k){
            sum+=front->data;
        }
        
        if(front->left!=NULL){
            pendingNodes.push(front->left);
        }
        if(front->right!=NULL){
            pendingNodes.push(front->right);
        }
    }
    
    return sum;
    
}

