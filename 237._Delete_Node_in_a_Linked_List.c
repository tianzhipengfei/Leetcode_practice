/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    struct ListNode* prev = node;
    while(node->next){
        node->val = node->next->val;
        prev = node;
        node = node->next;
    }
    prev->next = NULL;
}