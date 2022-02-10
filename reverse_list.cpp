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

template<typename T>
void List<T>::reverse()
{
    
    Node<T>* current = head;
    Node<T>* next{}; 
    Node<T>* prev{};

    
    while(current != nullptr)
    {
            next = current->pnext;
            current->pnext = prev;
            
            prev = current;
            
            current = next;
    }
    head = prev;
}
