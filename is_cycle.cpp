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
    bool hasCycle(ListNode *head) {
        
        while(head)
        {
            if(head->val == pow(10, 5) + 1) return true;
            
            head->val = pow(10, 5) + 1;
            head = head->next;
        }
        return false;
        
    }
};
