#pragma once
#include <string>

using namespace std;

class Error
{
	string err;
public:
	Error(string s):err(s){}
	string what(){return err;}	
};

const int INITIALSIZE = 10;

template <typename T>
class Stack
{
	T* _arr;
	int _topIndex;
	int _currentSize;
public:
	Stack(int size = INITIALSIZE)
	{
		_arr = new T[size];
		_topIndex=-1;
		_currentSize=size;
	}
	~Stack(){delete[] _arr;}
	Stack<T>& push (T a)
	{
		if(_topIndex == _currentSize)
		{
			T* t = new T[_currentSize*=2];
			for(int i = 0;i <= _topIndex;i++)
				t[i] = _arr[i];
			delete[] _arr;
			_arr = t;
		}
		_arr[++_topIndex] = a;
		return *this;
	}
	T pop() throw (Error)
	{
		if(_topIndex == -1)
			throw Error("pop called when stack was empty!");
		return _arr[_topIndex--];
	}
	T top() throw (Error)
	{
		if(_topIndex == -1)
			throw Error("top called when stack was empty!");
		return _arr[_topIndex];
	}
};
