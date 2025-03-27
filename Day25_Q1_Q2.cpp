Q1 leetcode 237
TC=O(1),sc=O(1)

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        // m1
        // // DON'T FORGET BASE CASES
        // if(node==NULL || node->next==NULL) return;
        // ListNode*temp=node->next;
        // ListNode*pre=node;
        // while(temp!=NULL){
        //     // ListNode*front=temp->next;
        //     int data=node->val;
        //     node->val=temp->val;
        //     temp->val=data;
        //     pre=node;
        //     node=node->next;
        //     temp=temp->next;
        // }
        // pre->next=NULL;
    

// m2
            // WE REQUIRE HEAD TO DELETE ANY NODE, AS HEAD IS NOT GIVEN ONLY NODE IS GIVEN SO WE ONLY HAVE ACCESS OF NODES AFTER GIVEN node SO We use next node, store next node's value in current node and delete that next node

        // ListNode* ptr=node->next;
        // node->val=node->next->val;
        // // node->val=ptr->val;
        // node->next = ptr->next;
        // delete ptr;

// *** IT IS MENTIONED IN THE QUE THAT NO NEED TO DELETE THAT NODE FROM MEMORY  
// m3    //  
        node->val=node->next->val;;
        node->next = node->next->next;   
    }
};


Q2 gfg LL insert at end:  
// https://bit.ly/3w9pEIt 
TC=O(n),sc=o(1)
/*Structure of the linked list node is as
struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        
        // DONT FORGET THIS CASE OF EMPTY LINKED LIST
        
        if(head==NULL) return new Node(x);
        Node* temp=head;
        Node* nn=new Node(x);
        while(temp->next !=NULL){
            temp=temp->next;
        } //temp is at the last node
        temp->next = nn;
     return head;   
    }
};
