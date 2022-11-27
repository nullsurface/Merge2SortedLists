#include "list.h"
#include <stdlib.h> 
#include <stdio.h>

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode* merged_list = NULL;

    return merge(merged_list, list1, list2);
}

ListNode* merge(ListNode* merge_list, ListNode* list1, ListNode* list2) {
    ListNode* curr_node = NULL;

    if (list1 && list2) {
	if (list1->val < list2->val) {
	    curr_node = list1;
	    list1 = list1->next;
	    curr_node->next = NULL;
	    return merge(append_list(merge_list, curr_node), list1, list2);
	} else {
	    curr_node = list2;
	    list2 = list2->next;
	    curr_node->next = NULL;
	    return merge(append_list(merge_list, curr_node), list1, list2);
	}
    } else {
	if (list1) 
	    merge_list = append_list(merge_list, list1);
	else 
	    merge_list = append_list(merge_list, list2);
    }

    return merge_list;
}

ListNode* append_list(ListNode* list1, ListNode* list2) {
    ListNode* list1_root = list1;

    if (list1 && list2) {
	while (list1->next) 
	    list1 = list1->next;

	list1->next = list2;
    } else {
	if (list1)
	    return list1;
	else 
	    return list2;
    }
    
    return list1_root;
}
void print(ListNode* list) {
    printf("[");
    while(list) {
	if (list->next)
	    printf("%d, ", list->val);
	else
	    printf("%d", list->val);

        list = list->next;
    }
    printf("]\n");
}
