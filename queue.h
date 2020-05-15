#pragma once
#include <iostream>
using namespace std;

template <typename T>
class Queue {
private:
	template <typename T>
	struct Node {
		Node* next;
		Node* prev;
		T data;
		Node(T pData = T(), Node* pNext = nullptr, Node* pPrev = nullptr) {
			data = pData;
			next = pNext;
			prev = pPrev;
		}
	};

	int size;
	Node<T>* head;
	Node<T>* tail;

public:
	Queue() {
		head = nullptr;
		tail = nullptr;
		size = 0;
	}

	~Queue() {
		clear();
	}

	T First() {
		if (head == nullptr) {
			return NULL;
		}
		else {
			return head->data;
		}
	}
	T Last() {
		if (tail == nullptr) {
			return NULL;
		}
		else {
			return tail->data;
		}
	}

	void push_back(T data) {
		Node<T>* temp = new Node<T>(data, nullptr, tail);
		if (size) {
			tail->next = temp;
		}
		tail = temp;
		if (!size) {
			head = temp;
		}
		size++;
	}



	void pop_front() {
		if (size) {
			Node<T>* temp = head;
			head = temp->next;
			if (size > 1) {
				head->prev = nullptr;
			}
			else {
				tail = head;
			}
			delete temp;
			size--;
		}
	}

	void clear() {
		while (size) {
			pop_front();
		}
	}


	int Size() { return size; };


};



