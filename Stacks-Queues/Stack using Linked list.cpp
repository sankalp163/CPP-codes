template <typename T>
class Stack {
    Node<T> *head;
    int size;		// number of elements prsent in stack
    
    public :
    
    Stack() {
        head=NULL;
        size=0;
    }
    
    int getSize() {
        return size;
    }
    
    bool isEmpty() {
        return head==NULL;
    }
    
    void push(T element) {
        Node<T>*temp= new Node<T>(element);
        temp->next=head;
        head=temp;
        size++;
    }
    
    T pop() {
        // Return 0 if stack is empty. Don't display any other message
        if(isEmpty()){
            return 0;
        }
        Node<T>* temp=head;
        head=head->next;
        size--;
        return temp->data;
        
    }
    
    T top() {
        // Return 0 if stack is empty. Don't display any other message
        if(isEmpty()){
            return 0;
        }
        return head->data;
    }
    
  
    
};

