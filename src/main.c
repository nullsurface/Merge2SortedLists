#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main() {
    ListNode *list1, *list2, *merged_list;
    list1 = malloc(sizeof(ListNode));
    list2 = malloc(sizeof(ListNode));
    int arr1[5] = {1, 4, -1, 2, 3};
    int arr2[5] = {0, 2, -2, -4, 10};

    for (int i = 0; i < 5; i++) {
        list1->val = arr1[i];
        list1->next = malloc(sizeof(ListNode));
        list2->val = arr2[i];
        list2->next = malloc(sizeof(ListNode));
    }
        
    merged_list = mergeTwoLists(list1, list2);
    
    print(merged_list);

    return 0;
}
