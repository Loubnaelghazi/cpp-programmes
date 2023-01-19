#include <iostream>
using namespace std;

/*write a complete oop program to represent two data memebers then define an enginner class with two data members use a 
friend function to add 1000$ on the salaries of a teacher  named ali and  engineer ahmed 
just ali and ahmed */


//nb :on veut pas utiliser la notion de heritage


class teacher; //3lqach ? het ila mdrnhacha friend function f class ingenier mrdich t9dr t9raha fdkhl
class ingenieur {
private:
string name="unkonwn";
float salary=0;
public:

ingenieur(){
cout<<"bonsoir chers ingenieurs,veuillez entrer vos informations :\n";
cout<<"votre nom : "<<endl;
cin>>name;
cout<<endl;
cout<<"votre salaire : "<<endl;
cin>>salary;
cout<<endl;
}
 friend void salaire(ingenieur ob,teacher ob1);

};

class teacher{
private:
string name="unkonwn";
float salary=0;
public:

teacher(){
cout<<"bonsoir chers profs,veuillez entrer vos informations :\n";
cout<<"votre nom : "<<endl;
cin>>name;
cout<<endl;
cout<<"votre salaire : "<<endl;
cin>>salary;
cout<<endl;
}
 friend void salaire(ingenieur ob,teacher ob1);

};

void salaire(ingenieur ob,teacher ob1){
float salaire=0;
if((ob1.name=="ali"&& ob.name=="ahmed")){
cout<<"votre nouveaux salaires \n";
cout<<((ob.salary)+=1000);
cout<<endl;
cout<<((ob1.salary)+=1000);

}
else{
cout<<"we need just ali and ahmed !! we are racist";
}


}

int main (){
ingenieur ob;
teacher ob1;

salaire(ob,ob1);




    return 0;
}