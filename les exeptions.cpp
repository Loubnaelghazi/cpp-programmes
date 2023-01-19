//exception :gestion des cas annormales comme par exp dvision par 0
#include<iostream>
using namespace std;

//exp >fct division

float division(float a,float b){
//on definit notre exception

if(b==0)
throw "division par 0 impossible !!"; //c comme une sorte de msg 

return a/b;
}





int main(){
    float a,b;
cout<<"donnez a \n";
cin>>a;
cout<<"donnez b \n";
cin>>b;
//appel de fct et utilisation d excepion
try{ //try pour tester le code qui contient l exception
    cout<<division(a,b);  //appel 3aadi
}catch(const char* msg){  //catch pour gerer l exception
    //ila dkhlna 0 f b ,rnafichiw le msg li huwa de ce type
cerr<<msg; //on peut utiliser au lieu de  cerr cout

}
cout<<"end";
    return 0;
}