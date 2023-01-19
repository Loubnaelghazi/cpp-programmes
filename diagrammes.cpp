#include<iostream>
using namespace std;
#include <list>
#include<vector>

class produit;
class lign_cmd;
class client;
class commande{ //many to many with produit
int reference;
char *date;
list<produit>list1;
 //association
client c;
public:

commande(commande &cmd){ //constructeur de copie
this->date=cmd.date;
        this->list1=cmd.list1;
        this->reference=cmd.reference;
}
//commande(){
 //   list2=new list<client>; //allouer de memoire
//}
void setlist1(list<produit>list1){
    this->list1=list1;
}
list<produit>getlist1(){
    return this->list1;
}//////////////////////////////////////////
void setc(client c){
    this->c=c;
}
client getc(){

    return this->c;
}
~commande(){

}

///////////////////////////////////
};
class produit{
    public:
string libelle;
float prix;
list<commande>list3;
void setlist(list<commande>list3){
    this->list3=list3;
}
list<commande> getlist3(){
    return this->list3;
}
vector<produit> trierproduit(vector<produit> lis){ //
for (int i = 0; i < (lis.size())- 1; ++i) {
        for (int j = 0; j < lis.size() - i - 1; ++j) {  //n-i-1
            if ((lis.at(j) ) > (lis.at(j + 1))) //position
                swap(lis.at(j), lis.at(j + 1)); //fct qui permet de changer le contenu
        }
    }
return lis;
}
void showlist(vector<produit> lis){
for(int i=0;i<lis.size();i++)
cout<<lis[i].prix;
}

void operator+(produit p){
string concatener;
float moyenne;
concatener=this->libelle+p.libelle;
moyenne=(this->prix+p.prix)/2;
cout<<"la concatenation des deux libelles est :"<<concatener<<endl;
cout<<"la moyenne des deux produits est : "<<moyenne<<endl;
}
};

class lign_cmd{ //dependance //fcts de type de produit et commande
commande a;
produit b;
public:
float qte;
void geta(commande a){
 this->a=a;
}
void setb(produit b){
    this->b=b;
}
produit getb(){
    return this->b;
}


};
class user{
    protected:
    string nom,login,password;
friend string getpasswird();
};
string getpasswird(){

}

 //composition relation
class client:public user{ 
private:
char *numero;
list<commande>*list2;
public:
client(){
    list2 new=list2<commande>();
}
client(char *numero){
this->numero=numero;
}
void setList2(list<commande> *list2){
this->list2=list2;
}
list<commande> *getlist2(){
    return this->list2;
}
~client(){

    delete this->list2;
}   //destructeur cuz composition relation  
};











int main(){

    return 0;
}