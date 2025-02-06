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

// Mainly discussing integral literals.
void some_func() {
	// You can make string literals more readable, here are some examples:
	int i{ 22'333 }, j{ -1'234LL }, k{ 12'345ULL };

	// Or larger numbers:
	int a_really_large_number{ 1'000'000'000 };

	// Some statements that use some of the integral literals:
	unsigned long age{ 99UL };
	unsigned short price{ 10u };  // There is no specific literal type for short
	long long distance{ 15'000'000LL };  // Common digit grouping of the number 15 million.
}

void hexadecimal_literals() {
	// typically color uses hexadecimal literals:
	// int turquoise{ 0xOff1ce };  // err
	unsigned mask{ 0xFF00FF00u };
	// unsigned long value{ oxDEADlu };  // err
}

void octal_literals() {
	// You can write integral literals as octal values, using base 8.
	int a{ 0657 };
	unsigned b{ 0443U };
	
	// You identify them by the leading 0.
}

void bit_literals() {
	// you write bit literals with the prefix '0B'.
	int a{ 0B11011111 };
	unsigned b{ 0b1001001u };
	long c{ 0b1010L };
	int d{ 0B1100'1010'1101 };
}

int main() {
	int apple_count{ 15 };
	int orange_count{ 5 };
	int total_fruit{ apple_count + orange_count };

	std::println("The value of apple_count is {}", apple_count);
	std::println("The value of orange_count is {}", orange_count);
	std::println("The value of total_fruit is {}", total_fruit);
}