#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
 
struct LinkedList {
    Node* head;
    LinkedList()
    {
        head = NULL;
    }
 
    Node* reverse(Node* head)
    {
        if (head == NULL || head->next == NULL)
            return head;
 
        Node* rest = reverse(head->next);
        head->next->next = head;
 
        head->next = NULL;

        return rest;
    }
 
    void print()
    {
        struct Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
 
    void push(int data)
    {
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    }
};

int main()
{
    
    LinkedList ll;
    ll.push(50);
    ll.push(23);
    ll.push(67);
    ll.push(78);
 
    cout << "Given linked list\n";
    ll.print();
 
    ll.head = ll.reverse(ll.head);
 
    cout << "\nReversed Linked list \n";
    ll.print();
    return 0;
}
