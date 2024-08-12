#include <iostream>
using namespace std;
class animal{
 private:
 string name;
 string species;
 int age;
 string healthStatus;
 int hungerLevel;
 public:
 animal(){
 name="unknown";
 species="unknown";
 age=0;
 healthStatus="healthy";
 hungerLevel=50;
 }
 animal(string n, string s, int a, string h, int l){
 name=n;
 species=s;
 age=a;
 healthStatus=h;
 hungerLevel=l;
 }
 void feed(int fodder){
 hungerLevel=hungerLevel-fodder;
 if(hungerLevel<0){
 hungerLevel=0;
 }
 }
 void treat(){
 if(healthStatus=="Sick"){
 healthStatus="Healthy";
 }
 }
 void display(){
 cout<<"Name:"<<name<<endl;;
 cout<<"Species:"<<species<<endl;
 cout<<"Age:"<<age<<endl;
 cout<<"Health-Status:"<<healthStatus<<endl;
 cout<<"Hunger Level:"<<hungerLevel<<endl;
 }
};
main(){
 animal animal1;
 cout<<"Animal 1 details:"<<endl;
 animal1.display();
 cout<<endl;
 animal animal2("Dog","Labrador",3,"Sick",60);
 cout<<"Animal 2 details:"<<endl;
 animal2.display();
 cout<<endl;
 animal2.feed(40);
 cout<<"Animal 2 is being feeded.."<<endl;
 animal2.display();
 cout<<endl;
 animal2.treat();
 cout<<"Animal 2 is being treated.."<<endl;
 animal2.display();}
