// # include <iostream>
// using namespace std;
// int main()
// {
//    int num1, num2;
//    cout<<"give me the first number";
//    cin>>num1;

//   cout<<"give me the secnd number";
//   cin>>num2;

//   cout<< "the sum of two numbers is " << num1+num2;
//    return 0;
// }
//=========================================================
// # include <iostream>
// using namespace std;
// int main()
// {
//    int a = 4, b=5;
//    cout<<"the aa>b is: " <<(a>b) <<endl;
//    cout<<"the a==b is: " <<(a==b) <<endl;
//    cout<<"the a<b is: " <<(a<b) <<endl;
//    cout<<"the a!=b are: " <<(!(a==b));
//    return 0;
// }
// # include <iostream>
// using namespace std;
// int main()
// {
//    int age;
//    cout<< "whats your age bro??";
//    cin>>age;
//    switch (age)
//    {
//    case 18: 
//    cout<< "you can party hard";
//       break;

//    case 17:
//    cout<<"u fuck tart, drink milk!!";
//    break;
//    }
   
//    return 0;
// }
//=============================================FOR LOOP=====================
//AVOID CREATING INFINITE FOR LOOP, IT RUNS FOR EVER AND KEEPS CONSUMING MEMORY!!!
/*# include <iostream>
using namespace std;

int main()
{
   for ( int i = 0; i <= 12; i++)
   {
      cout<< i <<endl;
   }
   
   return 0;
}*/
//=============================================WHILE LOOP===================

// # include <iostream>
// using namespace std;
// int main(){
// int i=0;
// while (i<=15)
// {
//    cout<<i;
//   i++;
// }
// cout<<"the loop ran "<<i <<" times";
// }
//===================DO WHILE LOOP=======================
// #include <iostream>
// using namespace std;

// int main()
// {
//    int i =0;
//    do {cout<< i; i++;}
//    while (i<=20);
   
//    return 0;
// }
//===========================practice creating table using for loop===========================

// # include <iostream>
// using namespace std;

// int main()
// {
//    int num;
//  cout << "please provide the number  u want the table for";
//  cin>>num;
//  for ( int i = 1; i <= 10; i++)
//  {
//    cout<< num << "x" << i <<"=" << num*i <<endl;
//  }
 
//    return 0;
// }
//=======================================================
// # include <iostream>
// using namespace std; 

// int main (){
//    char arr [] = {'c', 'h', 'i', 't', 'i', 'z'};
//    for (int i = 0; i < 6; i++)
//    {
//       cout<<arr[i];
//    }
   
//    return 0; 
// }
//================================================
// # include <iostream>
// using namespace std; 

// struct employee
// {
//    int empid = 44;
//    string firname = "panday";
//    float sal = 500.33;
//    bool smokes = true;
// }emp;


// int main (){
//    cout<< emp.empid << endl<<emp.firname <<endl<<emp.sal <<endl<<emp.smokes;
//    return 0;
// }
//=======================================abstract class practice==================
// # include <iostream>
// using namespace std; 
// class bank{
//    public:
//    int a; 
//    float balance, interestRate;
// virtual void calcInterest(float balance) = 0; //pure virtual function
// public:
// void accNumber(int a){
// cout<< "your account number is : "<<a;
// }
// };




// class wellsFargo : public bank{
//    public:
//    float interest;
// void calcInterest(float balance){
// interest = balance*5/100;
// }
// void totalBalance(){
//    cout<<"your total balance is :"<< balance + interest;
// }
// };


// int main (){
//    wellsFargo obj;
//    obj.accNumber(5555555);
//    obj.calcInterest(1000);
//    obj.totalBalance();

//    return 0;
// }
//======================================================
// # include <iostream>
// using namespace std; 
// int a, interest;
// int calculateInterest(int a){
// interest = a *5/100;
// cout<<interest;
// }
// int main (){
//    calculateInterest(100);
//    return 0;
// }
//===================================
// # include <iostream>
// using namespace std; 
// int add(int a, int b){
//    return a+b;
// }
// int main (){
//   // int multiply=add(5,4);
//    //cout<<multiply;
//    cout<<add(2,3);
//    return 0;
// }
//====================================
// # include <iostream>
// using namespace std;

// class family{
// int a,b;
// char c [20];
// public:
//  void family1(){
//    cout<<"what is your name? :  ";
//    cin.ignore();
//    cin.getline(c,20);
//    cout<<"how much money u have? :  ";
//    cin>>a;
//    cout << "how much money your client wants to borrow? :  ";
//    cin>>b;
// }

// void calculate(){
//    cout<< "the money that " << c <<" has now is: $ "<<a-b <<endl;
// }
// };


// int main (){
//    family obj [3];
// for(int i =0; i<3; i++){
//    cout<<"canvas credit union "<<"client info "<<i+1<<endl;
// obj[i].family1();
// }
// cout <<endl <<endl;
// for (int i = 0; i < 3; i++)
// {
//    obj[i].calculate();
// }

// }
//=============================================
#include<iostream>
// using namespace std;
  #include<string>
// struct family
// {
//    int a=3;
//    char c [20] = "swopnil";
//    bool b;
// };
// int main(){
//    family obj;
//    cout<<obj.a;
//    cout<<obj.c;
//    strcpy(obj.c,"pandayji");
//    cout<<obj.c;
// }
// class demo{
//    std::string name;
//    public:
// void setname(std:: string x){
//    name=x;
// }
// std:: string getname(){
   
// return name;
// }
// };
// main(){
//    demo object;
//    object.setname("harke");
//   std::cout<<object. getname();
//    return 0;
// }