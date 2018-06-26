/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *p, *p2;
    int len1=1,len2=1,step=0;

    if(headA==NULL || headB==NULL)
        return NULL;
    
    p=headA;
    while(p!=NULL){
        p=p->next;
        len1++;
    }
    
    p=headB;
    while(p!=NULL){
        p=p->next;
        len2++;
    }
    
    if(len1>len2)
    {
        step=len1-len2;
        p=headA;
        p2=headB;
    }
    else
    {
        step=len2-len1;
        p=headB;
        p2=headA;
    }
    
    while(p&&step--)
    {
        p=p->next;
    }
    
    while(p!=p2&&p&&p2)
    {
        p=p->next;
        p2=p2->next;
    }
    
    if(p==p2)
        return p;
    return NULL;
}