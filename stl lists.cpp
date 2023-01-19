/*• Les éléments ne sont pas rangés les uns à côté des autres dans la mémoire. Chaque « case » contient un
élément et un pointeur sur la case suivante, située ailleurs dans la mémoire
L'avantage de cette structure de données est que l'on peut facilement ajouter des éléments au milieu. Il n'est
pas nécessaire de décaler toute la suite.
 L’inconvénient est qu’on ne peut pas directement accéder à une case donnée… tout simplement parce qu'on
ne sait pas où elle se trouve dans la mémoire*/

#include <iostream>
#include <list>
using namespace std;
class Personne {
public :
string nom;
int age ;
public :
Personne(string nom , int age ){
this->nom = nom ;
this->age = age;
}
};
int main() {
list<Personne> data; //liste de type personne
data.push_back(Personne("personneX" , 12 ));
data.push_back(Personne("personneY" , 15 ));
list<Personne>::iterator it;
for (it = data.begin(); it != data.end(); ++it){
cout << it->nom;
}
return 0;
}