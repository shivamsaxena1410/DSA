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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode * temp= head;
        if(head==NULL || head->next== NULL) return head;
        ListNode * nt=head->next;
        while(temp!=NULL && temp->next!=NULL){
            while(nt!=NULL && nt->val==temp->val){
                ListNode *delNode= nt;
                nt=nt->next;
                delete(delNode);
            }
            temp->next=nt;
            if(nt) nt=nt->next;
            temp=temp->next;
        }

        return head;
    }
};