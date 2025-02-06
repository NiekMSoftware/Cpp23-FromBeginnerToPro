// Ex2_01.cpp - Writing values of variables to the screen

// This paragraph mainly focuses on integer values.
void chapter2_1() {
	// We can give an immediate value to an integer with the braced initializers
	int apple_count{ 15 };  // Number of apples
	int orange_count{ 5 };  // Number of oranges
	int total_fruit{ apple_count + orange_count };  // Total number of fruit

	// There are two more initializers 
	int lemon_count(4);  // Functional notation
	int tomato_count = 12;  // Assignment notation

	// NOTE: Braced initializers are slightly more safe when it comes to narrowing conversions
	int banana_count(7.5);  // Typically compiles without a warning
	int triangle_count(5.3);  // Typically compiles without a warning

	// int papaya_count{ 0.3 };  // At least a compiler warning, often an error.

	// You can initialize multiple integers on a single line, like this:
	int foot_count{ 2 }, toe_count{ 10 }, head_count{ 1 };
}

int main() {
	int apple_count{ 15 };
	int orange_count{ 5 };
	int total_fruit{ apple_count + orange_count };

	std::println("The value of apple_count is {}", apple_count);
	std::println("The value of orange_count is {}", orange_count);
	std::println("The value of total_fruit is {}", total_fruit);
}