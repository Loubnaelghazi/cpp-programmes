/*/*Écrire un programme qui fait entrer des personnes « nom, prénom, âge », qui 
les met
au fur et à mesure dans une liste (conteneur List de la STL), qui trie cette 
liste selon
l’ordre alphabétique nom et prénom puis qui affiche la liste triée.*/

#include<iostream>
using namespace std;
#include<list>

void afficher(list<string>l){
list<string>::iterator it;
for(it=l.begin(); it !=l.end();++it){
cout<<" "<<*it;
}
}


int main (){
string s;
list<string> LS;
cout << "Enter votre Nom Prenom et votre Age : ";
getline(cin, s); //fct qui permet d afficheer toute la phrase meme avec des espaces
LS.push_back(s);
afficher(LS);
LS.sort();
cout<<"votre liste apres tri \n";
afficher(LS);



}