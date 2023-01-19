#include<iostream>
using namespace std;
#include<vector>

//tri par selection huwa l3ks deyl bull;
// mn asghar ila l2akbar



template<class T>
void printVector(const vector<T> &vec) {
    for (auto &i : vec) { //affichage des eleemnts de vecteur
        cout << i << " ";
    }
    cout << endl;
}

template<class T>
void bubbleSort(vector<T> &vec) {
    for (T i = 0; i < (vec.size())- 1; ++i) { //n-1
        for (T j = 0; j < vec.size() - i - 1; ++j) {  //n-i-1
            if (vec.at(j) > vec.at(j + 1))
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
    return 0;
}