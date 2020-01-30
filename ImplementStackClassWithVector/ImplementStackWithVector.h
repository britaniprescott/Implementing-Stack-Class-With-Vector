#pragma once
#include <vector>
#include <fstream>

#ifndef STACK
#define STACK

class Stack {
	private:
		std::vector<int> int_stack;

	public:
		bool isEmpty();
		void push(int new_value);
		void pop();
		int top();
		friend std::ostream& operator<<(std::ostream& os, const Stack& stack);
};

#endif