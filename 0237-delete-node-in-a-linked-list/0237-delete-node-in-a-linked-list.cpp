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
    void deleteNode(ListNode* head) {
        ListNode * temp =head->next;
        head->val=temp->val;
        head->next=temp->next;
        delete(temp);

        
    }
};