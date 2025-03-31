Q1.ll cycle LC 141
***using slow and fast pointer -> tc=o(n),sc=O(1)
  
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL || head->next == NULL){
            return false;
        }
        // ListNode* tail=head;
        // // while(tail->next != NULL){
        // //     tail =tail->next;
        // // }
        // if(tail->next ==NULL) return false;
        // else return true;

// ****if slow and fast meets then there will be cycle***
        ListNode*slow=head;
        ListNode*fast=head;
        // slow=slow->next;
        //     fast=fast->next->next;
        // while(fast!=NULL|| fast->next!=NULL){ **memeber access within null pointer
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) return true;
            // else{
            //     slow=slow->next;
            //     fast=fast->next->next;
            // }
        }
    return false;
    }
};



Q2 middle of a LL 876
**using slow and fast pointer-> tc=o(n),sc=O(1)
  
class Solution {
public:
// // M1-> two steps, Tc=o(2n),sc=o(1)
//     int len(ListNode* ptr){
//         ListNode* tail=ptr;
//         int ct=1;
//         while(tail->next != NULL){
//             ct++;
//             tail =tail->next;
//         }
//         return ct;
//     }

//     ListNode* middleNode(ListNode* head) {
//         int mid=((len(head))/2) + 1;
//         int ct=1;
//         ListNode* ptr=head;
        
//         while(ct!= mid){
//             ct++;
//             ptr=ptr->next;
//         }
//         // ptr i s at mid now
//         return ptr;


// M2->single pass  TC=o(n/2),sc=o(1)
    ListNode* middleNode(ListNode* head) {
         ListNode*slow=head;
         ListNode*fast=head;
         while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};
