#include <iostream>

using namespace std;

const int DEFAULT_SIZE = 10;

class IntSet
{
//private:
public:
	int *_arr;
	int _size;
	int _index;
	void growUp()
	{
		_size *= 2;
		int *temp=new int[_size];
		for(int i = 0;i <= _index;i++)
			temp[i] = _arr[i];
		delete[] _arr;
		_arr = temp;
	}
public:
	//constructor
	IntSet(int size = DEFAULT_SIZE)
	{
		_size = size;
		_arr = new int[_size];
		_index = -1;
	}
	IntSet(const IntSet& copy)
	{
		_size=copy._size;
		//our approach
		_arr = new int [_size];
		_index=copy._index;
		for(int i=0;i<=_index;i++)
			_arr[i] = copy._arr[i];
	}
	IntSet& insert(int element)
	{
		if(isFull())
			growUp();
		if(!includes(element))
			_arr[++_index]=element;
		return *this;
	}
	bool isFull(){ return _index == _size-1;}
	bool includes(int element)
	{
		for(int i=0;i<=_index;i++)
			if(_arr[i] == element)
				return true;
		return false;
	}
	int size(){ return _index + 1;}
};

ostream& operator<< (ostream& o,IntSet& is)
{
	o <<'{';
	for(int i=0;i<=is._index;i++)
	{
		o << is._arr[i];
		if(i!=is._index)
			o << ',';
	}
	o << '}';
	return o;
}

int main()
{
	IntSet s1;
	for(int i = 1;i < 11;i++)
		s1.insert(i);
	s1.insert(4);
	IntSet s2(s1);
	s2.insert(20);
	s2.insert(20);
	s2.insert(20);//s2 have element 20 just one time not 3 times!
	cout << "s1 : " << s1 << endl;
	cout << "s2 : " << s2 << endl;
	return 0;
}
