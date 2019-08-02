/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* cur = head;
        vector<ListNode*> temp;
        while(cur != NULL){
            temp.push_back(cur);
            cur = cur->next;
        }
        if(temp.size() == 1)    return NULL;
        if(n == temp.size()){
            return temp[1];
        } else if(n == 1){
            temp[temp.size() - 2]->next = NULL;
        } else{
            temp[temp.size() - n - 1]->next = temp[temp.size() - n + 1];
        }
        return head;
    }
};
