#include<iostream>
using namespace std;

//operator overloading
//in cpp .mymknch njm3u 2 classes (objects) mtln ob1+ob2)
//dkchy 3lch druuurii nrj3u les operateurs kykhdmu 3lihum
 
 //pour comparer deux objets d une meme class.on peut creer une fct et utiliser if et les comparer
 //mais y a une autre solution pour le faire.


 class test{
    int x=0;
    public:
    void print(){

        cout<<"x is ";
        cin>>x;
    }
void compare( test ob){// au lieur mnderlha 2 objetcs il suffi nder rer whd hett lkhurr byna huwa li knderu bih appel
if(x==ob.x)
cout<<"the numbers are equales\n";
else{
    cout<<"the numbers are not equales \n";
}
}
 };
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//solution 2 is to use operator overloading


 class test2{
    int y=0;
    public:
    void print(){

        cout<<"y is ";
        cin>>y;
    }
void operator == ( test2 ob){ //operator udik -== phl smiya hna bghena n3rfu ==
if(y==ob.y)
cout<<"the numbers are equales\n";
else{
    cout<<"the numbers are not equales \n";
}
}
void operator +(test2 ob){ //ob1+ob2 likt3yt 3la hd fct hya ob1 : dima li 9bl operator

cout<<y+ob.y<<endl;
}
 };



int main(){
test ob,ob1;
ob.print();
ob1.print();
  
 //hna drna appel b ob.y3ni dek x dyl ob hya x lii kyna f fct lfu9
 ob.compare(ob1); 
 //////////////////////////////////////////////////////////////////////////////////////////////////
 cout<<endl<<endl;
 /*
 int x=2;
 int y=4;
 cout<<(x==y)<<endl; // 0 because false
 */
 // the question is .can we use it to objects ? nooo
 //we can not use ob==ob2 
            //   ob+ob2
            //ob1-ob2
            //we can not use arithmethiques on objects
         //!!!!!!!!!!!

test2 ob2,ob3;
 
 ob2.print();
 ob3.print();

 ob2==ob3; //bkuul bsata
 
ob2+ob3;
    return 0;
}