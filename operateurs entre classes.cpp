#include<iostream>
using namespace std;

//function de type classe . pq ?
//bch n9dru nder > ob+=ob2;

class a{
private:
int x ;
public:
 a(){
    cout<<"entrer la valeure sohaitee";
    cin>>x;
 }
// bghena ob =++ob2;
//khs tkun fct de type a bch trj3lina un objet2 li ryt7t f objet1

a operator++(){
a ob;
ob.x=++x;
    return ob;
}
  void print(){
cout<<"yur x is "<<x<<endl;

  }




};




int main(){
  a ob,ob2;
 
 ob=++ob2; //ob2 li rt3yt 3la fct
ob.print();
ob2.print();
    return 0;
}