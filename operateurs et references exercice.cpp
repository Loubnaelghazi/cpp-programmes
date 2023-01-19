#include<iostream>
using namespace std;
//exercice

//operateur d affichage d un index d un tableau
class vecteur{
int t[20];
int n;
public:
vecteur(){
n=0;
}
int getdim(){
return n; 
}
int& operator[](int i){ //adresse pour faire reference a v et pour a afficher
    return t[i];  //l a on peu afficher t0 mais attention, t 0 va nous afficher adresse car t0 est un pointeur.
                   //si on affiche par exp t1 u n importe, il va nous donner 0 ou valeure aleatoire, ar le tableau est vide .
}
};









int main(){
vecteur v;

 v[0]=5; //error un entier = un entier. exp> mn9druch n7tu f 7=6
          //est ici on a defini v[0] comme entier
          //l7al huwa utiliser notiion d adresse

 cout<<v[0]<<endl; //impossible sans le overloading operator
             // 5
 cout<<v[2];     //valeure aleatoire ou 0        
    return 0;
}