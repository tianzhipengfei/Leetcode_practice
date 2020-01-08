/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head){
    struct ListNode* cur = head;
    while(cur){
        struct ListNode* temp = cur;
        while(temp->next && temp->next->val == temp->val){
            temp = temp->next;
        }
        temp = temp->next;
        cur->next = temp;
        cur = cur->next;
    }
    return head;
}

