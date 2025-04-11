Q1---> LC 203. Remove Linked List Elements
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return head;
        // if(head->val==val ){
        //     head=head->next;
        //     return head;
        // }
        while(head!=NULL && head->val==val){
                ListNode*dele=head;
                head=head->next;
                delete dele;
            }

        ListNode*temp=head;
        while(temp!=NULL && temp->next !=NULL ){
            if(temp->next->val ==val){
                ListNode*del=temp->next;
                temp->next=temp->next->next;
                // temp=temp->next;
                delete del;
            }
            else temp=temp->next;
        }
    return head;
    }
};



Q2. LC 2 Add Two Numbers
TC=O(max(l1size,l2size))   SC=O(max(l1size,l2size))

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        // SEE THE GIVEN EXAMPLE WE HAVE TO ADD FIRST NODE OF L1 TO THAT OF L2 AND SO ON WHILE MAINTANING THE CARRY AND THE ANS WE GET WILL ITSELF THE RETURNED SUM-> SO SIMPLY RETURN THE SUM

        // USING DUMMY LL IS HELPFULL WHILE RETURNING THE NEW LL

        int carry=0;
        ListNode* ans=new ListNode(-1);
        ListNode*currt=ans;
        // 3 while loops can be combined in single while loop
        // while(l1!=NULL && l2!=NULL){
        //     ListNode*nn=new ListNode();
        //     nn->val=((l1->val)+(l2->val)+carry)%10;
        //     carry=((l1->val)+(l2->val)+carry)/10;
        //     currt->next=nn;
        //     currt=nn;
        //     l1=l1->next;
        //     l2=l2->next;
        // }
        // while(l1!=NULL){
        //     ListNode*nn=new ListNode();
        //     nn->val=((l1->val)+carry)%10;
        //     carry=((l1->val)+carry)/10;
        //     currt->next=nn;
        //     currt=nn;
        //     l1=l1->next;
        // }
        // while(l2!=NULL){
        //     ListNode*nn=new ListNode();
        //     nn->val=((l2->val)+carry)%10;
        //     carry=((l2->val)+carry)/10;
        //     currt->next=nn;
        //     currt=nn;
        //     l2=l2->next;
        // }
        // if(carry>0){
        //     ListNode*nn=new ListNode();
        //     nn->val = carry%10;
        //     currt->next=nn;
        //     currt=nn;
        // }
        // return (ans->next);

        ListNode*t1=l1;
        ListNode*t2=l2;
        while(t1!=NULL || t2!=NULL){
            ListNode*nn=new ListNode();
            int sum=carry;
            if(t1) sum+=t1->val;
            if(t2) sum+=t2->val;
            nn->val=(sum%10);
            carry=sum/10;

            currt->next =nn;
            currt=nn;

            if(t1) t1=t1->next;
             if(t2) t2=t2->next;
        }
        
        if(carry>0){
            ListNode*nn=new ListNode(carry);
            currt->next=nn;
            currt=nn;
        }
        return (ans->next);
    }
};
