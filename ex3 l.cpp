/*Écrire un programme qui fait entrer des entiers a l'utilisateur, qui les met au fur et à
mesure dans une liste (conteneur List de la STL), qui trie cette liste puis qui affiche la
liste triée*/

#include<iostream>
using namespace std;
#include<list>
void aficher(list<int>l){

list<int>::iterator it;
for (it = l.begin(); it != l.end(); ++it){
cout << *it;
cout<<endl;
}
}
void aficher1(list<int>l)
{

list<int>::iterator it;
for (it = l.begin(); it != l.end(); ++it){
cout << *it;
cout<<endl;
}

}

int main(){
list<int>l;
int element;
cout<<"entrer les eleemnts de la liste :\n";
for(int i=0;i<5;i++){
    cin>>element;
    l.push_back(element); // 3ks d push front li ktzed flbdya
}
cout<<"votre elements de liste sont :\n";
aficher(l);

cout<<"votre elements de liste apres tri sont :\n";
l.sort();
 //fct qui permet de trier une liste
aficher(l);




    return 0;
}