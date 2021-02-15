#include<queue>
vector<node<int>*> createLLForEachLevel(BinaryTreeNode<int> *root) {
    // Write your code here
	if(root==NULL){
        vector<node<int>*> v;
        return v;
    }
    queue<BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    pendingNodes.push(NULL);
    node<int>*head=NULL;
    node<int>*tail=NULL;
    vector<node<int>*> v;
    
    while(pendingNodes.size()!=0){
        BinaryTreeNode<int> *front=pendingNodes.front();
        pendingNodes.pop();
        if(front==NULL){
            if(pendingNodes.empty()){
                break;
            }
            tail->next=NULL;
            v.push_back(head);
            head=NULL;
            tail=NULL;
            pendingNodes.push(NULL);
            continue;
        }
    
        	if(head==NULL){
            	node<int> *newNode=new node<int>(front->data);
            	head=newNode;
         		tail=newNode;
        	}
        	else{
            	node<int> *newNode=new node<int>(front->data);
            	tail->next=newNode;
            	tail=newNode;
        	}
    
        
        	if(front->left!=NULL && front->left->data!=-1){
            	BinaryTreeNode<int>* child=front->left;
                pendingNodes.push(child);
        	}
            if(front->right!=NULL && front->right->data!=-1){
            	BinaryTreeNode<int>* child=front->right;
                pendingNodes.push(child);
        	}
     }
    tail->next=NULL;
    v.push_back(head);
    return v;
}

