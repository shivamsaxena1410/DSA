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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL || head->next==NULL) return NULL;
        ListNode* temp = head;
        int count =0;
        while(temp){
            count++;
            temp=temp->next;
        }
        if(count==n){
            ListNode* oldHead= head;
            head=head->next;
            delete(oldHead);
        }
        temp=head;
        while(temp){
            count--;
            if(count==n){
                ListNode *del=temp->next;
                temp->next=temp->next->next;
                del->next=NULL;
                delete(del);
            }
            temp=temp->next;
        }

        return head;
    }
};