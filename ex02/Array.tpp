# include "Array.hpp"

template <typename T>
Array<T>::Array() {
	_size = 0;
	_array = new T[_size];
}

template <typename T>
Array<T>::Array(const unsigned int size) {
	_size = size;
	_array = new T[_size];
}

template <typename T>
Array<T>::Array(const Array &src) {
	if (_array)
		delete _array;
	_size = src._size;
	if (_size > 0)
		_array = new T[_size];
	_array = new T[_size];
	for (int i = 0; i < _size; i++)
		_array[i] = src._array[i];
}

template <typename T>
Array<T>::~Array() {
	delete [] _array;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &rhs) {
	if (_array)
		delete _array;
	_size = rhs._size;
	if (_size > 0)
		_array = new T[_size];
	_array = new T[_size];
	for (int i = 0; i < _size; i++)
		_array[i] = rhs._array[i];
	return *this;
}

template <typename T>
T &Array<T>::operator[](const unsigned int i) {
	if (i >= _size)
		throw OutOfBoundsException();
	return _array[i];
}

template <typename T>
T Array<T>::size() const {
	return _size;
}

template<typename T>
std::ostream& operator<<(std::ostream& stream, const Array<T>& array) {
    for (unsigned int i = 0; i < array.size(); i++) {
        stream << array[i] << " ";
    }
    return stream;
}