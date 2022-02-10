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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       
        if(!list1 && !list2) return nullptr;

        if(list2 && !list1) return list2;

        if(!list2 && list1) return list1;
       
        ListNode* newlist{};
       
            if(!newlist)
            {
                if(list1->val > list2->val)
                {
                    newlist = new ListNode(list2->val, list2);
                    list2 = list2->next;

                }
                else
                {
                    newlist = new ListNode(list1->val);
                    list1 = list1->next;
                }
            }   
               
             ListNode* cur = newlist;
       
             while(list1 && list2)
             {
                 if(list1->val < list2->val)
                 {
                     cur->next = new ListNode(list1->val);
                     list1 = list1->next;
                     cur = cur->next;
                 }
                 else
                 {      
                     cur->next = new ListNode(list2->val);
                     list2 = list2->next;
                     cur = cur->next;
                 } 
             }   
        
         while(list1)
        {
             cur->next = new ListNode(list1->val);
             list1 = list1->next;
             cur = cur->next;
         }
        
         while(list2)
         {
             cur->next = new ListNode(list2->val);
             list2 = list2->next;
             cur = cur->next;
         }
        
        return newlist;
        }    
    
};
