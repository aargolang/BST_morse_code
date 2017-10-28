//#include "BST.h"
//
//BST::BST() {
//	pRoot = nullptr;
//	readFile("MorseTable.txt");
//}
//BST::BST(char path[]) {
//	pRoot = nullptr;
//	readFile(path);
//}
//BST::BST(BST &copyTree) {
//
//}
//BST::~BST() {
//	if (pRoot != nullptr) { delete pRoot; }
//}
//
//void BST::readFile(char path[]) {
//	std::ifstream file(path);
//	BSTNode *pTemp = nullptr;
//
//	while (file.eof() == false) {
//		pTemp = new BSTNode();
//		file >> *pTemp;
//		insert(pTemp);
//	}
//	file.close();
//}
//
//void BST::insert(BSTNode *&newNode) { //	public version
//	insert((this->pRoot), newNode);
//}
//void BST::insert(BSTNode *&tree, BSTNode *&newNode) { // private version
//	if (tree == nullptr) {
//		tree = newNode;
//	}
//	else if (newNode->getData1() > tree->getData1()) {
//		insert(tree->getRight(), newNode);
//	}
//	else if (newNode->getData1() < tree->getData1()) {
//		insert(tree->getLeft(), newNode);
//	}
//}
//
//void BST::inOrderPrint() {
//	inOrderPrint(this->pRoot);
//}
//void BST::inOrderPrint(BSTNode *&tree) {
//
//	if (tree != nullptr) {
//		inOrderPrint(tree->getLeft());
//		std::cout << tree->getData1() << " " << tree->getData2() << std::endl;
//		inOrderPrint(tree->getRight());
//	}
//}
//void BST::translate(std::string sourceFile, std::string destFile) {
//}
//void BST::translate() {
//	std::string line;
//	std::fstream file("Convert.txt");
//	
//	while(file.eof() == false){
//		std::getline(file, line, '\n');
//		std::cout << line << "\\n" << std::endl;
//	}
//}
//
//std::string &BST::translateLine(std::string &ln) {
//	std::string lnTranslate;
//	std::cout << ln[0];
//	char buffer = '0';
//	for (int i = 0; i < ln.length(); i++) {
//		buffer = ln[i];
//		//lnTranslate.append()
//	}
//	
//}