#include <iostream>
using namespace std;

class Node
{
	public:
		Node *left;
		Node *right;
		int key;
		Node(){
			left =  right = NULL;
		}
		
	class BST{
	public:
		Node *root;
	}
	*BST(){
		root = NULL;
	}
	
	Node *insertRecursive(int newKey, Node *currentRoot){
		if (currentRoot = NULL){
			Node *newNode = new Node();
			newNode->key = newKey;
			return newNode;
		}
		
		if (newKey < currentRoot->key){
			currentRoot->left = insertRecursive(newKey, currentRoot->left );
		} else if (newKey > currentRoot->key){
			currentRoot->right = insertRecursive(newKey, currentRoot->right);
			
		}
	return currentRoot;
	}
	
	void insert(int newKey){
		root = insertRecursive(newKey, root);
	}
	void  preOrderRecursive(Node *currentRoot){
		if (currentRoot!=NULL){
			cout << currentRoot->key <<" ";
			preOrderRecursive(currentRoot->left);
			preOrderRecursive(currentRoot->right);
	}
	void preOrderTraversal(){
		preOrderRecursive(root);
	}
int main(int argc, char**argv){
	BST *bin1 = new BST();
	
	bin1->insert(6);
	bin1->insert(7);
	bin1->insert(4);
	bin1->insert(8);
	bin1->insert(5);
	bin1->insert(3);

BST-> preOrderTraversal();
BST-> 
	return 0;
	}