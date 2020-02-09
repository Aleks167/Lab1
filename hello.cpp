#include <iostream>
#include <string>
<<<<<<< HEAD
using namespace std;
class B { public:  virtual void print() { std::cout<<”B”<<std::endl; }
=======
class A { public:  virtual void print() { std::cout<<”A”<<std::endl; }
>>>>>>> testing1
void main()
{
    std::string str;
    std::cout<<"Name: "; std::cin>>str;
    std::cout<<"Hello World User: "<<str<<std::endl;
}