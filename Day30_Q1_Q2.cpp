Q2 -> LC: 19. Remove Nth Node From End of List
// TC=O(n),sc=o(1)      

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    // int len(ListNode*ptr){
    //     ListNode*temp=ptr;
    //     int ct=0;
    //     while(temp!=NULL){
    //         ct++;
    //         temp=temp->next;
    //     }
    //     return ct;
    // }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    //     if(head==NULL) return head;
    //     int k=len(head)-n+1;
    //     if(k==1){
    //         ListNode*ptr=head;
    //         head=head->next;
    //         delete ptr;
    //         return head;
    //     }
    //     int ct=0;
    //     ListNode*temp=head;
    //     ListNode*pre=NULL;
    //     while(temp){
    //         ct++;
    //         if(ct==k){
    //             pre->next=pre->next->next;
    //             delete temp;
    //             break;
    //         }
    //         pre=temp;
    //         temp=temp->next;

    //     }
    //     return head;

    // M2->TC=O(n),sc=o(1) single iteration
      
    ListNode*fast=head;
    ListNode*slow=head;
    // JITNA N HAI FAST KO UTNE NODES AAGE BDA DIYA,PHIR SLOW ANS FAST DONO KO SATH ME MOVE KRNA START KIYA JB TK KI FAST LAST NODE PE AND SLOW PREVIOUS NODE PE NHI POHNCHTA
    
    for(int i=0;i<n;i++) fast=fast->next;
    if(fast ==NULL) return head->next;
    while(fast->next !=NULL){
        fast=fast->next;
        slow=slow->next;
    }
// AB FAST LAST NODE PE HAI AND SLOW JIS NODE KO DELETE KRNA HAI USKE PREVIOUS NODE PE HAI
    ListNode* delNode=slow->next;
    slow->next = slow->next->next;
    delete delNode;
    return head;
    }
};
