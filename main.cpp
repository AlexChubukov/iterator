
#include "tree.h"
#include <iostream>

using namespace BSTree;


int main() {
	Tree<int> tree{ 5, 3, 4, 2, 7, 9, 6, 8 };
	tree.print();
	auto it = tree.begin();
	auto end = tree.end();

	for (; it != end; ++it) {
		std::cout << *it << '|';
	}
	std::cout << std::endl;
	for (auto &item : tree) {
		std::cout << item << "|";
	}

	std::cout << std::endl;

	auto rit = tree.rbegin();
	auto rend = tree.rend();
	for (; rit != rend; ++rit) {
		std::cout << *rit << '|';
	}
	std::cout << std::endl;
}
