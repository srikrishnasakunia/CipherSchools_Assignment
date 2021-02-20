#include <bits/stdc++.h>
using namespace std;
struct st {
	int data;
	struct st* next;
};
void initst(struct st** s) { *s = NULL; }
int isEmpty(struct st* s)
{
	if (s == NULL)
		return 1;
	return 0;
}
void push(struct st** s, int x)
{
	struct st* p = (struct st*)malloc(sizeof(*p));
	if (p == NULL) {
		return;
	}
	p->data = x;
	p->next = *s;
	*s = p;
}
int pop(struct st** s)
{
	int x;
	struct st* temp;
	x = (*s)->data;
	temp = *s;
	(*s) = (*s)->next;
	free(temp);
	return x;
}
int top(struct st* s) { return (s->data); }
void sortedInsert(struct st** s, int x)
{
	if (isEmpty(*s) or x > top(*s)) {
		push(s, x);
		return;
	}
	int temp = pop(s);
	sortedInsert(s, x);
	push(s, temp);
}
void sortst(struct st** s)
{
	if (!isEmpty(*s)) {
		int x = pop(s);
		sortst(s);
		sortedInsert(s, x);
	}
}
void printst(struct st* s)
{
	while (s) {
		cout << s->data << " ";
		s = s->next;
	}
	cout << "\n";
}
int main(void)
{
	struct st* top;
	initst(&top);
	push(&top, 30);
	push(&top, -5);
	push(&top, 18);
	push(&top, 14);
	push(&top, -3);
	printst(top);
	sortst(&top);
	printst(top);
	return 0;
}   
