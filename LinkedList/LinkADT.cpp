#include "LinkADT.h"

#define FALSE 0
#define TRUE 1



int List::ListInsert(List* list, int data)
{
	if (list->head->next == NULL)		// ��尡  NULL �� ����Ų�ٸ�,
		return FALSE;					// ��ȯ�ҵ����Ͱ� ����.

	list->before = list->head;		// before �� ���� ��带 ����Ű�� ��
	list->cur = list->head->next;		// cur �� ù��° ��带 ����Ű�� �� 

	data = list->cur->data;			// ù��° ����� �����͸� ���� 
	return TRUE;						// ������ ��ȯ ���� 
}



int List::RemoveList(List* list)
{
	Node* temp = list->head;
	LData tdata;
	tdata= temp->data;

	if (temp == NULL)
	{
		cout << "List is Empty" << endl;
		return 0;
	}

	list->before->next = list->cur->next;
	list->cur = list->before;

	delete(temp);
	(list->Num)--;
	return tdata;
}

int List::comp(int A1, int B1)
{
	if (A1 < B1)
		return 0;
	if (B1 < A1)
		return 1;
}

void List::traverse() 
{
	Node* temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

bool List::search(int value)
{
	Node* temp = head;
	while (temp != NULL)
	{
		if (temp->data == value)
			return true;
	}
	return false;
}


void List::FInsert(List* list, int data)
{
	Node* newNode = new Node();
	newNode->data = data;

	newNode->next = head;
	head = newNode;

	(list->Num)++;
};

void List::SInsert(List* list, int data)
{
	Node* newNode = new Node();
	Node* Plist = list->head;

	newNode->data = data; 
	
	// �� ��� ��ġ ã�� 
	while (Plist->next != NULL && list->comp(data, Plist->next->data) != 0)
	{
		Plist = Plist->next;  //���� ���� �̵� 
	}

	newNode->next = Plist->next; // �� ����� ������ ���� 
	list->next = newNode;		 // �� ����� ������ ���� 

	(list->Num)++;


}



