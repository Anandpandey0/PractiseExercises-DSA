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
        unordered_map<ListNode* , int>mp;
        ListNode* a = headA;
        while(a!=NULL){
            mp[a]++;
            a=a->next;
            
        }
        ListNode* b = headB;
        while(b!=NULL){
            if(mp[b]>0){
                return b;
            }
            else{
                b=b->next;
            }
            
        }
        return 0;
        
        
    }
};