#include <string>
#include <exception>

template <typename T>
class Array {
	private :
		T *_array;
		unsigned int _size;
	public :
		Array() : _array(NULL), _size(0) {

		}
		Array(unsigned int n) : _size(n) {
			_array = new T[n];
			for (unsigned int i = 0; i < _size; ++i) {
				_array[i] = T();
			}
		}
		Array(Array& other) : _size(other.size()) {
			if (_size == 0) {
				_array = NULL;
				return;
			}
			_array = new T[_size];
			for (unsigned int i = 0; i < _size; ++i) {
				_array[i] = other._array[i];
			}
		}
		~Array() {
			delete[] _array;
		}
		T &operator=(Array& other) {
			if (this == &other) {
				return (*this);
			}
			_size = other.size();
			if (_size == 0) {
				_array = NULL;
				return (*_array);
			}
			_array = new T[_size];
			for (unsigned int i = 0; i < _size; ++i) {
				_array[i] = other._array[i];
			}
			return (*this);
		}
		T& operator[](unsigned int pos) {
			if (pos >= _size) {
				throw (std::out_of_range("index out of bounds\n"));
			}
			return (_array[pos]);
		}
		unsigned int size() {
			return (_size);
		}
};