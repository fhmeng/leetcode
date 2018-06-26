/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode *fast, *slow;
    if(head==NULL || head->next==NULL)
        return false;
    
    slow=head;
    fast=head;

    while(fast && fast->next)
    {
        fast=fast->next->next;
        slow=slow->next;
        
        if(slow==fast)
            return true;
    }
    
    return false;
}