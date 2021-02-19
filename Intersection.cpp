#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};
 
Node* intersectPoint(Node* head1, Node* head2)
{
   
    Node* ptr1 = head1;
    Node* ptr2 = head2;

    if (ptr1 == NULL || ptr2 == NULL) {
 
        return NULL;
    }

    while (ptr1 != ptr2) {
 
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
 
       
 
        if (ptr1 == ptr2) {
 
            return ptr1;
        }
        
        if (ptr1 == NULL) {
 
            ptr1 = head2;
        }
      
        if (ptr2 == NULL) {
 
            ptr2 = head1;
        }
    }
 
    return ptr1;
}
 
void print(Node* node)
{
    if (node == NULL)
        cout << "NULL";
    while (node->next != NULL) {
        cout << node->data << "->";
        node = node->next;
    }
    cout << node->data;
}

int main()
{
  
    Node* newNode;
    Node* head1 = new Node();
    head1->data = 40;
    Node* head2 = new Node();
    head2->data = 33;
    newNode = new Node();
    newNode->data = 36;
    head2->next = newNode;
    newNode = new Node();
    newNode->data = 39;
    head2->next->next = newNode;
    newNode = new Node();
    newNode->data = 55;
    head1->next = newNode;
    head2->next->next->next = newNode;
    newNode = new Node();
    newNode->data = 110;
    head1->next->next = newNode;
    head1->next->next->next = NULL;
    Node* intersect_node = NULL;
 
  
    intersect_node = intersectPoint(head1, head2);
 
    cout << "INTERSEPOINT LIST :";
 
    print(intersect_node);
 
    return 0;
  
}
