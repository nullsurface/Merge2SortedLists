#ifndef LIST_H
#define LIST_H

struct ListNode {
    int val;
    struct ListNode *next;
};

typedef struct ListNode ListNode;

// Merges two sorted lists
struct ListNode* mergeTwoLists(struct ListNode*, struct ListNode*);

// Print a list
void print(ListNode*);

#endif
