#include <iostream>
using namespace std;
#include "LinkADT.h"

void List::ListLoop() // Main 대신 
{
	List Linked;
	List list;

	// 데이터 저장 
	Linked.ListInsert(&list, 10);
	Linked.ListInsert(&list, 20);
	Linked.ListInsert(&list, 30);
	Linked.ListInsert(&list, 40);
	Linked.ListInsert(&list, 50);

	// 데이터 조회 및 출력 
	Linked.traverse();
	Linked.search(20);

	// 데이터 삭제 
	Linked.RemoveList(&list);
	Linked.traverse();

	cout << (Linked.search(20) ? "Found it" : "Not Found") << endl;
	return;

}

int main()
{
	List LinkList;
	LinkList.ListLoop();
	return 0;


};

