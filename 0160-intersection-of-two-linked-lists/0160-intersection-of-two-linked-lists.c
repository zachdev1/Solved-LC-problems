/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    
    if(headA == NULL || headB == NULL){
        return NULL;
    }
    
    struct ListNode *tmpA = headA;
    struct ListNode *tmpB;
    
    while(tmpA != NULL){
        tmpB = headB;
        
        while(tmpB != NULL){
            if(tmpA == tmpB){
                return tmpB;
            }
            tmpB = tmpB->next;
        }
        tmpA = tmpA->next;
    }
    return NULL;
}