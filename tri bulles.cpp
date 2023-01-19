/*
Dans la technique de tri à bulles, chacun des éléments de la liste est comparé à son élément adjacent.
 Ainsi, s'il y a n éléments dans la liste A, alors A [0] est comparé à A [1], A [1] est comparé à A [2] et ainsi de suite.
Après avoir comparé si le premier élément est supérieur au second, les deux éléments sont alors échangés.
tri ****** decroissant

 Dans l’exemple de code suivant, nous implémentons le tri à bulles pour travailler sur des objets vector génériques. 
 Une seule fonction nommée bubbleSort est suffisante pour définir toute la routine de tri. La fonction est modélisée et prend une référence à un vector comme seul argument.
 deux boucles for imbriquées pour parcourir les éléments vector jusqu’à ce qu’ils soient triés par ordre croissant
*/



#include <iostream>
using namespace std;
#include <vector>

template<class T>
void printVector(const vector<T> &vec) {
    for (auto &i : vec) { //affichage des eleemnts de vecteur
        cout << i << " ";
    }
    cout << endl;
}

template<class T>
void bubbleSort(vector<T> &vec) {
    for (T i = 0; i < (vec.size())- 1; ++i) {
        for (T j = 0; j < vec.size() - i - 1; ++j) {
            if (vec.at(j) < vec.at(j + 1))
                swap(vec.at(j), vec.at(j + 1)); //fct qui permet de changer le contenu
        }
    }
}

int main()
{
    vector<int> vec1 = { 43, 5, 123, 94, 359, -23, 2, -1 };
    printVector(vec1);
    bubbleSort(vec1);
    printVector(vec1);

    return EXIT_SUCCESS;
}