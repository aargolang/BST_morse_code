#include <iostream>
#include <fstream>
#include <string>
#include "BSTNode.h"


class BST
{
public:
	BST();
	BST(char path[]);
	BST(BST &copyTree);
	~BST();

	bool insert(std::string newData, char letter);
	bool insert(BSTNode *pNode);
	void readFile(char path[]);

private:
	BSTNode *pRoot;
};