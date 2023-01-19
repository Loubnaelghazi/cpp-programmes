#include <iostream>
#include <iterator>
#include <set>
using namespace std;
//difference entre set and list :Difference enre set et list:
//list : on peut repeter les elements
//set: chaque element doit etre unique 
//pour set:
//si on declare deux elements (exemple 1 et 1 )
//le deuxieme sera supprime
/*begin() – Renvoie un itérateur au premier élément de l’ensemble.
— end() – Renvoie un itérateur à l’élément théorique qui suit le dernier élément de l’ensemble.
— size() – Renvoie le nombre d’éléments dans l’ensemble.
— max_size() – Renvoie le nombre maximum d’éléments que l’ensemble peut contenir.
— empty() – Retourne si l’ensemble est vide.
*/ 
int main()
{
// empty set container
set<int, greater<int> > s1; //greater bch iw93lhum tri par ordre croissant
// insert elements in random order
s1.insert(40);
s1.insert(30);
s1.insert(60);
s1.insert(20);
s1.insert(50);
// only one 50 will be added to the set
s1.insert(50);
s1.insert(10);
// printing set s1
set<int, greater<int> >::iterator itr;
cout << "\nThe set s1 is : \n";
for (itr = s1.begin(); itr != s1.end(); itr++)
{
cout << *itr<<" ";
}
cout << endl;
// assigning the elements from s1 to s2
set<int> s2(s1.begin(), s1.end());
// print all elements of the set s2
cout << "\nThe set s2 after assign from s1 is : \n";
for (itr = s2.begin(); itr != s2.end(); itr++)
{
cout << *itr<<" ";
}
cout << endl;
// remove all elements up to 30 in s2
cout<< "\ns2 after removal of elements less than 30 :\n";
s2.erase(s2.begin(), s2.find(30));
for (itr = s2.begin(); itr != s2.end(); itr++) {
cout <<*itr<<" ";
}
// remove element with value 50 in s2
int num;
num = s2.erase(50);
cout << "\ns2.erase(50) : ";
cout << num << " removed\n";
for (itr = s2.begin(); itr != s2.end(); itr++)
{
cout <<*itr<<" ";
}
cout << endl;
// lower bound and upper bound for set s1
cout << "s1.lower_bound(40) : \n"
<< *s1.lower_bound(40)
<< endl;
cout << "s1.upper_bound(40) : \n"
<< *s1.upper_bound(40)
<< endl;
// lower bound and upper bound for set s2
cout << "s2.lower_bound(40) :\n"
<< *s2.lower_bound(40)
<< endl;
cout << "s2.upper_bound(40) : \n";
cout<< *s2.upper_bound(40);
cout<< endl;
return 0;
}