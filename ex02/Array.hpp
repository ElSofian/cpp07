#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template <typename T>
class Array {
	private:
		T 					*_array;
		cosnt unsigned int	_size;

	public:
		Array();
		Array(unsigned int n);
		Array(Array const &src);
		~Array();

		Array &operator=(Array const &rhs);

		T &operator[](unsigned int i);
		T size() const;

		class OutOfBoundsException : public std::exception {
			public:
				virtual const char *what() const throw() {
					return "Array's index out of bounds";
				}
		};
};

#endif