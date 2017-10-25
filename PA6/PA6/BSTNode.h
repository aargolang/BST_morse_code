#include <iostream>
#include <fstream>
#include <string>

class BSTNode
{
public:
	BSTNode();
	BSTNode(BSTNode &copyNode);
	BSTNode(std::string &newData1, char &newData2);
	~BSTNode();

	void setData(std::string &newData);
	void setData(std::string &newData, char &newData2);
	void setRight(BSTNode &rightNode);
	void setLeft(BSTNode &leftNode);
	std::string &getData1();
	char &getData2();

	friend std::ostream & operator<< (std::ostream &lhs, BSTNode &rhs);
	friend std::ifstream & operator>> (std::ifstream &lhs, BSTNode &rhs);

private:
	std::string data1;
	char data2;
	BSTNode *pLeft;
	BSTNode *pRight;
};