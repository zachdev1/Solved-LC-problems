/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    
    // null checks
    if(list1 == NULL && list2 == NULL){
        return NULL;
    }
    
    if(list1 == NULL){
        return list2;
    }
    
    if(list2 == NULL){
        return list1;
    }
    
    if(list1->val >= list2->val){
        list2->next = mergeTwoLists(list1, list2->next);
        return list2; 
    } else{
        list1->next= mergeTwoLists(list1->next, list2);
        return list1; 
    }
    
}