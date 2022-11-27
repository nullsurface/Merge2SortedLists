#ifndef LIST_H
#define LIST_H

struct ListNode {
    int val;
    struct ListNode *next;
};

typedef struct ListNode ListNode;

// Merges two sorted lists
ListNode* mergeTwoLists(ListNode*, ListNode*);

// Merges two sorted list into a provided third list recursively
ListNode* merge(ListNode*, ListNode*, ListNode*);

// Append List
ListNode* append_list(ListNode*, ListNode*);

// Print a list
void print(ListNode*);
#endif
