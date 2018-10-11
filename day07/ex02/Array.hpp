
template<typename T>
// template<class T>
class Array
{
	private:
		T	_Array[n];

	public:
		Array(){_Array = new Array[n]}
		Array(unsigned int n)
		{
			_Array = new Array[n]
			for (int i = 0; i < n; ++i)
			{
				_Array[i] = new int();
			}
			int * a = new int()
		}
		~Array(){}
		int size()const{return n;}
};