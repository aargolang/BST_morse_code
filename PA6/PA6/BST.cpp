#include "BST.h"

BST::BST() {
	pRoot = nullptr;
	readFile("MorseTable.txt");
}
BST::BST(char path[]) {
	pRoot = nullptr;
	readFile(path);
}
BST::BST(BST &copyTree) {

}
BST::~BST() {
	if (pRoot != nullptr) { delete pRoot; }
}

void BST::readFile(char path[]) {
	std::ifstream file(path);
	BSTNode *pTemp = nullptr;

	while (file.eof == false) {
		pTemp = new BSTNode();
		file >> *pTemp;
		insert(pTemp);
	}

}
