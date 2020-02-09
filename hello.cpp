#include <iostream>
#include <string>
class A { public:  virtual void print() { std::cout<<”A”<<std::endl; }
void main()
{
    std::string str;
    std::cout<<"Name: "; std::cin>>str;
    std::cout<<"Hello World User: "<<str<<std::endl;
}