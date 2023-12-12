class Solution {
public:
    int getlength(ListNode* head){
        int len=0;

        while(head!=NULL){
            len++;
            head=head->next;
        }
        return len;
    }

    ListNode* middleNode(ListNode* head) {

        int len = getlength(head);

        int ans = (len/2)+1;
        for (int i = 1; i < ans; i++) {
            head = head->next;
        }

        return head;
        
    }
};




















class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(head==NULL||k==1){
            return head;
        }
        ListNode* next = NULL;
        ListNode* curr = head;
        ListNode* prev = NULL;
        int count=0;

        while(curr!=NULL && count<k){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++;

        }
        if(next!=NULL){
            head->next=reverseKGroup(next,k);
        }
       
        
        return prev; 
    } 
   
};
