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
    ListNode* rotateRight(ListNode* head, int k) {
        
      if(!head || head->next == nullptr || k == 0) return head;
      
        int size = 1;
        ListNode* cur = head;
        
        
       while(cur->next)
       {
           cur = cur->next;
           ++size;
       }

        k = k % size;
        k = size - k;  
     
       cur->next = head;
       while(k--) cur = cur->next;
        
        head = cur->next;
        cur->next = nullptr;
       
	return head
	}

}; 
