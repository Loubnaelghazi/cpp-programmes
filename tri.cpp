#include <iostream>
#include <vector>
#include<iterator>
using namespace std;


class a{
 vector<int> v1;  
int n;


 public: 

 void saise(){
cout<<"entrer les valeurs de votre vecteur:";
for(int i=0;i<5;i++)
{
    cin>>n;
    v1.push_back(n);
    
}
 }
void print(int index){
if(index<0){
    return;
    cout<<v1[index];
    print(index-1);
}
}

};





int main(){
a t;
vector<int> v1;
t.saise();
t.print();
     return 0;
}