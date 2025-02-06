// Ex1_01.cpp - A complete C++ program
#include "pch.h"

void exercise1() {
	std::println("Hello, World!");
}

void exercise2() {
	int age{ 20 };
	const char* name{ "Niek" };

	std::println("My name is {} and I am {} years old.", name, age);
}

/* For exercise 3:
 *
 * The # should be excluded from the first line (import std;)
 * Variable "Int" should be lower-case instead.
 *
 * `std::printn` doesn't exist in the std library, `std::println()` should be used instead.
 * Also, there appears to be no return statement or a ';' after the print.
 */

int main() {
	exercise2();
	return 0;
}