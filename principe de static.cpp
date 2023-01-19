//las variable statique et son principe


#include<iostream>
using namespace std;


//rdi nchufu lfr9 bin count de type static and count int 3adiya 

class num{
    private:
    int counter=1;
public:
num(){
  cout<<"this is the number "<<counter<<endl;
  cout<<"hey girl..........\n";
  counter++; //normal khs fch n3ytu 4la object 2 .ikun number 2.mais non rdi tb9a 1 wkha n3ytu 3lla 100 objets.
}

};
///////////////////////////////////////////////////////////////////////////




//anchufu dba exp 2




class num2 {

private:
static int count; //atention,normaly mkn9druc nderu declaration dkhl class knderuha bra,
                    //ila drnaha khsna drurrii ndeclariw lt7t underu initialisation.
public:
num2(){
    cout<<"i am the 2 nd constuctor \n";
  cout<<"this is the number "<<count<<endl;
  cout<<"hey girl..........\n";
  count++; //hna rdi tzed 3la dik 1 chhal ma zdna d objects het variable statique la valeure ktb9a mkhzna fihaaaa

}
};


int num2::count=1; //druuurii bhd tri9a.








int main (){
 num ob,ob2,ob3; //1 , 1 ,1

num2 x,y,z;  //1 , 2 , 3




    return 0;
}