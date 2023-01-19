#include<iostream>
using namespace std;

//friend class

class student {
private:
string name="unkonwn";
int age=0;
int grade=0;
int id=0;
public:
 student(){
cout<<"yur name is : ";
cin>>name;
cout<<"yur age is : ";
cin>>age;
cout<<"yur grade is : ";
cin>>grade;
cout<<"yur id is : ";
cin>>id;
cout<<endl;
 }
friend class university; // ila mdrnhach mrdich n9dru nktbu print bdek tri9a lt7t

};

////////////
class university{

public:
//on va utiliser la notion de class friend to print values of the first class (student)

void print (student ob){ //on peut y acceder a student car c est son ami 
 cout<<"les infos de votre etudiant sont :\n";
 cout<<"le nom est  :"<<ob.name<<endl;
 cout<<"l age  est  :"<<ob.age<<endl;
 cout<<"le degre  est  :"<<ob.grade<<endl;
 cout<<"l id est  :"<<ob.id<<endl;
}
};













int main (){
student ob;
university ob1;
 ob1.print(ob);

}