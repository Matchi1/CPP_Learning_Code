#include <iostream>

class A {
  int x;
  virtual void some_function() {}
};

class B {
  int x;
  void some_function() {}
};

int main(int, char**)
{
	A a;
	B b;
	std::cout << "A " << sizeof(a) << " B " << sizeof(b) << std::endl;
}

