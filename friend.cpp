#include <iostream>
using namespace std;

//friend function : revision

class stu {
private:
int mark;
public:
stu(int m){ //constructor
mark=m;
}
void prt();
//friend function
friend void print(stu ob1);
};

//definiiton des fcts en dehors 

void stu:: prt()
{

cout<<"it s just a test \n";  
    cout<<"yur mark is :  "<<mark<<endl;

}

void print(stu ob1){ //friend function

    cout<<"yur mark is :  "<<ob1.mark;
}



int main() {
stu ob(20);
ob.prt();
print(ob); //friend function


    return 0;
}