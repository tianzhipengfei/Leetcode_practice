

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */


struct node{
    int val;
    int cnt;
    struct node* next;
};

void addNum(int num, struct node **head){
    struct node *cur = *head, *prev = *head;
    while(cur){
        if(cur->val == num){
            cur->cnt++;
            return;
        }
        prev = cur;
        cur = cur->next;
    }
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->val = num;
    new_node->cnt = 1;
    if(prev == NULL){
        *head = new_node;
        new_node->next = cur;
        return ;
    }
    prev->next = new_node;
    new_node->next = cur;
    return ;
}

void showNodes(struct node* head){
    struct node* cur = head;
    while(cur){
        printf("%d: %d\n", cur->val, cur->cnt);
        cur = cur->next;
    }
}

void releaseNodes(struct node* head){
    struct node *cur = head, *prev = head;
    while(cur){
        prev = cur;
        cur = cur->next;
        free(prev);
    }
    return ;
}

int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
    *returnSize = 0;
    if (nums1Size == 0 || nums2Size == 0){
        return NULL;
    }
    
    int *res = NULL;
    struct node *head = NULL;
    
    int minNum = nums1[0], maxNum = nums1[0];
    for(int i = 0; i < nums1Size; i++){
       addNum(nums1[i], &head);
        // showNodes(head);
    }
    
    // showNodes(head);
    
    for(int i = 0; i < nums2Size; i++){
        struct node* cur = head;
        while(cur){
            if(cur->val == nums2[i]){
                if(cur->cnt > 0){
                    cur->cnt --;
                    (*returnSize)++;
                    res = (int*) realloc(res, (*returnSize) * sizeof(int));
                    res[*returnSize - 1] = nums2[i];
                }
                break;
            }
            cur = cur->next;
        }
    }

    releaseNodes(head);
    
    return res;
}

