#pragma once

#include <vector>

#ifndef STACK
#define STACK

template <class T>
class Stack {
	private:
		vector<T> a_stack;

	public:
		bool isEmpty();
		void push(T new_value);
		void pop();
		int top();
		ostream& operator<<(ostream& os, const Stack& stack);
};

#endif