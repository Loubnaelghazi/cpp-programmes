#include <iostream>
using namespace std;
template<class T>
class A
{
public:
T num1 = 5;
T num2 = 6;
void add() //add(a,b) // waaaa iyak
{
cout << "Addition of num1 and num2 : " << num1+num2<<endl;
}
};
///  /////////////////////////////
template <class T1, class T2> //paranetrise
class b {
T1 a;
T2 s;
public:
b(T1 x,T2 y) {
a = x;
s = y;
}
void display() {
cout << "Values of a and s are : " << a<<" ,"<<s<<endl;
}
};
///  
int main()
{
A<int> d;        //oblige n7ddu ina type wch int float...
d.add();
/// //
b<int,float> d1(5,7.8); //parametrise
d1.display();

return 0;
}