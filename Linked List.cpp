#include <iostream>
using namespace std;

class node {
	int value;
	node * nextNode;
public:
	void setValue(int v) {
		value = v;
	}
	void setNextNode(node *nn)
	{
		nextNode = nn;
	}
	int getvalue()
	{
		return value;
	}
	node * getNextNode()
	{
		return  nextNode;
	}
};

class list
{
	node *headNode;
	node *currentNode;
	node *lastCurrentNode;
	int size;
	public:
	list()
	{
		headNode = 0;
		currentNode = 0;
		lastCurrentNode = 0;
		size = 0;
	}
	void insert(int n)
	{
		if (currentNode != 0)	//we should check if current node = 0
		{
			if (currentNode->getNextNode() == 0)
			{
				node * newNode = new node();
				lastCurrentNode = currentNode;   //Last node is now current node
				currentNode->setNextNode(newNode);
				currentNode = newNode;
				currentNode->setValue(n);
				currentNode->setNextNode(0);
				size++;
			}
			else
			{
				node * newNode = new node();
				newNode->setNextNode(currentNode->getNextNode());
				lastCurrentNode = currentNode;
				lastCurrentNode->setNextNode(newNode);
				currentNode = newNode;
	            currentNode->setValue(n);
			    size++;

		}
		else
		{
			node *newNode = new node();         //now address of created node is stored in newnode
			headNode = newNode;
			currentNode = headNode;
			lastCurrentNode = 0;              //if list is empty
			currentNode->setValue(n);
			currentNode->setNextNode(0);
			size++;
		}
	}
	
	int get()
	{
		return currentNode->getvalue();
	}
	
	int getsize()
	{
		return size;
	}
		void start()
	{
		currentNode = headNode;
	}
	void move()
	{
		lastCurrentNode = currentNode;
		currentNode = currentNode->getNextNode();
	}

	
};

int main()
{
	list myLinkedList;
	myLinkedList.insert(10);
	cout << myLinkedList.get() << endl;
	myLinkedList.move();
	myLinkedList.insert(100);
	cout << myLinkedList.get() << endl;
	myLinkedList.insert(1000);
	cout << myLinkedList.get() << endl;
	cout << myLinkedList.getsize() << endl;
	return 0;
}

