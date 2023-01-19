#include <iostream>
#include <exception>  //pour heriter de classe exception 
using namespace std;
/*

• Vous pouvez définir vos
propres exceptions en héritant
et en remplaçant (surcharger)
la fonctionnalité de classe
std::exception.
• what() est une méthode
publique fournie par la classe
d'exception. Elle est utilisée
pour renvoyer la cause d'une
exception.

*/





class MyException : public exception{
public:
const char * what() const throw() {
return "Attempted to divide by zero!\n";
}
};
int main() {
try {
int x, y;
cout << "Enter the two numbers : \n";
cin >> x >> y;
if (y == 0) {
MyException z;
throw z;
}
else {

cout << "x / y = " << ((float) x/y) << endl;

}
}
catch(exception& e) {
cout << e.what();
}
}