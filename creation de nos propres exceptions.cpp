#include<iostream>
using namespace std;


class etudiant{
int id;
string nom;
string prenom;
public:
etudiant(){ //drurii constructor bch n9dru ykun 3ndna table

}
etudiant(int id,string nom,string prenom){
this->id=id;
this->nom=nom;
this->prenom=prenom;
}
void afficher(){
cout<<"prenom"<<"-"<<prenom<<"nom"<<"-"<<nom<<endl;

}
};
class tabEtudi:public etudiant{
etudiant *t;
int size;
int crtsize;
public:
  tabEtudi(int id,string nom,string prenom,int size):etudiant(id,nom,prenom){
this->size=size;
this->crtsize=0;
this->t=new etudiant[size];

}
void add(etudiant e)
{
if(crtsize<size){

t[crtsize]=e;
crtsize++;

}else{
    throw"tableau est sature ~!!";
}
}
};

int main(){
etudiant ob(123,"elghazi","lubna");
etudiant ob2(1,"lula","lilas");
etudiant ob3(345,"umyr","nisan");


//tabEtudi t(2);
    return 0;
}