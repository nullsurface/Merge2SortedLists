#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main() {
    ListNode *list1, *list2, *merged_list;
    list1 = malloc(sizeof(ListNode));
    list2 = malloc(sizeof(ListNode));

    merged_list = mergeTwoLists(list1, list2);
    
    print(merged_list);

    return 0;
}
