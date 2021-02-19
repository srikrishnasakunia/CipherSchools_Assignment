#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

void push(struct Node** head, int data)
{
    
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
 
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

int checkPalindrome(struct Node** left, struct Node* right)
{
  
    if (right == NULL) {
        return 1;
    }
 
    int res = checkPalindrome(left, right->next) &&
            ((*left)->data == right->data);
    (*left) = (*left)->next;
 
    return res;
}

int checkPalin(struct Node* head)
{
    return checkPalindrome(&head, head);
}
 
int main(void)
{
  
    int keys[] = { 2, 4, 6, 4, 2};
    int n = sizeof(keys) / sizeof(keys[0]);
 
    struct Node* head = NULL;
    for (int i = n - 1; i >= 0; i--) {
        push(&head, keys[i]);
    }
 
    if (checkPalin(head)) {
        printf("The linked list is a palindrome");
    } else {
        printf("The linked list is not a palindrome");
    }
 
    return 0;
}




