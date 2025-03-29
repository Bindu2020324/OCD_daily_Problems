Q1 gfg  https://bit.ly/3w6hUaa

/*
class DLLNode {
  public:
    int data;
    DLLNode *next;
    DLLNode *prev;

    DLLNode(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/
class Solution {
  public:
    // Function to reverse a doubly linked list
    DLLNode* reverseDLL(DLLNode* head) {
        // M1---? using stack
        TC=O(n),sc=o(n)->Accepted
        
        // DLLNode* temp=head;
        // stack<int>st;
        // while(temp!=NULL){
        //     st.push(temp->data);
        //     temp=temp->next;
        // }
        // temp=head;
        // while(!st.empty()){
        //     temp->data = st.top();
        //     temp=temp->next;
        //     st.pop();
        // }
        // return head;
        
        
        // M2-> by swaping the links not the nu,bers
        TC=O(n),sc=0(1)
        
        DLLNode* ptr=head;
        DLLNode*temp=NULL;
        while(ptr!=NULL){
            temp= ptr->prev;
            ptr->prev=ptr->next;
            ptr->next =temp;
            // ptr=ptr->next *XX
            ptr=ptr->prev;
        }
        // return (ptr->prev); XX
        if(temp!=NULL){
            // correct head of reversed DLL is temp->prev not ptr->prev
            return temp->prev;
        }
        return head;
    }
};



Q2 gfg    https://bit.ly/3QlEoMx 


/* Structure of Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};  
*/

class Solution {
  public:
    // Function to delete a node at given position.
    Node* deleteNode(Node* head, int x) {
      
        Node* temp=head;
        int ct=0;
        while(temp!=NULL){
            ct++;
            if(ct==x) break;
            temp=temp->next;
        }
        Node* back=temp->prev;
        Node* front=temp->next;
        if(back==NULL && front==NULL){
            delete temp;
            return NULL;
        }
        else if(back==NULL){
            head=head->next;
            head->prev=NULL;
            temp->next=NULL;
            delete temp;
            return head;
            
        }
        else if(front==NULL){
            back->next=NULL;
            temp->prev=NULL;
            delete temp;
            return head;
        }
        else{
            back->next=front;
            front->prev=back;
            temp->next=NULL;
            temp->prev=NULL;
            delete temp;
            return head;
        }
    }
};
