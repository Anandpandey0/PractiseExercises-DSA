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
    ListNode* removeElements(ListNode* head, int val) {
        
        if(head == NULL)
            return NULL;
        
        ListNode* temp = head;
        ListNode* prev;
        
        while(temp != NULL)
        {   
            if(temp->val == val && temp == head)
                head = temp->next, prev = temp;
            
            else if(temp->val == val && temp!=head)
                prev->next = temp->next;
            
            else if(temp->next != NULL && temp->next->val == val)
                temp->next = temp->next->next, prev = temp;
            
            temp = temp->next;
        }
        
        return head;
    }
};
};