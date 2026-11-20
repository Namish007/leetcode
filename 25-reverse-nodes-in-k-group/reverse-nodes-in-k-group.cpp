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
    ListNode* reverseKGroup(ListNode* head, int k) {
       ListNode*temp=head;
        ListNode*prevLast=NULL;
        
        while(temp!=NULL){
            ListNode* kThNode=temp;
            for(int i=1;i<k && kThNode!=NULL;i++){
                kThNode=kThNode->next;
            }
            if(kThNode==NULL){
                if(prevLast!=NULL)
                prevLast->next=temp;
                break;
            }
            ListNode*NextNode=kThNode->next;
            kThNode->next=NULL;

            ListNode*prev=NULL;
            ListNode*curr=temp;

            while(curr!=NULL){
                ListNode*front=curr->next;
                curr->next=prev;
                prev=curr;
                curr=front;
            }
            if(temp==head){
                head=kThNode;
            }
            else{
                prevLast->next=kThNode;
            }
            
            prevLast=temp;
            temp=NextNode;


        }
        return head;
    }
};