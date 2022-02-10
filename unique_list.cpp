/* Definition for singly-linked list. 

struct ListNode 
{  
   int val;  
   ListNode *next;  
   ListNode(int x) : val(x), next(NULL) {}  
};

*/

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
     
        
       if(head == nullptr) return head;
        
       if(head->next == nullptr && head->val == val) 
        {
           head = nullptr;
           return head;
        }
        
        ListNode* tmp = head;
        ListNode* tmp2 = head->next;
        
        while(tmp2 && head)
        {
            if(head->val == val) 
            {  
                head = head->next;
                continue;
            }
            
           else if(tmp2->val == val)
            {
                tmp->next = tmp2->next;
            }
            
        else
        {
            tmp = tmp2;
        }
            tmp2 = tmp2->next;
            
        }
        
        return head;
    }
};
