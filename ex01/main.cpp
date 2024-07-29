# include "./iter.hpp"

# include <iostream>
# include <cctype>

void ft_tolower(char &arr)
{
	arr = std::tolower(static_cast<unsigned char>(arr));
}

void ft_toupper(char &arr)
{
	arr = std::toupper(static_cast<unsigned char>(arr));
}
template <typename T>
void increment(T &arr)
{
	arr++;
}

int	main(void) {
	char strArr[] = {'A', 'B', 'C'};

	std::cout << "Original:" <<
	"\n\tstrArr[0]: " << strArr[0] <<
	"\n\tstrArr[1]: " << strArr[1] <<
	"\n\tstrArr[2]: " << strArr[2] <<
	std::endl << std::endl;

	::iter(strArr, sizeof(strArr) / sizeof(char), ft_tolower);

	std::cout << "Changed:" <<
	"\n\tstrArr[0]: " << strArr[0] <<
	"\n\tstrArr[1]: " << strArr[1] <<
	"\n\tstrArr[2]: " << strArr[2] <<
	std::endl << std::endl;

	::iter(strArr, 2, ft_toupper);

	std::cout << "Changed:" <<
	"\n\tstrArr[0]: " << strArr[0] <<
	"\n\tstrArr[1]: " << strArr[1] <<
	"\n\tstrArr[2]: " << strArr[2] <<
	std::endl << std::endl;


	int intArr[] = { 3, 2, 1 };

	std::cout << "Original:" <<
	"\n\tintArr[0]: " << intArr[0] <<
	"\n\tintArr[1]: " << intArr[1] <<
	"\n\tintArr[2]: " << intArr[2] <<
	std::endl << std::endl;

	::iter(intArr, 3, increment);

	std::cout << "Changed:" <<
	"\n\tintArr[0]: " << intArr[0] <<
	"\n\tintArr[1]: " << intArr[1] <<
	"\n\tintArr[2]: " << intArr[2] <<
	std::endl << std::endl;

	::iter(intArr, 2, increment);

	std::cout << "Changed:" <<
	"\n\tintArr[0]: " << intArr[0] <<
	"\n\tintArr[1]: " << intArr[1] <<
	"\n\tintArr[2]: " << intArr[2] <<
	std::endl << std::endl;

	return 0;
}
