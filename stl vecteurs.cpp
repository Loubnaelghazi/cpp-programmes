//• Un tableau suit une approche statique, cela signifie que sa taille ne peut pas être modifiée pendant l’exécution
//tandis que le vecteur implémente un tableau signifie qu’il se redimensionne automatiquement lors de l’ajout
//d’éléments.
//Un vecteur est une classe conteneur de séquences qui implémente un tableau dynamique, ce qui signifie que
//la taille change automatiquement lors de l’ajout d’éléments

#include<iostream>
#include<vector> //bib
using namespace std;
//1 ere metode 
int main()
{
vector<string> v1; //declaration d un vecteur
v1.push_back("javaTpoint "); //fctb pour ajouter un element apres son dernir eleemnt actuel
v1.push_back("tutorial");
for(vector<string>::iterator itr=v1.begin();itr!=v1.end();++itr) //on peur utiliser i++
cout<<*itr;

//////////////2 meme methode
vector<int> vec;
vec.push_back(1);
vec.push_back(2);
vec.push_back(3);
vec.push_back(4);
vec.push_back(5);
for (int i = 0; i < vec.size(); i++) { //methode avec i
cout << vec[i] << " ";
cout<<endl<<endl<<endl;
/////////////////////////////////////////////////
vector<int> vectr{9,8,7,6,5,4,3,2,1,0};           //Déclaration et initialisation d’un vecteur de 
                                                  //type <int> avec les valeurs données
for (int i = 0; i < vectr.size(); i++) {
cout << vectr[i] << " \n";
}

}

return 0;
}
