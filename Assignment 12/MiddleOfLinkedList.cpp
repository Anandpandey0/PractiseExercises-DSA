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
    ListNode* middleNode(ListNode* head) {
        if(head==NULL){
            return head;
        }
        int count =0;
        ListNode*currentNode;
        while(currentNode!=NULL){
            count++;
            currentNode = currentNode ->next;
        }
        currentNode = head;
        for(int i=0;i<count/2;i++){
            currentNode = currentNode->next;
        }
        return currentNode;
            
        
    }
};