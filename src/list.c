#include "list.h"
#include <stdlib.h> 
#include <stdio.h>

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    ListNode* merged_list = malloc(sizeof(ListNode));
    ListNode* curr_node = merged_list;

    while (list1 && list2) {
        if (list1->val < list2->val) {
            curr_node->next = malloc(sizeof(ListNode));
            curr_node->val = list1->val;
            curr_node->next->val = list2->val;
        } else {
            curr_node->next = malloc(sizeof(ListNode));
            curr_node->val = list2->val;
            curr_node->next->val = list1->val;
        }
        
        curr_node->next->next = malloc(sizeof(ListNode));
        curr_node = curr_node->next->next;
        list1 = list1->next;
        list2 = list2->next;
    }

    while(list1) {
        curr_node->val = list1->val;
        curr_node->next = malloc(sizeof(ListNode));
        curr_node = curr_node->next;
    }
    
    while(list2) {
        curr_node->val = list2->val;
        curr_node->next = malloc(sizeof(ListNode));
        curr_node = curr_node->next;
    }


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
