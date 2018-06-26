/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* l=NULL;
    struct ListNode* p=NULL;
    
    if(l1==NULL)
        return l2;
    
    if(l2==NULL)
        return l1;
    
    if(l1->val < l2->val)
    {
        l=l1;
        l1 = l1->next;
    }
    else
    {
        l=l2;
        l2=l2->next;
    }
    p=l;
    
    while(l1!=NULL && l2!=NULL)
    {
        if(l1->val<l2->val)
        {
            p->next = l1;
            l1=l1->next;
        }
        else
        {
            p->next = l2;
            l2=l2->next;
        }
        p=p->next;
    }
    
    if(l1)
    {
        p->next = l1;
    }
    
    if(l2)
    {
        p->next = l2;
    }
    
    return l;
}