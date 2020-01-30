#pragma once

#include <vector>

template <class T>
class Stack {
	private:
		int position;

	public:
		bool isEmpty();
		void push(T new_value);
		void pop();
		int top();
		ostream& operator<<(ostream& os, const Stack& stack);
};