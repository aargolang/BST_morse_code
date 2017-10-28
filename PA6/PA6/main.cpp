#include <iostream>
#include <string>
#include <fstream>
#include <vector>

#include "BST.h"
#include "BSTNode.h"

int main()
{
	{
		BST<char, std::string> tree("MorseTable.txt");

		std::string line, buffer, translation;
		std::fstream file("Convert.txt");

		while (file.eof() == false) {
			std::getline(file, line, '\n');
			for (int i = 0; i < line.length(); i++) {
				if (line[i] == ' ') {
					translation.append("   ");
				}
				else {
					translation.append(tree.search(toupper(line[i])));
					translation.append(" ");
				}
			}
			translation.append("\n");
		}
		std::cout << translation << std::endl;

		file.close();
		file.open("Translation.txt");
		file << translation;
		file.close();
	}
	std::cout << "here we are" << std::endl;

	return 0;
}