Q1: LC 82. Remove Duplicates from Sorted List II
TC=O(n),SC=O(1)

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
//  *****BEFORE DELETING ANY NODE delete FIRST POINT NEXT OF ITS PREVIOUS NODE TO ITS NEXT NODE OTHERWISE PREVIOUS NODE WILL KEEP ON POINTING TO THIS DELETED NODE, WHICH IS UNDEFINED

// ******DONT NEED TO UPDATE DUMMY NODE 

        if(head==NULL || head->next==NULL) return head;
        ListNode*dummy =new ListNode(-1);
        dummy->next = head;
        ListNode* temp=head;
        ListNode* prev=dummy;
// we can use head itself instead of temp as we have maintain dummy node to return 

        while(temp){
            // bool flag=false;
            if(temp->next && temp->val == temp->next->val){
                // if(temp == head){
                //     flag=true;
                // }
                // int x=temp->val
                while(temp->next && temp->val == temp->next->val){
                    // ListNode*temp2=temp;
                    temp=temp->next;
                    // prev->next=temp;
                    // delete temp2;
                }
                // ListNode*temp3=temp;
                    temp=temp->next;
                    prev->next=temp;
                    // delete temp3;  
            //   if(flag){
            //     head=prev;
            //     }
            }
            else{ 
                prev=prev->next;
                temp=temp->next;
            }
       }
        return dummy->next;
    }
};



Q2
