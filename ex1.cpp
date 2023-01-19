#include<iostream>
#include<math.h>
using namespace std;

/*
Effectuer les opérations arithmétiques sur des données complexes à l'aide d'une classe
et d'un objet cette fois il faut redéfinir les opérateurs. Le programme doit demander la
partie réelle et imaginaire de deux nombres complexes et afficher les parties réelle et
imaginaire de l’opération demandée.
*/
 static int cnt=1; //ila drnaha btri9a 3dya mktkhdmch hitt kyn hna template

template<class t>
class arith{
    t rel=0;
    t img=0;
public:
arith(){
    cout<<"entrer la partie reelle de votre nbre "<<cnt;
    cin>>rel;
    cout<<"entrer la partie imaginaire du nbre "<<cnt;
    cin>>img;
    cnt++;
}
void operator +(arith ob){
    cout<<"la somme est :\n";
 cout<<(rel+ob.rel)<<"+"<<(img+ob.img)<<"i"<<endl;

}
void operator -(arith ob){
    cout<<"la soustraction est :\n";
  cout<<(rel-ob.rel)<<"+"<<(img-ob.img)<<"i"<<endl;
   
}
void operator *(arith ob1){
    cout<<"le produit est :\n";
cout<<(rel*ob1.rel)-(img*ob1.img)<<"+"<<(rel*ob1.img)+(img*ob1.rel)<<"i"<<endl;

}
void operator /(arith ob){
    cout<<"le rapport est :\n";
cout<<((rel*ob.rel)+(img*ob.img))/(pow(ob.rel,2)+pow(ob.img,2))<<"+"<<((ob.rel*img)-(rel*ob.img))/(pow(ob.rel,2)+pow(ob.img,2))<<"i"<<endl;}

void operator ==(arith ob1){
if(rel==ob1.rel&&img==ob1.img)
{
cout<<"les deux nombres complexes sont egaux\n";
}
else{
cout<<"les deux nombres complexes sont differents \n";
}
}
};


int main(){
arith<float> a,b;
a+b;
a-b;
a*b;
a/b;
a==b;

return 0;    
}