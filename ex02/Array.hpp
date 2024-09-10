# include <iostream>
# include <exception>

template <typename T>
class Array {

	private:
		T 					*_array;
		unsigned int	_size;

	public:
		Array();
		Array(const unsigned int &size);
		Array(Array const &src);
		~Array();

		Array &operator=(Array const &src);

		T &operator[](unsigned int i);
		T size() const;

		class OutOfBoundsException : public std::exception {
			public:
				virtual const char *what() const throw() {
					return "Array's index out of bounds";
				}
		};
};