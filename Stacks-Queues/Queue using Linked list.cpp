template<typename T>
class Queue {
    Node<T>*head;
    Node<T>*tail;
    int length;
    
    public :
    
    
    Queue() {
        head=NULL;
        tail=NULL;
        length=0;
        
    }
    
    void enqueue(T data) {
        Node<T>* newNode=new Node<T>(data);
        newNode->next=NULL;
        if(isEmpty()){
            head=newNode;
            tail=newNode;
            length++;
        }
        else{
        tail->next=newNode;
        tail=newNode;
        length++;
        }
    }
    
    int getSize() {
        if(isEmpty()){
            return 0;
        }
        
        return length;
        
    }
    
    bool isEmpty() {
        return head==NULL;
    }
    
    T dequeue() {
        // Return 0 if queue is empty
        if(isEmpty()){
            return 0;
        }
        Node<T>*temp=head;
       	head=head->next;
        length--;
        return temp->data;
    }
    
    T front()  {
        // Return 0 if queue is empty
        if(isEmpty()){
            return 0;
        }
        return head->data;
    }
};

