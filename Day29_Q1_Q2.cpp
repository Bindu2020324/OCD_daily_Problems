Q2 leetcode234  palindrome ll

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* Next = head;
        while(curr){
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
    //     // M1--->using stack
    //     // TC=O(n),SC=O(n)
    //     if(head==NULL || head->next==NULL) return true;
    //     ListNode* temp=head;
    //     stack<int>st;
        
    //     while(temp!=NULL){
    //         st.push(temp->val);
    //         temp=temp->next;
    //     }
    //     temp=head;
    //     bool flag=true;
    //     while(temp!=NULL){
    //         if(temp->val ==st.top()){
    //             flag=true;
    //             st.pop();
    //         }
    //         else {
    //             flag=false;
    //             break;
    //         }
    //         temp=temp->next;
    //     }
     
    //    return flag;

    //    m2 if we reverse the half LL and then compare nodes then sc will be reduced
//tc=o(n) sc=o(1))
     ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* nhead = reverseList(slow->next);
        ListNode* a = head;
        ListNode* b = nhead;
        while(b){
            if(a->val != b->val) return false;
            a=a->next;
            b=b->next;
        }
        return true;
    }
};
