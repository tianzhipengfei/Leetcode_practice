/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head){
    if(!head || !(head->next)){
        return head;
    }
    struct ListNode *new_head = malloc(sizeof(struct ListNode));
    new_head->next = head;
    struct ListNode *cur = new_head, *res = NULL;
    while(cur->next && cur->next->next){
        if(cur->next->val == cur->next->next->val){
            int val = cur->next->val;
            cur->next = cur->next->next;
            while(cur->next && cur->next->val == val){
                cur->next = cur->next->next;
            }
        } else{
            cur = cur->next;
        }
    }
    if(!cur->next){cur->next = NULL;}
    res = new_head->next;
    free(new_head);
    return res;
}

