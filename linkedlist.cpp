#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
class Node
{
	public:
	int data;
	Node *next;
		
};

void push(Node **headref,int new_data)
{
	Node *new_node = new Node();
	new_node->data = new_data;
	new_node->next = (*headref);
	(*headref) = new_node;
}

int get_count(Node *head)
{
	Node *current = head;
	int count = 00;
	while(current!=NULL)
	{
		count++;
		current = current->next;
	}
	return count;
}
void delete_node(Node *headref,int key)
{
	Node *temp = *headref,*prev;
	if(temp!=NULL && temp->data == key)
	{
		*headref = temp->next;
		free(temp);
		return;
	}
	while(temp!=NULL && temp->data!=key)
	{
		prev = temp;
		temp = temp->next;
	}
	if(temp==NULL)
		return;
	prev->next = temp->next;
	free(temp);
	while (node != NULL) 
    	{ 
        	printf(" %d ", node->data); 
       		node = node->next; 
    	} 
}
int main()
{
	Node *head = NULL;
	push(&head,6);
	push(&head,2);
	push(&head,7);
	push(&head,9);
	push(&head,6);
	delete_node(&head,7);
	cout<<get_count(head);
	return 0;
}
