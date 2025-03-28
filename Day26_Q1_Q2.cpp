Q1.gfg insert at given position  Q1: https://bit.ly/3QD4hHs
TC=O(n)
sc=o(1)
/* a Node of the doubly linked list
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

// Function to insert a new node at given position in doubly linked list.
class Solution {
  public:
    // Function to insert a new node at given position in doubly linked list.
    Node *addNode(Node *head, int pos, int data) {
        // 0-based indexing
        Node* temp=head;
        int ct=-1;
        while(temp!=NULL){
            ct++;
            if(ct==pos) break;
            temp=temp->next;
        }
        // temp is at pos
        Node* nn=new Node(data);
        Node* back=temp->prev;
        Node* front=temp->next;
        // single node->insert after tail
        if(front==NULL){
            temp->next =nn;
            nn->prev=temp;
        }
        // first position
        else{
            front->prev=nn;
            nn->next=front;
            temp->next =nn;
            nn->prev=temp;
        }
        
        return head;
    }
};



Q2 search key in a linked list  https://bit.ly/3Epriup 
TC=O(n)
sc=o(1)
/* Link list node */
/*
struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; */

class Solution {
  public:
    // Function to count nodes of a linked list.
    bool searchKey(int n, Node* head, int key) {
        if(head== NULL) return false;
        if(head->data == key) return true;
        Node* pt=head;
        bool flag=false;
        while(pt->next != NULL){
            pt=pt->next;
            if(pt->data == key) {
                flag=true;
                break;}
        }
        return flag;
    }
};
