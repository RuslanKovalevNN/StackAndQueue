#pragma once
#include <List.h>
#include <iostream>

template<class T>
class TStackOnList
{
protected:
	List<T> List;
public:
	TStackOnList() : List() {}
	TStackOnList(TStackOnList& _v) : List(_v.List) {}

	bool IsEmpty()
	{
		return(List.IsEmpty());
	}
	int GetSize()
	{
		return(List.GetSize());
	}
	virtual void push(const T data)
	{
		List.push_front(data);
	}
	T pop()
	{
		return(List.pop_front());
	}

	void print()
	{
		std::cout << List;
	}
};

template<class T>
class TQueueOnList 
{
protected:
	List<T> List;
public:
	TQueueOnList() : List() {}
	TStackOnList(TStackOnList& _v) : List(_v.List) {}

	bool IsEmpty()
	{
		return(List.IsEmpty());
	}
	int GetSize()
	{
		return(List.GetSize());
	}
	virtual void push(const T data)
	{
		List.push_back(data);
	}
	T pop()
	{
		return(List.pop_back());
	}

	void print()
	{
		std::cout << List;
	}
};

