/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    struct ListNode* head = NULL, *cur = NULL;
    if(l1 == NULL || l2 == NULL){
        return l1?l1:l2;
    }
    if(l1->val > l2->val){
        head = l2;
        l2 = l2->next;
    } else{
        head = l1;
        l1 = l1->next;
    }
    cur = head;
    while(l1 || l2){
        if(!l1){
            cur->next = l2;
            break;
        }
        if(!l2){
            cur->next = l1;
            break;
        }
        if(l1->val > l2->val){
            cur->next = l2;
            l2 = l2->next;
        } else{
            cur->next = l1;
            l1 = l1->next;            
        }
        cur = cur->next;
    }
    return head;
}

