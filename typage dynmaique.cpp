#include<iostream>
using namespace std;
class A{
protected:
int a;
public:
A(int a);
 virtual void afficher();

} ;

class B :public A{
int b;
public:
B(int a,int b);
void afficher();
  void fct(){
    cout<<"it s a test "; //ERROR
}
};




A::A(int a){
    this->a=a;
cout<< "ici le connstructeur a  :"<<endl;
}
 void A::afficher(){

    cout<<"votre variable est :"<<a<<endl;
}

B::B(int a,int b):A(a){
    this->b=b;
  cout<< "ici le connstructeur b  :"<<endl;

}
void B:: afficher(){
    cout<<"votre variable B  est :"<<b<<endl;

}


int main(){
A *a=new A(3); //ici on a cree un pointeur de type A, donc on doit lui allouer de la memoire.
                //comme A ob(3);
  //pour l afhcioer de cette maniere 

  a->afficher();

//du meme pour b 
B *b=new B(2,1);
b->afficher();  //au lieu de b.afficher();
  


  //////////////////////////////////////////////////////////////////////
//   exeption   si on a dans ce cas  :typage dynamqieu

A *x=new B(5,6);  //ici on a cree un pointeur de type A  mais on a allouer pour B
                //on a donc affichage normale ici du constructeur de a 3ad constr de b

x->afficher(); //ici u a un probleme. il v a afficher fct de A .CAAR L OBJET CREE EST DE TYPE a meme si on a lloue pour b.
               //si on veut afficher meme fct de b.on doit utiliser la notion de virtuel fcts


 //exp2 
 
/*
 A *y=new B(11,2);
 y->fct();  //error ila drna y->fct. heeett 7na creena object de type pointeur mn a mvhy mn b!!              
*/
    return 0;
}