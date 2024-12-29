#include "LinkADT.h"

#define FALSE 0
#define TRUE 1



int List::ListInsert(List* list, int data)
{
	if (list->head->next == NULL)		// 노드가  NULL 을 가리킨다면,
		return FALSE;					// 반환할데이터가 없다.

	list->before = list->head;		// before 은 더미 노드를 가리키게 함
	list->cur = list->head->next;		// cur 은 첫번째 노드를 가리키게 함 

	data = list->cur->data;			// 첫번째 노드의 데이터를 전달 
	return TRUE;						// 데이터 반환 성공 
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
	
	// 새 노드 위치 찾기 
	while (Plist->next != NULL && list->comp(data, Plist->next->data) != 0)
	{
		Plist = Plist->next;  //다음 노드로 이동 
	}

	newNode->next = Plist->next; // 새 노드의 오른쪽 정렬 
	list->next = newNode;		 // 새 노드의 왼쪽을 연결 

	(list->Num)++;


}



