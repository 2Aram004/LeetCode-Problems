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
    ListNode* partition(ListNode* head, int x) {
        
        ListNode* smallorig = new ListNode(0);
        ListNode* highorig = new ListNode(0);
        
        ListNode* small = smallorig;
        ListNode* high = highorig;
        
        while(head)
        {
            if(head -> val < x)
            {
                small -> next = head;
                small = head;
            }
            
            else 
            {
                high -> next = head;
                high = head;
            }
            head = head -> next;
        }
        high -> next = nullptr;
        small -> next = highorig -> next;
        
        return smallorig -> next;
    }
};
