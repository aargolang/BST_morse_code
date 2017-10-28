#ifndef BST_tree
#define BST_tree

#include <iostream>
#include <fstream>
#include <string>
#include "BSTNode.h"

template <class O, class K>
class BST
{
public:
	BST<O, K>();
	BST<O, K>(char path[]);
	BST<O, K>(BST<O, K> &copyTree);
	~BST<O, K>();

	
	void insert(BSTNode<O, K> *&newNode);
	void readFile(char path[]);
	K search(O item);
	void inOrderPrint();
	

private:
	BSTNode<O,K> *pRoot;

	void destroy(BSTNode<O, K> *&tree);
	K search(BSTNode<O, K> *&tree, O item);
	void insert(BSTNode<O,K> *&tree, BSTNode<O,K> *&newNode);
	void inOrderPrint(BSTNode<O,K> *&tree);
};

template <class O, class K>
BST<O, K>::BST() {
	pRoot = nullptr;
}
template <class O, class K>
BST<O, K>::BST(char path[]) {
	pRoot = nullptr;
	readFile(path);
}
template <class O, class K>
BST<O, K>::BST(BST<O, K> &copyTree) {

}
template <class O, class K>
BST<O, K>::~BST() {
	if (pRoot != nullptr) { 
		destroy(this->pRoot);
	}
}

// main functions
template<class O, class K>
void BST<O, K>::destroy(BSTNode<O, K> *&tree) {
	if (tree != nullptr) {
		destroy(tree->getLeft());
		destroy(tree->getRight());
		tree->setLeft();
		tree->setRight();
		delete tree;
	}
}
template <class O, class K>
void BST<O, K>::readFile(char path[]) {
	std::ifstream file(path);
	BSTNode<O, K> *pTemp = nullptr;
	char letter = '\n';
	std::string morseCode;

	while (file.eof() == false) {
		pTemp = new BSTNode<char, std::string>();

		file >> letter;
		file >> morseCode;
		
		pTemp->setData(toupper(letter), morseCode);

		insert(pTemp);
	}
	file.close();
}
template<class O, class K>
K BST<O, K>::search(O item) {
	return search(this->pRoot, item);
}
template <class O, class K>
K BST<O, K>::search(BSTNode<O,K> *&tree, O item) {
	if (tree->getData1() == item) { // if char = char then return MorseCode
		return tree->getData2();
	}
	else if (tree->getData1() > item) {
		return search(tree->getLeft(), item);
	}
	else if (tree->getData1() < item) {
		return search(tree->getRight(), item);
	}
}
template <class O, class K>
void BST<O, K>::insert(BSTNode<O, K> *&newNode) { //	public version
	insert((this->pRoot), newNode);
}
template <class O, class K>
void BST<O, K>::insert(BSTNode<O, K> *&tree, BSTNode<O, K> *&newNode) { // private version
	if (tree == nullptr) {
		tree = newNode;
	}
	else if (newNode->getData1() > tree->getData1()) {
		insert(tree->getRight(), newNode);
	}
	else if (newNode->getData1() < tree->getData1()) {
		insert(tree->getLeft(), newNode);
	}
}
template <class O, class K>
void BST<O, K>::inOrderPrint() {
	inOrderPrint(this->pRoot);
}
template <class O, class K>
void BST<O, K>::inOrderPrint(BSTNode<O, K> *&tree) {
	if (tree != nullptr) {
		inOrderPrint(tree->getLeft());
		std::cout << tree->getData1() << " " << tree->getData2() << std::endl;
		inOrderPrint(tree->getRight());
	}
}

#endif