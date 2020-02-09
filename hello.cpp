#include <iostream>
#include <string>
using namespace std;
class B { public:  virtual void print() { std::cout<<”B”<<std::endl; }
void main()
{
    string str;
    cout<<"Name: "; cin>>str;
    cout<<"Hello World User: "<<str<<endl;
}