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
        int size = 0;
        
        ListNode* cur = head;
        while(cur)
        {
            cur = cur -> next;
            ++size;
        }
        int tmp = 0;
        
        while(tmp != (size / 2))
        {
            head = head -> next;
            ++tmp;
        }
        return head;
    }
};
