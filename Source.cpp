#include<iostream>
using namespace std;
/*class Base
{private:
	int a, b;
public:
	Base(int a = 0, int b = 0) { this->a = a; this->b = b; }

	Base operator+(const Base& c)
	{
		return Base(a + c.a, b + c.b);



	}

	void print()
	{
		std::cout << a << std::endl;
		std::cout << b << std::endl;
	}
	Base(const Base& copy)
	{
		a = copy.a;
		b = copy.b;

	}

};






int main()
{
	Base a(7, 10), b(4, 6);
	Base c = a + b;
	c.print();
	system("pause");
	
	
	
	
	
	
	
	
	
	return 0;

}*/
/*template <class T>

struct Node
{
	Node* Next;
	Node* Prev;
	T data;





};

template<class T>

class List
{
	Node<T>* root;

	void insert_helper(Node<T>* root, const T &key)
	{
		if (root->Next != nullptr)
			insert_helper(root->Next, key);
		else
		{
			root->Next = new Node<T>;
			root->Next->Next = nullptr;
			root->Next->Prev = root;
			root->Next->data = key;
		}
	}
	void destroy(Node<T>*root)
	{
		if (root != nullptr)
		{
			destroy(root->Next);
			delete root;
		}
	 }
public:
	List()
	{
		root = nullptr;
	}
	void insert(const T & key)
	{
		if (root != nullptr)
			insert_helper(root, key);
		else
		{
			root = new Node<T>;
			root->Next = nullptr;
			root->Prev = root;
			root->data = key;
		}
	}
	void print()
	{
		while (root != nullptr)
		{
			cout << root->data << endl;
			root = root->Next;
		}
	}
	~List()
	{
		destroy(root);
	}
};

int main()
{
	List<int> l;
	l.insert(12);
	l.insert(15);
	l.insert(17);
	l.print();
	system("pause");








	return 0;

}*/


class Base
{public:
	virtual ~Base() {};


};
class Derived : public Base
{public:
	virtual ~Derived() {};

	void Dfunc(){}
	
};
void func(Base* base)
{
	Derived* derived = dynamic_cast<Derived*>(base);
	if (derived)
		derived->Dfunc();
}


int main()
{

	Base *d = new Derived ;
	func(d);






	system("pause");
	return 0;
}
