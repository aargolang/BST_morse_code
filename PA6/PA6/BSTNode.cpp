#include "BSTNode.h"

// construction/destruction
BSTNode::BSTNode() {
	pLeft = nullptr;
	pRight = nullptr;
}
BSTNode::BSTNode(std::string &newData1, char &newData2) {
	data1 = newData1;
	data2 = newData2;
	pLeft = nullptr;
	pRight = nullptr;
}
BSTNode::BSTNode(BSTNode &copyNode) {
	data1 = copyNode.data1;
	data2 = copyNode.data2;
	pLeft = copyNode.pLeft;
	pRight = copyNode.pRight;
}
BSTNode::~BSTNode() {
	if (pLeft != nullptr) { delete pLeft; }
	if (pRight != nullptr) { delete pRight; }
}

// setters/getter
void BSTNode::setData(std::string &newData1) {
	data1 = newData1;
}
void BSTNode::setData(std::string &newData1, char &newData2) {
	data1 = newData1;
	data2 = newData2;
}
void BSTNode::setRight(BSTNode &rightNode) {
	pRight = &rightNode;
}
void BSTNode::setLeft(BSTNode &leftNode) {
	pLeft = &leftNode;
}
std::string &BSTNode::getData1() {
	return data1;
}
char &BSTNode::getData2() {
	return data2;
}

// operator overloading
std::ostream &operator<< (std::ostream & lhs, BSTNode &rhs) {
	lhs << rhs.getData1();
	lhs << " -> ";
	lhs << rhs.getData2();
	return lhs;
}

std::ifstream &operator>> (std::ifstream &lhs, BSTNode &rhs) {
	std::string mCode;
	char letter;

	lhs >> mCode;
	lhs >> letter;
	rhs.setData(mCode, letter);
	return lhs;
}