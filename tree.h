//#ifndef tree_h
//#define tree_h
#include "iterator.h"
#include "node.h"
#include <initializer_list>

namespace BSTree {

	template <typename T>
	class Tree {
		Node<T> *root;
	public:
		Tree();
		Tree(std::initializer_list<T>);
		auto insert(T val) -> bool;

		auto begin()-> pre_iterator<T>;
		auto end() -> pre_iterator<T>;

		auto rbegin() -> post_iterator<T>;
		auto rend() -> post_iterator<T>;

		void print() const;

	private:
		void print(Node<T> *node, int level) const;
	};


	template<typename T>
	Tree<T>::Tree() {
		root = nullptr;
	}

	template <typename T>
	Tree<T>::Tree(std::initializer_list<T> list) : Tree() {
		for (auto& item : list) {
			this->insert(item);
		}
	}

	template <typename T>
	auto Tree<T>::insert(T val) -> bool {
		Node<T> *p = root;
		while (p != nullptr) {
			if (p->data != val) {
				if (val > p->data && p->right == nullptr) {
					p->right = new Node<T>{ val , p};
					return true;
				}
				if (val < p->data && p->left == nullptr) {
					p->left = new Node<T>{ val, p };
					return true;
				}
				val > p->data ? p = p->right : p = p->left;
				continue;
			}
			return false;
		}
		root = new Node<T>{ val,p };
		return true;
	}

	template<typename T>
	pre_iterator<T> Tree<T>::begin() {
		Node<T> *p = root;
		while (p->left!=nullptr) {
			p = p->left;
		}
		pre_iterator<T> temp(p);
		return temp;
	}

	template<typename T>
	pre_iterator<T> Tree<T>::end() {
		Node<T> *p = root;
		while (p->right != nullptr) {
			p = p->right;
		}
		pre_iterator<T> temp(p->right);
		return temp;
	}

	template<typename T>
	post_iterator<T> Tree<T>::rbegin() {
		Node<T> *p = root;
		while (p->right != nullptr) {
			p = p->right;
		}
		post_iterator<T> temp(p);
		return temp;
	}

	template<typename T>
	post_iterator<T> Tree<T>::rend() {
		Node<T> *p = root;
		while (p->left != nullptr) {
			p = p->left;
		}
		post_iterator<T> temp(p->left);
		return temp;
	}

	template <typename T>
	void Tree<T>::print() const {
		print(root, 0);
	}

	template <typename T>
	void Tree<T>::print(Node<T> * node, int depth) const {
		if (root == nullptr) {
			std::cout << "Дерево пусто!" << std::endl;
		}
		int temp_depth = depth;
		if (node != nullptr) {
			if (node == root) {
				print(node->right, temp_depth);
				std::cout << std::endl;
				std::cout << node->data;
				std::cout << std::endl;
				print(node->left, temp_depth);
				return;
			}
			temp_depth++;
			print(node->right, temp_depth);
			for (int i = 0; i < temp_depth; i++)  std::cout << "   ";
			std::cout << "- " << node->data << std::endl;
			print(node->left, temp_depth);
			temp_depth--;
			return;
		}
	}
}


//#endif