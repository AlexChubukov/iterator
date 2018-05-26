

#include "node.h"

namespace BSTree {

	template <typename T>
	class pre_iterator {
	public:
		pre_iterator();
		pre_iterator(Node<T>* p);
		pre_iterator(const pre_iterator<T> &);

		~pre_iterator();

		pre_iterator<T>& operator=(const pre_iterator<T> &);
		//T operator*() const;

		T * operator->() const;

		T & operator*() const;
		pre_iterator<T> operator++();
		pre_iterator<T> operator++(int);

		friend bool operator==(const pre_iterator<T>&, const pre_iterator<T>&) {

		}

		friend bool operator!=(const pre_iterator<T>&, const pre_iterator<T>&) {

		}

		friend void swap(pre_iterator<T>& lhs, pre_iterator<T>& rhs) {

		}

	private:
		Node<T>* ptr;
	};

	template <typename T>
	class post_iterator {
	protected:
		post_iterator();
		post_iterator(Node<T>* p);
		post_iterator(const post_iterator<T> &);

		~post_iterator();

		post_iterator<T>& operator=(const post_iterator<T> &);
		//T operator*() const;

		T * operator->() const;

		T & operator*() const;
		post_iterator<T> operator++();
		post_iterator<T> operator++(int);

		friend bool operator==(const post_iterator<T>&, const post_iterator<T>&) {

		}

		friend bool operator!=(const post_iterator<T>&, const post_iterator<T>&) {

		}

		friend void swap(post_iterator<T>& lhs, post_iterator<T>& rhs) {

		}

	private:
		Node<T>* ptr;
	};
}

template<typename T>
BSTree::pre_iterator<T>::pre_iterator() : ptr(nullptr) {}

template<typename T>
BSTree::pre_iterator<T>::pre_iterator(Node<T> *p) {
	ptr = p;
}

template<typename T>
BSTree::pre_iterator<T>::pre_iterator(const pre_iterator<T> &) : pre_iterator() {
}

template<typename T>
BSTree::pre_iterator<T>::~pre_iterator() {
}

template<typename T>
BSTree::pre_iterator<T>& BSTree::pre_iterator<T>::operator=(const pre_iterator<T> & iter) {
}

template<typename T>
BSTree::pre_iterator<T>& BSTree::pre_iterator<T>::operator++() {
	// TODO: вставьте здесь оператор return
}

template<typename T>
T& BSTree::pre_iterator<T>::operator*() const {
	return T&;
}

template<typename T>
T* BSTree::pre_iterator<T>::operator->() const {
	return T*;
}

template<typename T>
BSTree::pre_iterator<T> BSTree::pre_iterator<T>::operator++(int)
{
	return BSTree::pre_iterator<T>;
}

template<typename T>
BSTree::post_iterator<T>::post_iterator() {
}

template<typename T>
BSTree::post_iterator<T>::post_iterator(Node<T> * p) {
}

template<typename T>
BSTree::post_iterator<T>::post_iterator(const post_iterator<T> &) : post_iterator() {
}

template<typename T>
BSTree::post_iterator<T>::~post_iterator() {
}

template<typename T>
BSTree::post_iterator<T>& BSTree::post_iterator<T>::operator=(const post_iterator<T> & iter) {
}

template<typename T>
BSTree::post_iterator<T>& BSTree::post_iterator<T>::operator++() {
	return;
	// TODO: вставьте здесь оператор return
}

template<typename T>
T& BSTree::post_iterator<T>::operator*() const {
	return reference;
}

template<typename T>
T* BSTree::post_iterator<T>::operator->() const {
	return T*;
}

template<typename T>
BSTree::post_iterator<T> BSTree::post_iterator<T>::operator++(int)
{
	return BSTree::post_iterator<T>;
}