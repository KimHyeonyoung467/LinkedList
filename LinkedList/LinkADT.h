#include <iostream>
using namespace std;



class List
{
public : 
	typedef struct Node
	{
		int data;
		int head;
		struct Node* next;
	} Node;

private:
	Node* head;
	Node* cur;
	Node* before;
	Node* next;
	int Num;

public:

	List()
	{
		head = NULL;
		cur = NULL;
		before = NULL;
		next = NULL;
		Data = 0;
		Num = 0;
	}
	typedef int LData; 

	LData Data;
	void ListLoop();

	int ListInsert(List* list, int data);
	int  RemoveList(List* list);
	
	int comp(int A1, int B1);
	

	void FInsert(List* list, int data);
	void SInsert(List* list, int data);


	void traverse(); // 도현 순회 참고용 
	bool search(int value); // 도현 조회 참고용 


};
