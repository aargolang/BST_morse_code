	#ifndef BST_node
	#define BST_node

#include <iostream>
#include <fstream>
#include <string>

template <class T, class V>
class BSTNode
{
public:
	BSTNode();
	BSTNode(BSTNode &copyNode);
	BSTNode(T newData1, V newData2);
	~BSTNode();

	//void setData(std::string &newData);
	void setData(T newData2, V newData);
	void setRight(BSTNode<T,V> &rightNode);
	void setLeft(BSTNode<T,V> &leftNode);
	void setRight();
	void setLeft();
	T getData1();
	V getData2();
	BSTNode<T,V> *&getRight();
	BSTNode<T,V> *&getLeft();

	// friend std::ostream & operator<< (std::ostream &lhs, BSTNode<T,V> &rhs);
	// friend std::ifstream & operator>> (std::ifstream &lhs, BSTNode<T,V> &rhs);

private:
	T data1;
	V data2;
	BSTNode<T,V> *pLeft;
	BSTNode<T,V> *pRight;
};

// construction/destruction
template <class T, class V>
BSTNode<T,V>::BSTNode() {
	pLeft = nullptr;
	pRight = nullptr;
}
template <class T, class V>
BSTNode<T,V>::BSTNode(T newData1, V newData2) {
	data1 = newData1;
	data2 = newData2;
	pLeft = nullptr;
	pRight = nullptr;
}
template <class T, class V>
BSTNode<T, V>::BSTNode(BSTNode &copyNode) {
	data1 = copyNode.data1;
	data2 = copyNode.data2;
	pLeft = copyNode.pLeft;
	pRight = copyNode.pRight;
}
template <class T, class V>
BSTNode<T, V>::~BSTNode() {
	if (pLeft != nullptr) { delete pLeft; }
	if (pRight != nullptr) { delete pRight; }
}

// setters/getter
template <class T, class V>
void BSTNode<T, V>::setData(T newData1, V newData2) {
	data1 = newData1;
	data2 = newData2;
}
template <class T, class V>
void BSTNode<T, V>::setRight(BSTNode<T,V> &rightNode) {
	pRight = &rightNode;
}
template <class T, class V>
void BSTNode<T, V>::setLeft(BSTNode<T,V> &leftNode) {
	pLeft = &leftNode;
}
template <class T, class V>
void BSTNode<T, V>::setRight() {
	pRight = nullptr;
}
template <class T, class V>
void BSTNode<T, V>::setLeft() {
	pLeft = nullptr;
}
template <class T, class V>
T BSTNode<T, V>::getData1() {
	return data1;
}
template <class T, class V>
V BSTNode<T, V>::getData2() {
	return data2;
}
template <class T, class V>
BSTNode<T, V> *&BSTNode<T, V>::getRight() {
	return pRight;
}
template <class T, class V>
BSTNode<T, V> *&BSTNode<T, V>::getLeft() {
	return pLeft;
}

#endif