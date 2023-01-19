
#include<iostream>
using namespace std;

// ++operator :postfix


class hey{
int x;
public:
hey(int x){
this->x=x;

}
void operator++(int){  //drurri int bch ikhdmu postfix operators 
     x++;
     //n9dru nderu ay operator posyfix bhd tri9a 
     //x*=20..........
    cout<<"yur x is "<<x<<endl;
}

///pour prefix oprator

void operator ++(){ //ila khlinaha khwyaa y3ni prefix buuuut 

x++;
cout<<"yur x is "<<x;

// KNKTBUHA HAKA F INT MAIN ANDERU ++X

}
};












int main(){
hey ob(5);
ob++;
++ob; //appel de la 2 eme fct 


// en resume kyn fr9in postfix and preifx soit ++x or --x aw l3ks.
 
    return 0;
}