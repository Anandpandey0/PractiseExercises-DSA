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
    int getDecimalValue(ListNode* head) {
        ListNode* curr = head;
        int decimalValue = 0;
        
        while(curr!=NULL)
        {
            decimalValue = decimalValue*2;
            if(curr->val==1)
                decimalValue += 1;
   
            curr = curr->next;
        }
        
        return decimalValue;
        
    }
};