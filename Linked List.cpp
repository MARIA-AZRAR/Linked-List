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
	
};
