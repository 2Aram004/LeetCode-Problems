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
    ListNode* insertionSortList(ListNode* head) {
    
        std::multiset<int> mset;
        
        ListNode* current = head;
        while(current)
        {
            mset.insert(current->val);
            current = current->next;
        }
        
        current = head;
        for(auto it = mset.begin(); it != mset.end(); ++it)
        {
            current->val = *it;
            current = current->next;
        }
        return head;
    }
};
