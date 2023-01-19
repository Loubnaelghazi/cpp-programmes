#include<iostream>
using namespace std;
template<class T> //declaration d une template ou patron

//nb>kulma knst3mlu template function khsna nktbuha

//templates huma w7d nu3 d fcts lii mkn7dduch fihum type dyl variables y3ni n9dru nst3mlhum lkulchy

/*

void permutationInt(int &a,int &b){ //type int
int aux;
aux=a;
a=b;
b=aux;
}
 void permutationFloat(float &a,float &b){  //tupe float
float aux;
aux=a;
a=b;
b=aux;

 }
*/
//exp des fcts normaux :
///////////////////////////////////////////
//au lieu mn hdchi kaaml.anst3mlu templates
 
 //using templaytes:

 void permuter( T &a,T &b){ //n9dru n7tu li bghenaa, float,,int...
    T aux;
aux=a;
a=b;
b=aux;

 }
template<class T>
 void permuter(T &x ,T &y,T &z){
T aux;
T aux2;
aux=x;
aux=y;
x=z;
y=aux;
z=aux2;


}


// 3 eme exp de templates ave tab
template<class T>


void afficher( T *tab,int n){ //tabl rykhdm l 2ay type dyl variables
    for(int i=0;i<n;i++){
        cout<<tab[i]<<endl;
    }


}


template<class X,class Y> void fun(X a,Y b) { //template parametree
     //ila bghena n7tu 2 parametres diff.w7d int w7d float mtln
cout << "Value of a is : " <<a<<endl;
cout << "Value of b is : " <<b<<endl;
}


//nb4 
//si on avait une fct surdefintion mais pas une template.
void permuter(float x,float y){ //had la fct rydr lha l appel flecas ou rdi n7tu fiha
                                //float x and float y,sinon rdi t3yt 3la template,
cout<<"cas special";
}
int main (){

int r=5,t=6;
float x=3.2,y=4.5;
permuter(r,t);
permuter(x,y);

cout<<"a is "<<r<<"b is "<<t<<endl;
cout<<"x is "<<x<<"y is "<<y<<endl;

string a="lubna",b="leila",c="luna";
permuter(a,b,c);
cout<<"a is "<<a<<"b is "<<b<<"c is"<<c<<endl;

fun(15,12.2); //mymknch tst9bl 2 diff types ila ilakan templates parametrise

return 0;
}