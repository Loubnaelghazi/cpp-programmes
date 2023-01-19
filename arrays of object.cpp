#include<iostream>
using namespace std;


class student {
 private:
 float notes=0;
static int cnt;
public:
 student(){

cout<<"la  "<<cnt<<" note est : ";
cin>>notes;
cnt++;
 }
 friend void average(student ob[5]); //array ob
};
int student :: cnt=1;
void average(student ob[5]){
    int sum=0;
for(int i=0;i<5;i++){
sum+=ob[i].notes;
}
cout<<"la moyenne de tous les notes est : "<<(float)sum/20<<endl; //drna dek float bch ila kant natija float tb9a float meme si les vars sont int

}














int main(){
cout<<"entrer les notes souhaites :\n";

student ob[5]; 
average(ob); //attention .mrndiruch ob[5] anderu rer ob .het 3ndha tableau de ob .
   return 0; 
}