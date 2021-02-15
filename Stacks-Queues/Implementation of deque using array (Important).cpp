#include<iostream>
using namespace std;

#include "Solution.h"

// Driver program to test above function
int main()
{
    Deque dq(10);
    int choice,input;
    while(true) {
        cin >> choice;
        switch (choice) {
            case 1:
                cin >> input;
                dq.insertFront(input);
                break;
            case 2:
                cin >> input;
                dq.insertRear(input);
                break;
            case 3:
                dq.deleteFront();
                break;
            case 4:
                dq.deleteRear();
                break;
            case 5:
                cout << dq.getFront() << "\n";
                break;
            case 6:
                cout << dq.getRear() << "\n";
                break;
            default:
                return 0;
        }
    }
    
    return 0;
}

class Deque {
    // Complete this class
    int *a;
    int front;
    int rear;
    int size;
    
    public:
    Deque(int s){
        a=new int[s];
        front=-1;
        rear=-1;
        size=s;
    }
    bool  isFull(){
		return ((front == 0 && rear == size-1)||front == rear+1);    
    } 
    // Check if Deque is empty 
	bool  isEmpty(){
		return (front == -1);  
    }
	
    
    void insertFront(int item){
    		if (isFull())  { 
				cout<<"-1"<<endl;
				return; 
    		} 
   
    // If queue is initially empty,set front=rear=0; start of deque 
			if (front == -1)  { 
				front = 0; 
				rear = 0; 
    		} 
			else if (front == 0)              // front is first position of queue 
				front = size - 1 ; 
			else // decrement front 1 position 
				front = front-1; 
   
			a[front] = item;
    }
    void insertRear(int item){
        if (isFull()) { 
			cout << "-1" << endl; 
			return; 
    	} 
   
    //  If queue is initially empty,set front=rear=0; start of deque 
		if (front == -1) { 
			front = 0; 
			rear = 0; 
    	} 
		else if (rear == size-1)               // rear is at last position of queue
			rear = 0; 
		else                            // increment rear by 1 position 
			rear = rear+1; 
   
		a[rear] = item ;
    }
    void deleteFront(){
         if (isEmpty()){ 
			cout << "-1" << endl; 
			return ; 
    	} 
   
    // Deque has only one element 
 		if (front == rear){ 
			front = -1; 
			rear = -1; 
    	} 
		else{
        // back to initial position 
		if (front == size -1) 
			front = 0; 
   
		else // remove current front value from Deque;increment front by 1
			front = front+1; 
        }
    }
    void deleteRear(){
        if(front==-1)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            if(front==rear)
            {
                front=rear=-1;
            }
            else
                rear=rear-1;
        }
        
    }
    int getFront(){
        if(front==-1){
            return -1;
        }
        
        return a[front];
        
    }
    int getRear(){
        if(rear==-1){
            return -1;
        }
        
        return a[rear];
    }
    
};

