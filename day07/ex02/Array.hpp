
#ifndef ARRAY_HPP
#define ARRAY_HPP

template<typename T>
class Array
{
	private:
		T*	_array;
		size_t 	_n;

	public:
		Array() : _array(NULL), _n(0){}
		Array(unsigned int n) : _array(new T[n]), _n(n) {}
		Array(Array const &rhs) {*this = rhs;}
		Array & operator=(Array &rhs)
		{
			if (*this != rhs)
			{
				_n = rhs.getSize();
				_array = new T[_n];
				for (int i = 0; i < _n; ++i)
				{
					_array[i] = rhs[i];
				}
			}
			return (*this);
		}
		~Array(){delete [] _array;}

		int getSize()const{return _n;}

		T operator[](size_t n) const
		{
			if(n > _n)
				throw std::exception();
			return _array[n];
		}

		T & operator[](size_t n)
		{
			if(n > _n)
				throw std::exception();
			return _array[n];
		}
};

#endif