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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       map<ListNode*, int> mp;
       ListNode* t1=headA;
       while(t1){
        mp[t1]=1;
        t1=t1->next;
       } 

       ListNode* t2= headB;
       while(t2){
        if(mp.find(t2)!=mp.end()) return t2;
        t2=t2->next;
       }

       return NULL;
    }
};