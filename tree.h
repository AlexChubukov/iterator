//#ifndef tree_h
//#define tree_h
#include "iterator.h"
#include <initializer_list>

namespace BSTree {

	template <typename T>
	class Tree {
	public:
		using iterator = pre_iterator::iterator<T>;
		using reverse_iterator = post_iterator::iterator<T>;
		//typedef pre_iterator<T>::iterator<T> iterator;
		//typedef post_iterator<T>::iterator<T> reverse_iterator;

		Tree(std::initializer_list<T>);

		void push_back(const T&);

		iterator begin();
		iterator end();

		reverse_iterator rbegin();
		reverse_iterator rend();

	private:
		Node<T>* root;
	};
}

template <typename T>
BSTree::Tree<T>::Tree(std::initializer_list<T> list) : Tree() {
	for (auto& item : list) {
		this->insert(item);
	}
}

template<typename T>
void BSTree::Tree<T>::push_back(const T &) {
}

template<typename T>
//iterator BSTree::Tree<T>::begin(){
BSTree::iterator BSTree::Tree<T>::begin() {
}

template<typename T>
BSTree::reverse_iterator BSTree::Tree<T>::end() {
	return BSTree::reverse_iterator;
}

template<typename T>
BSTree::reverse_iterator BSTree::Tree<T>::rbegin() {
	return BSTree::reverse_iterator;
}

template<typename T>
BSTree::reverse_iterator BSTree::Tree<T>::rend() {
	return BSTree::reverse_iterator;
}


//#endif