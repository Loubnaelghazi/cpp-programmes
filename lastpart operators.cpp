#include<iostream>
using namespace std;
 // +=,*=,-=,/=,%=


 class a{
int x;
public:
a(int x){
    this->x=x;
}
void operator +=(int y){ //hd nu3 drrruri ikun fihum int x ? 3lch bch n7tu fiha la valuere lii bghena nzedu mn int main
                          //uli hya hna 12
x+=y;  //5+12
}
void print(){
    cout<<"x is "<<x;
}
 };







int main(){
a ob(5);
 
 ob+=12;
ob.print();
    return 0;
}