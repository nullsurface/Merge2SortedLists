#include "list.h"
#include <stdlib.h> 
#include <stdio.h>

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    ListNode* list2_root = list2;
    ListNode* last_node = NULL;

    while (list1 && list2) {
	if (list1->val > list2->val) {
	    last_node = list2;
	    list2 = list2->next;
	} else {
	    if (last_node) {
		last_node->next = list1;
		list1 = list1->next;
		last_node->next->next = list2;
		last_node = last_node->next;
	    } else {
		list2_root = list1;
		list1 = list1->next;
		list2_root->next = list2;
		last_node = list2_root;
	    }

	}
	    
    }

    if (list1 || list2) {
	if (list1)
	    last_node->next = list1;
	else
	    last_node->next = list2;
    }

    return list2_root;
}

void print(ListNode* list) {
    printf("[");
    while(list) {
	if (list->next)
	    printf("%d, ", list->val);
	else
	    printf("%d]", list->val);

        list = list->next;
    }
}
