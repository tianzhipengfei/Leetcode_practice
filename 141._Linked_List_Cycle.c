/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode *fast = head, *slow = head;
    
    while(fast){
        fast = fast->next;
        if(!fast){
            break;
        }
        fast = fast->next;
        slow = slow->next;
        if(fast == slow){
            return 1;
        }
    }
    return 0;
}