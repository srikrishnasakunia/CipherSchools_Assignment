#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* addTwoLists(struct Node* first, struct Node* second);

void push(struct Node** head_ref, int new_data) {
    struct Node* new_Node = new Node(new_data);
    new_Node->next = (*head_ref);
    (*head_ref) = new_Node;
}
void printList(struct Node* Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}
void freeList(struct Node* Node) {
    struct Node* temp;
    while (Node != NULL) {
        temp = Node;
        Node = Node->next;
        free(temp);
    }
}
int main(void) {
    int t, n, m, i, x;
    cin >> t;
    while (t--) {
        struct Node* res = NULL;
        struct Node* first = NULL;
        struct Node* second = NULL;
        cin >> n;
        for (i = 0; i < n; i++) {
            cin >> x;
            push(&first, x);
        }
        cin >> m;
        for (i = 0; i < m; i++) {
            cin >> x;
            push(&second, x);
        }
        res = addTwoLists(first, second);
        printList(res);
        if (first) freeList(first);
        if (second) freeList(second);
    }
    return 0;
}
Node* addTwoLists(Node* first, Node* second) {
   
    struct Node* res = NULL; 
    struct Node *temp, *prev = NULL;
    int carry = 0, sum;
    while (first != NULL || second != NULL) 
    {
        sum = carry + (first ? first->data : 0) + (second ? second->data : 0);
        carry = (sum >= 10) ? 1 : 0;
        sum = sum % 10;
        temp = new Node(sum);
        if (res == NULL)
            res = temp;
        else 
            prev->next = temp;
        prev = temp;
        if (first) first = first->next;
        if (second) second = second->next;
    }
    if (carry > 0) temp->next = new Node(carry);
    return res;
}
