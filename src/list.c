#include "list.h"
#include <stdio.h> 

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    ListNode* merged_list;

    return merged_list;
}

void print(ListNode* list) {
    printf("[");
    while(list) {
        printf("%d, ", list->val);
        list = list->next;
    }
    printf("]\n");
}
