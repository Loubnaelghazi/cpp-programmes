#include <iostream>
using namespace std;
/*write an oop complete program to represent 3 workers  , the class  constructor will set the value of salary and name for each 
worker then calculate the average of salaries for all   workers using friend function  
*/

class wokrer {
private:
string name="unknown";
float salary=0;
public:
  
wokrer()
  {
    cout<<"hello worker\n";
    cout<<"enter yur name : ";
    cin>>name;
    cout<<endl;
     cout<<"enter yur salary : ";
    cin>>salary;
    cout<<endl;
   
  }
friend  void salary(wokrer ob,wokrer ob1,wokrer ob2);

};

void salary(wokrer ob,wokrer ob1,wokrer ob2){
cout<<"the average salary of yur workers is : "<<(ob.salary+ob1.salary+ob2.salary)/3;


}







int main (){
    wokrer ob,ob1,ob2;

    salary(ob,ob1,ob2);
    cout<<endl;
        return 0;
}