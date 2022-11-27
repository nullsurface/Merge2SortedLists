#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main() {
    ListNode *list1, *list2, *index1, *index2, *merged_list;
    list1 = malloc(sizeof(ListNode));
    list2 = malloc(sizeof(ListNode));
    index1 = list1;
    index2 = list2;
    int arr1[7] = {1, 2, 4, 5, 9, 50, 80};
    int arr2[5] = {3, 20, 22, 23, 25};

    for (int i = 0; i < 7; i++) {
        index1->val = arr1[i];
        index1->next = malloc(sizeof(ListNode));

	if (i < 6) {
	    index1 = index1->next;
	}
    }

    for (int i = 0; i < 5; i++) {
        index2->val = arr2[i];
        index2->next = malloc(sizeof(ListNode));

	if (i < 4) {
	    index2 = index2->next;
	}
    }

    free(index1->next);
    free(index2->next);
    index1->next = NULL;
    index2->next = NULL;

    print(list1);
    print(list2);

    merged_list = mergeTwoLists(list1, list2);
    
    print(merged_list);

    return 0;
}
