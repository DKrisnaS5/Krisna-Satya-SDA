#include <iostream>
using namespace std;

class Node
{
	public:
	char id;
	string nama;
	int urutan;
	Node *next;
	
	Node()
	{
		next = NULL;
	}
};
 class LinkedList
 {
 	public:
 		Node *head;
 		Node *tail;
 		
 		LinkedList()
 		{
 			head = tail = NULL;
		}
 };
		void insertDataAfter(char data,char after){
			if(head==NULL)
				cout << "ERROR: linkListed sing ade"<< endl;
			else if(tail->id==after){
				insertToTail(data);
			} else{
				Node *temp = head;
				
				while(tmp->id!=after && tmp!=NULL){
					tmp = tmp->next;
				}
				
				if(tmp==NULL)
				cout << "ERROR: 'after' sing ade" << endl;
				else{
					Node *newNode = new Node();
					newNode->id = data;
					
					newNode->next = tmp->next
					tmp->next = newNode;
				}
			}
		}
 
 int main(int argc, char** argv)
 {
 	LinkedList *list1 = new LinkedList();
 	
 	Node *node1 = new Node();
 	node1->id = 'A';
 	
 	list1->head = node1;
 	list1->tail = node1;
 	
 	Node *node2 = new Node();
 	node2->id = 'B';
 	
 	list1->head->next = node2;
 	list1->tail = node2;
 	
 	cout << list1->head->id << endl;
 	cout << list1->head->next->id;
 	
 	return 0;
 }
 