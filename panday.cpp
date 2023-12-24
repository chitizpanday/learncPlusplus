#include <iostream>
//#include <cassert>
// double squareArea(int length){
// return length*length;
// }

// int main(){
// std::cout<<squareArea(3);
//    return 0;
// }
//==============
// int circleArea(int r){
//    float pi = 3.14;
//    return  (pi*r*r);

// }
// int main(){
//    std::cout<<float (circleArea(5));
//    return 0;
// }
//==================================================================
// #include <iostream>
// int glo=9;

// void sum (){
// int a=2, b=3;
// std::string name = "chitiz";
// std::cout<<name;
// std::cout<<a+b;
// }

// int main (){
// int glo=5;
// bool yes=true;
// std::cout<< glo  <<  yes;
// sum();
//    return 0;
// }
//===========================================================
// TYPE CASTING
// int main()
// {
//    int a = 45;
//    float b= 45.87;
//    std::cout<<(double)a<<std::endl;
//    std::cout<<int (b);
//    return 0;
// }
//=================================================================

// int addition(){
//    int a,b,c;
//    //c=(a+b);
//    std::cout<<"please provide the first integer" <<std::endl;
//    std::cin>>a;
//    std::cout<<"please provide the seconf integer"<<std::endl;
//    std::cin>>b;
//    c=(a+b);
//    std::cout<<"the sum of the two integer is" <<c;
//    return c;
// }
// int main(){
//    addition();
//    return 0;
// }
//==================================break and continue==========================
// # include <iostream>
// using namespace std; 

// int main (){
//    for (int i=0; i<=11; i++){
//       if(i==6){
//          continue;
//       }
//       cout<<i;
//    }
//    return 0;
// }
//========================
// int demo(){
//    int i;
//    for( i=0; i<10; i++){
//       //if(i==5){continue;}
//       std::cout<<i;
//    }
//    return i;

// }

// int main(){
//   std::cout<< demo();
//    return 0;
// }

//=================================Pointer========================
// pointer is a data type (variable) that holds the address of another data type (variable)
// & ---> (address of) operator
// *---->value at
//Reference variable
// #include<iostream>
// int main()
// {
// int a=7;
// int & b = a;        //variable b starts pointing a
// std::cout<<a <<std::endl;
// std::cout<<b;
// std::cout<<&b;
//    return 0;
// }
//=========================
//  # include <iostream>
// using namespace std; 

// int main (){
//    int a =5;
//   int* b = &a;
//    cout<< &a <<endl;
//    cout<< b <<endl;
//    cout<<*b;
//    return 0;
// }

//===========================================ARRAYS AND POINTERS===============
// # include <iostream>
// using namespace std; 

// int main (){
//    int size;
//    int arr [] = {20,21,22,23};
//    size = sizeof(arr)/sizeof(int);
//    for(int i=0; i<size; i++){
//       cout<<arr[i];
//    }
//    int *p = arr;
//       cout<< *p;
//       cout<< *(p+1);
//       cout<< *(p+2);
//       cout<< *(p++);
//       cout<< *(++p);

//    return 0;
// }
//====================================STRUCTURE================================
//STRUCTURE IS A COLLECTION OF DIFFERENT DATA TYPES UNLIKE ARRAY which is a collection of similar data types.
//use array when working with similar data tyes, use structure when working with different data types. 

// # include <iostream>
// using namespace std; 

// struct student
// {
//    int roll;
//    char name;
//    float marks;
// } stu;


// int main (){
//    cout<<"what is your roll?" <<endl;
//    cin>>stu.roll;
//    cout<<"what is your name?" <<endl;
//    cin>>stu.name;
//    cout<< "your name is " <<stu.name <<"your roll is" <<stu.roll;
//    return 0;
// }

//=====================================UNION================================
//In structure, every member has their own memory. but in union, the size of the union is equal to its biggest member size, say a union has 4 members
//moemory will be creted for the largest member and all other smaller members will use the same memory.
// So essentially struct and union are the same thing that deals with different data types but union occupies significantly less memory!!!
//execution of struct is fast as all the members have their own memory, its the other way around in case of union.

// # include <iostream>
// using namespace std; 

// struct employee1
// {
//    int id;
//    double salary;
//    float opt;
// }emp1;

// union employee2
// {
//    int id;
//    double salary;
//    float opt;
// }emp2;



// int main (){
//    cout<< sizeof (emp1) <<endl;
//    cout<< sizeof (emp2);
//    return 0;
// }

//=====================================================struct practice=======================
// # include <iostream>
// using namespace std; 
// struct student
// {
//    int roll;
//    char name[20];
//    float marks;
// }stu;

// int main (){
//    cout << "enter student roll" <<endl;
//    cin>> stu.roll;

//    cout << "enter student name" <<endl;
//    cin>> stu.name;

//    cout << "enter student marks"<<endl;
//    cin>> stu.marks;

//    cout<< stu.roll <<ends << stu.name <<ends << stu.marks;
//    return 0;
// }
//=================================================================
//  # include <iostream>
// using namespace std;

// int sum(int a, int b);// Function prototype
// int main()
// {
//  cout<< sum(3,4);
//    return 0;
// }

// int sum (int a, int b)
// {
//  int c=(a+b);
//    return c;
// }
//==========
// int sum(int a, int b){
// int c = (a+b);
// return c;
// }
// int main(){
//    std::cout<<sum(7,6);
// }
//========================================================
//  # include <iostream>
// using namespace std; 
// # include <string.h>
// int main (){
// char collection []= "chitiz";
// char collection1 []= "panday";
// int r=strlen(collection);
// cout<<r;
// cout<<strupr(collection) <<endl;
// cout<<strcat(collection, collection1)<<endl;
// cout<<strrev(collection)<<endl;
//    return 0;
// }
//===============================
// int main(){
//    char characters [] = "aeiou";
//    //std::cout<<strlen(characters);
//    for(int i=0; i<= strlen(characters); i++){
//       std::cout<<characters[i];
//    }
//    return 0;
// }

//==================================================FILE HANDELING============
// The header file for file handeling is # include <fstream>
//to create and write we use ofstream, to read from the file we use ifstream.
# include <iostream>
# include <fstream>
#include <conio.h>
using namespace std; 

// int main (){
//    ofstream newfile ("c:\\Users\\pandc\\OneDrive\\Desktop\\cpp.txt");
//    cout<<"file created";
//    newfile<<"file handling testing content";
//    newfile.close();
//    return 0;
// }
// int main(){
//    char names [100];
//    std::cout<<"what is your name";
//    cin.getline(names, 100 );
//    ofstream object;
//    object.open("c:\\users\\pandc\\onedrive\\Desktop\\filehandeling.txt");
//    object<<names;
//    object.close();
//    getch();
// }
//==================================================================Read from the file with ifstream============================
// # include <iostream>
// # include <fstream>
// using namespace std; 

// int main (){
//    ifstream newfile ("c:\\Users\\pandc\\OneDrive\\Desktop\\cpp.txt");
//    string str;
//    while (getline(newfile,str))
//    {
//      cout<<str;
//    }
//    newfile.close();
//    return 0;
// }
//================================================EXCEPTION HANDELING=====================================
// # include <iostream>
// using namespace std; 

// int main (){
//    int a,b,c;
//    cout<< "give me two numbers" <<endl;
//    cin>>a>>b;
//    try
//    {
//       if (b==0)
//       throw b;
//    }
//    catch(int b)
//    {
//       cout<<"can't be divided by"<<b;
//    }
   
//     c=a/b;
//    cout<<c;
//    cout<<"execution successful";
//    return 0;
// }
//==========================================OOPS================================================================
//==========================================CLASS==============================================================
//CLASS is a user defined data type. it has its own data members (variables, properties) and member function which can be used by creating
//an instance of the class. class is just a logical entity that does not have no memory which can also be called a template, but 
//memory is created as soon as it gets instantiated, ie- when its object is created
// by default the access specifier of a class is private
// object is an instance of a class that has state (data member/variables) and behavior (member functions) Object is an instance of a Class. 
//When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated.
 
// # include <iostream>
// using namespace std; 

// class people{
//    int a;
//    string b;
//    public: void hobby(){
//       a=50;
//       cout<<"he scored " <<a <<"runs" <<endl;
//    }
//    public: void students(){
//       b= "students are debating";
//       cout<<b;
//    }

// };

// int main (){
//    people call;
//    call.hobby();
//    call.students();
//    return 0;
// }
//===============================ANOTHER HIFI CLASS EXAMPLE=========================
// # include <iostream>
// using namespace std; 
// class student{
// int roll;
// char name [20];
// int age;
// float marks;
// char gender;
// public:
// void getdata(){
// //cout<<"please provide students data\n";
// cout<<"roll : ";
// cin>>roll;
// cout<<"name : ";
// cin.ignore();
// cin.getline(name,20);
// cout<<"age : ";
// cin>>age;
// cout<<"marks : ";
// cin>>marks;

// }
// void showdata(){
//    cout<<"roll : "<<roll <<ends;
//    cout<<"name : "<<name <<ends;
//    cout<<"age : "<<age <<ends;
//    cout<<"marks : "<<marks <<ends;

// }
// };
// int main (){
//    student obj[3];
//    for(int i=0; i<3; i++){
//       cout<<"Enter the data for student : "<<i+1 <<endl;
//       obj[i].getdata();
//    }
// cout<<endl<<endl;
//    for(int i=0; i<3; i++){
//       cout<<"Result of the data for student : "<<i+1 <<endl;
//       obj[i].showdata();
//    }
//    return 0;
// }
//====================================CONSTRUCTOR==============================================
//in constructor, the name of the function is same as the name of the class, just creating an object of a class calls the constructor function itself
// constructor function is used to initialize the object
//===================================3 types of constructors: Default, parametrized, and 
// # include <iostream>
// using namespace std; 

// class animals{
// string b;
// public:  animals(){
// b= "lion";
// cout<< "the king of the jungle is "<<b;
// }
// };


// int main (){
//    animals ani;
//    return 0;
// }
//=====================================Parametrized constructor==================

// # include <iostream>
// using namespace std; 

// class forest{
      
//       public: forest( string a, int b){
//          cout<< b <<endl <<a;
//       }
// };
// int main (){
//    forest fore ("kedarnaath", 7);
//    return 0;
// }
//=================================Destructor===============================
//destructor is also a special type of member function that is used to de-allocate the memory allocated by the constructror.
// # include <iostream>
// using namespace std; 
// int count = 0;

// class university{
//    public: university(){
//       cout<< ++count<<"memory allocated"<<endl;
//    }
//    ~university(){
//       cout<< count--<<"memory deallocated"<<endl;
//    }
// };
// int main (){
//    university uni1;
//    university uni2;
//    return 0;
// }
//===============================FRIEND FUNCTION===============================
// friend function is a function which is not the member of class but can access private and protected
// members of a class. friend function is declared using the keyword "friend"
//using friend function, we can work with 2 different classes members. 
// # include <iostream>
// using namespace std; 

// class uewr{
// private: int a;
// public:  uewr(){
//    a=7;
//    cout<<"i am watching channel"<<a <<endl;
// }
// friend void satish(uewr obj);
// };
// void satish(uewr obj){cout<<obj.a;}

// int main (){
//    uewr r;
//    //r.chitiz();
// satish(r);
//    return 0;
// } 
//==========================================================Scope resolution operator====================
// #include<iostream>
// using namespace std;

// int x = 7;

// int main()
// {
//    int x = 10;
//    cout<<x;
//    cout<<::x; 
//    return 0;
// }

//===============
// # include <iostream>
 

// int main (){
   
//   std:: cout<<"using name space is a bad practice";
//    return 0;
// }

//=========================================================
// # include <iostream>
// using namespace std; 

// int main (){
//     string a []= {"chitiz ", "panday ", "gyani ","cha"};
//     for (int i = 0; i < 4; i++)
//     {
//       cout<<a[i];
//     }
   
   
//    return 0;
// }
//================
// int main(){
//    int sum = 0;
//    int numbers[5]={1,2,3,4,5};
//    for(int i =0; i<5; i++){
//       sum=sum+numbers[i];
//       //std::cout<<sum;
//    }
//    std::cout<<sum;
//    return 0;
// }
//=======================================INHERITENCE==============================
//Classes can have parent classes. Child classes will inherit all of the behavior and attributes of the parent class. 
//Child classes can then choose to overwrite some of those as necessary.
// # include <iostream>
// //using namespace std; 
// class universe{
//    public:
// void people(){
// std::cout<<"people are greedy";
// }
// void animals(){
// std::cout<<"animals are innocent!!";
// }
// };

// class earth : public universe{
//    public:
//    void resources(){
//    std::cout<<"earth is rich in resources";
//    }
// };
// int main (){
//    earth ear;
//    ear.people();
//    ear.resources();
//    ear.animals();
//    return 0;
// }
//================================MULTIPLE INHERITANCE==========================

// # include <iostream>
// //using namespace std; 

// class lake{
// public:
// void water(){
//    std::cout<<"water is clear \n";
// }
// };
// class fish{
// public:
// void trout(){
//    std::cout<<"trouts are delicious";
// }
// };

// class plants : public lake, public fish{

// };
// int main (){
//    plants plan;
//    plan.water();
//    plan.trout();
//    return 0;
// }

//Function overloading is a feature of object-oriented programming where two or more functions can have the same name but different parameters. 
//When a function name is overloaded with different jobs it is called Function Overloading. In Function Overloading “Function” name should be the 
//same and the arguments should be different. Function overloading can be considered as an example of a polymorphism feature in C++.

//When the base class and derived class have member functions with exactly the same name, same return-type, and same arguments list, then it is 
//said to be function overriding.
// using namespace std;  

// class A {  
//    public: 
//    void display() {   
//       cout<<"Base class"; 
//    } 
// }; 

// class B:public A {  
//    public: 
//    void display() {   
//       cout<<"Derived Class"; 
//    } 
// }; 

// int main() {  
//    B obj; 
//    obj.display(); 
//    return 0;  
// }

//=============================================ABSTRACT CLASS===========================================
//abstract class is a type of class which we cannot create an object for or that cannot be instanciated. 
// Abstract class should always contain a pure virtual function (a function that does not have a body) which is also called abstract function.
// Abstract classes are created because: 1- so that its members cannot be accessed through object (as object cannot be created for abstract classes) 
// 2- so that pure virtual functions can be kept inside the abstract class that can be re-used in another class through inheritance using function overriding method.
//the member functions of an abstract class can be called and accessed through inheritance and the method overriding

// # include <iostream>
// using namespace std; 
// class abstractClass{
//    virtual void f1() = 0; // pure virtual function
//     public:
//    void chitiz (){
//       cout<< "this is an abstract class example \n";
//    }
// };

// class nonAbstractClass :public abstractClass{
//    public:
// void f1(){
//    cout<<"see how the member functions of an abstract class can be called through inheritance and the method overriding????";
// }
// };


// int main (){
//    nonAbstractClass obj;
//    obj.chitiz();
//    obj.f1();

//    return 0;
// }
//========================another abstract class example============
// # include <iostream>
// using namespace std; 

// class Bank {                                 //abstract class
//    public:
// float a, interest, totBalance;
// int accNo;
// virtual void calcInterest(float balance)=0;   //pure virtual function
// public:
// void showInfo(int a){
// accNo=a;
// cout<<"your account number is :"<<accNo <<endl;
// }
// };

// class wellsFargo : public Bank{
//    public:
// void calcInterest(float balance){
// a=balance;
// interest=a*5/100;
// totBalance= a+interest;
// cout<<"Your interest is : "<<interest<<endl;
// cout<<"Your total balance is : "<<totBalance;
// }
// };

// int main (){
//    wellsFargo obj;
//    obj.showInfo(34526651);
//    obj.calcInterest(500);
//    return 0;
// }

//=============================================ABSTRACTION==================================================
// # include <iostream>
// using namespace std; 
// class bank{
//    private:
//    int pin = 3773;
//    int balance = 39869888;
//    public:
//    string bankName= "wells Fargo";
//    int accountNum = 3456222;
//    void output(){
//       cout<<pin<<endl<<balance<<endl<<bankName;
//    }
// };
// int main (){
//    bank b;
//    b.output();
//    cout<<b.bankName;
//    return 0;
// }
//Encapsulation is defined as wrapping up data and information under a single unit. In Object-Oriented Programming, 
//Encapsulation is defined as binding together the data and the functions

//============================================setwidth==============setw()========================
// # include <iostream>
// #include<iomanip> //header for setw()
// int main (){
//    std:: cout<<std::setw(50);
//    std::cout<<"welcome to citizen bank";
  
//    return 0;
// }
//=========================================getline(cin,variable) to get the full name======
// #include<iostream>
// struct panday{
// std::string name;
// int age;
// };

// int main(){
//    panday object;
//    std::cout<<"what is your age: ";
//    std::cin>>object.age;
//    std::cin.ignore();
// std::cout<<"what is your full name: ";
// std::getline(std::cin, object.name);
// std:: cout<< "your full name is "<<object.name <<std::endl<<"yoy are "<<object.age;
//    return 0;
// }
//======================================================================h^2 = p^2 + b^2=================================
// #include<iostream>

// #include<cmath>    //this header file is used for calculations

// class formula{
//    double base;
//    double hypotenous;
//    double perpendicular;

// public:
//     formula(){
//          std::cout<<"what is the value of base? ";
//       std::cin>>base;

//        std::cout<<"what is the value of perpendicular? ";
//       std::cin>>perpendicular;
      
//    }

//    void calculation(){
//       hypotenous = sqrt(pow(perpendicular,2)+pow(base,2));
//       std::cout<<"Hypotenous is :"<<hypotenous;
//    }

// };

// int main(){
//    formula object;
//    object.calculation();
//    return 0;
// }

//================================================================SWITCH PRACTICE========================================
// #include<iostream>

// void switchDemo(){
//    int month;
//    std::cout<<"please enter the month (1-12): ";
//    std::cin>>month;

//    switch (month)
//    {
//    case 1:
//       std::cout<<"it is January" <<std::endl;
//       break;
//    case 2:
//       std::cout<<"it is February" <<std::endl;
//       break;
//    case 3:
//       std::cout<<"it is March" <<std::endl;
//       break;
   
//    default: if (month>12)
//    {
//       std::cout<<"it is not a valid number";
//    }
   
//       break;
//    }
// }

// int main(){
//    while(true){
//    switchDemo();
//    }
//    return 0;
// }

//============================================RETURN===========================================
// #include<iostream>
// int sum (){
//    int a=4,b=7;
//    return (a+b);
// }

// int main(){
//    //int a=3, b=4;
//   std:: cout<<sum();
// }
//==============================================CALCULATOR PROJECT===========================================
// #include<iostream>
// void calculator(){
//    int num1, num2,result;
//    char oper;
   
// std::cout<<"what operation would you like to use? (+,-,*,/): ";
// std::cin>>oper;

// std::cout<<"Enter the first number: ";
// std::cin>>num1;

// std::cout<<"Enter the second number: ";
// std::cin>>num2;

// switch (oper)
// {
// case '+':
//    std::cout<<"the result of the two numbers is: "<<num1+num2<<std::endl;
//    break;
// case '-':
//    std::cout<<"the result of the two numbers is: "<<num1-num2 <<std::endl;
// default:
//    break;
// }
// }
// int main(){
//    while(true){
//       calculator();
//    }
//    return 0;
// }

//===========================================================TERNARY OPERATOR=======================================
//Ternary Operator is a replacement to if else statement
//condition ? expression1 : expression2
//#include<iostream>
// int main(){
// int input;
// std::cout<<"please provide the number: ";
// std::cin>>input;
// input%2 ==0 ? std::cout<<"the number provided is even" : std:: cout<<"the number provided is odd";
// return 0;
// }
//=================
// int main(){
//    double temp;
//    std::cout<<"Enter the Temperature: ";
//    std::cin>>temp;
//    temp<=0 || temp>=30 ? std::cout<<"temperature is bad!!" : std::cout<<"Temperature is good!!";
//    return 0;
// }
//============================================================TEMPERATURE CONVERSION PROGRAM===================================================

// #include<iostream>

// class tempConv{
// char unit;
// double input;
// double temp;
// public:
// void calculation(){
//    std::cout<<"******** Temperature Conversion App ********"<<std::endl;
//    std::cout<<"Celcius (C)"<<std::endl;
//    std::cout<<"Feranhite (F)"<<std::endl;
//    std::cout<<"Please enter what unit would you like to convert the temperature to? C or F: ";
//    std::cin>>unit;
//    if(unit=='F' || unit=='f'){
//       std::cout<<"Please enter the temperature in Celcius: ";
//       std::cin>>input;
//       temp=(1.8 * input) +32.0;
//       std::cout<<"the temperature in Feranhite is: "<<temp <<"F";
//    }
//    else if(unit == 'c' || unit == 'C'){
//       std::cout<<"Please enter the temperature in Feranhite: ";
//       std::cin>>input;
//       temp = (input-32)/1.8;
//       std::cout<<"the temperature in Celcius is: "<<temp <<"C";
//    }
//    else{std::cout<<"Please provide valied unit F or C";}
// }
// };


// int main(){
// tempConv object;
// object.calculation();
//    return 0;
// }
//===================================================== .length(), .empty(), .append(), .at(), .insert()=====================================
 #include<iostream>
// int main(){
//    std::string name;
//    std::cout<<"Enter your full name: ";
//    std::getline(std::cin, name);
//   // name.length()>15 ? std::cout<<"your name should only be fifteen characters long" : std::cout<<"welcome "<<name;
//    //name.empty() ? std::cout<<"You did not enter your name" : std::cout<<"welcome "<<name;
//    //name.append("@gmail.com"); std::cout<<"Your new user id is "<<name;
//   // std::cout<<name.at(5);
//   name.insert(1,'h'); std::cout<<name;
//   return 0;
// }

//==========================================WHILE LOOP=========================
// while loop is like a if statement except that  it can repeat some code infinitely as long as the condition provided remains true.
//A great use of while loop is that you can force users to do something in order to continue with the rest of the code.
// there is a lot of overlap where you could use either for loop or while loop, for loop tend to be better in situations where you only 
//need to repeat code a certain amount of times
// int main(){
//    std::string username;
//    std::string password;
//    while(username.empty()){
//       std::cout<<"Enter your username: ";
//       std::getline(std::cin, username); 
//      if(username.empty()) {std::cout<<"Username cannot be empty \n";}
//    }
//    while(password.empty()){
//       std::cout<<"enter your password: ";
//       std::getline(std::cin, password);
//       if (password.empty()){std::cout<<"password cannot be empty \n";}
//    }
//    std::cout<<"welcome "<<username;
//    return 0;
// }
//======================
// int main(){
//    int x =3;
//    int integer;
//    int sum=0;
//    while (x<=5)

//    {
//        x++;
//       std::cout<<"provide the integer";
//       std::cin>>integer;
//       sum=sum+integer;
//    }
//    std::cout<<"the sum of the provided integers is: "<<sum;
//       return 0;
// }
//==============================================================random for loop practice==================================
// int main(){
//    std::string names []= {"chitiz", "sheetal", "reyhan"};
//    int size = sizeof(names)/sizeof(std::string);
//    for (int i = 0; i <size; i++)
//    {
//       std::cout<<names[i] <<std::endl;
//    }
   
//    return 0;
// }
//==========
// int main(){
//    std:: string names = "chitizpanday";
//    for (int i = 0; i <names.length(); i++)
//    {
//       std::cout<<names[i] <<std::endl;
//    }
   
//    return 0;
// }
//====================================================NESTED FOR LOOP======================================
// int main(){
//   int rows;
//    char symbol;
//   std::cout<<"how many rows do you want? ";
//   std::cin>>rows;
//   std::cout<<"What symbol do you want to use? ";
//   std::cin>>symbol;

//   for (int i = 0; i <= rows; i++)
//   {
//    for (int j= 0; j<+10; j++)
//    {
//       std::cout<<symbol;
//    }
//     std::cout<<'\n';
//   }
 
//    return 0;
// }

//=======================================================================RANDOM NUMBER GENERATOR================
// #include<ctime>  //header file used to generaterandom numbers
// int main(){
//    std::string names[]= {"kese", "damare", "kihne", "loke", "thage"};
// srand(time(NULL)); //sr = pseudo random but very close to random
// int num = rand()%5;
// std::cout<<names[num];
// return 0;
// }
//=================================================================RANDOM PRIZE GENERATING GAME USING RANDOM NUMBER GENERATOR================

// #include<iostream>
// #include<ctime>

// int main(){
//    srand(time(NULL));
//   int randomNumber = rand()%3+1;
//   switch (randomNumber)
//   {
//   case 1:
//    std::cout<<"U win trip to cancun";
//    break;
//   case 2:
//    std::cout<<"U win jackpot";
//    break;
//   case 3:
//    std::cout<<"U win daal vaata cupon";
//    break;
   
//   }
//    return 0;
// }
//=================================================NUMBER GUESSING GAME=============================
// #include<ctime>
//  void numGuessingGame(){
//    int num;
//    int guessInput;
//    srand(time(NULL));
//    num=rand()%100 +1;
//    std::cout<<num;
//    std::cout<<"***********NUMBER GUESSING GAME***********\n";
//    do
//    {
//    std::cout<<"Guess A Number Between 1 and 100: ";
//    std::cin>>guessInput;
//    if(guessInput>num){
//       std::cout<<"Go Lower \n";
//    }
//    else if(guessInput<num){
//       std::cout<<"Go Higher \n";
//    }
//    else{std::cout<<"Thats correct!!!!";}
//    } while (num!=guessInput);
   
// }
// int main(){
// numGuessingGame();
//    return 0;
// }
//==================================
// #include<iostream>
// #include<ctime>
// class numGuessingGame{
// public:
// void playrInput();
// void result();
// };

// int playerInput;
// int tries;
// void numGuessingGame:: playrInput(){
//    //int playerInput;
//   std::cout<<"please enter the number you want: ";
//   std::cin>> playerInput;
//   std::cout<<"player entered: "<<playerInput<<'\n';
// }
 
// void numGuessingGame:: result(){
//     int cpuInput;
//   srand(time(NULL));
//   cpuInput = rand()%100+1;
  
//   while(playerInput!=cpuInput){
//    playrInput();
//    tries++;
//    if(playerInput<cpuInput){
//       std::cout<<"go higher\n";
//    }
//    else if(playerInput>cpuInput){
//       std::cout<<"go lower\n";
//    }
//    else{std::cout<<"you are the winner!!!\n";}
//    std::cout<<"you won the game in "<<tries <<" attempts";
//   }
// }







// int main(){
//    numGuessingGame object;
//    object.result();
  
//    return 0;
//    }










//=============================================================================
// std:: string concatStrings(std:: string string1, std:: string string2){

// return string1+ string2;
// } 


// int main(){
// //std::string firstName = "ghansyam";
// //std:: string lastName = "Jadav";
// std::cout<<concatStrings("Ghanshyam ", "jadav");
// return 0;
// }
//======================================FUNCTION OVERLOADING====================
// void functionOverloading(){
//    std::cout<<"I want pizza \n";
// }
// void functionOverloading(std::string topping1){
//    std::cout<<"I want "<<topping1<< " pizza";
// }

// void functionOverloading(std::string topping1, std::string topping2){
//    std::cout<<"I want "<<topping1<<" and "<<topping2<<" pizza";
// }

// int main(){
//    functionOverloading("pepperoni", "mushroom");
// }
//==============================================================loop practice to get factorial===========================

// int main(){
//    int input;
//    int fact =0;
//    std::cout<<"Please enter the number u want the factorial of: ";
//    std::cin>>input;
//    if (input<0)
//    {
//       std::cout<<"Factorial of a negative number does not exists";
//    }
//    else{
//       for ( int i=1; i<= input; i++)
//       {
//          fact++;
//       }
//       std::cout<<"the factorial of the given number is: "<<fact;
//    }
   
//    return 0;
// }
//=================================for loop for pattern ==========================================

// int main(){
//    for(int rows=1; rows<=5; rows++){
//       for(int j=1; j<=rows; j++){
//          std::cout<<j;
//       }
//       std::cout<<"\n";
//    }
//    return 0;
// }
//=============================strcpy()===================

// int main(){
// char alphabets[20];
// strcpy(alphabets, "chitiz panday");
// std:: cout<<alphabets;
//    return 0;
// }
//===================RANDOM======
// class book{
//    std::string name;
//    int isbn;
//    public:
//    void demo(std::string name, int isbn){
//       std::cout<< "book name is: "<<name <<"and the isbn is: "<<isbn;
//    }
// };
// int main(){
//    book object;
//    object.demo("subarnalata",437777);
// }
//=================str.len() and str.empty()===========================
// int main(){
//    std::string name;
//    std::cout<<"what is your name: ";
//    std::getline(std::cin, name);
//    if(name.empty()){
//       std::cout<<"\n your name can not be empty";
//    }
//    if(name.length()>10){
//       std::cout<<"\n your name can not be more than 10 characters";
//    }

//    std::string email = name.append("@gmail.com,");
//    std::cout<<"your new email is "<<email;
//    return 0;
// }
//==========str.length()============
// int zoo(){
// std::string animal = "kangaroo";
//    int x = animal.length();
//    return x;
// }
// int main(){
//    std::cout<<zoo();
//    return 0;
// }
//========================RANDOM=====
// std::string name(std:: string firstName, std:: string lastName){
// return firstName + lastName;
// }

// int main(){
//   std:: string fullName = name("satish", " pandey");
//   std::cout <<fullName;
//    return 0;
// }
//===========================GET THE SIZE OF AN ARRAY=============sizeof()/sizeof()==================
//  double getTotal(){
//    double prices[] = {100.45, 110.34, 120.44, 140, 130.21};
//    int size = sizeof(prices)/sizeof(double);
//    std::cout<<size<<'\n';
//    double total =0;
//    for(int i=0; i<size; i++){
//       total += prices[i];
//    }
//    return total;
// }

// int main(){
//  std::cout<<getTotal();
//    return 0;
// }
//===================================================PASSSING AN ARRAY INTO A FUNCTION==================
// int calculateSum(int numbers[],int size){
//    int sum=0;
// for(int i = 0; i<size; i++){
// sum+=numbers[i];
// }
// return sum;
// }

// int main(){
//    int numbers [] = {10,20,30,40,50};
//    int size = sizeof(numbers)/sizeof(int);
//    std::cout<<calculateSum(numbers,size);
//    return 0;
// }
//=============when u pass an array to a main function, u only have to pass the array name, u dont need a set of =================================================
//square brakets. if a function receives an array, it decys into a pointer and so the function no longer knows
//what the size the array is so we could pass that as an additional argument and let the function know what the size of the array is

// double getTotal(double prices[], int size){
// double total = 0;
// for(int i=0; i<size; i++){
//    total+=prices[i];
// }
// return total;
// }

// int main(){
// double prices[]={10, 12, 14, 16, 18};
// int size = sizeof(prices)/sizeof(double);
// double total=getTotal(prices,size);
// std::cout<<"$ "<<total;
//    return 0;
// }
//=================================================KHATARA============
// int searchArray(int array[], int size, int element){
//    for(int i=0; i<size; i++){
//       if(array[i] == element){
//          return i;
//       }
//    }
//    return-1;
// }

// int main(){
//    int numbers[]={1,2,3,4,5,6,7,8,9,10};
//    int size = sizeof(numbers)/sizeof(int);
//    int index;
//    int myNum;
//    std::cout<<"Enter the element to search for: \n";
//    std::cin>>myNum;
//    index = searchArray(numbers, size, myNum);
//    if(index != -1){
//       std::cout<<"My number is at index: "<<index;
//    }
//    else{std::cout<<myNum<<" is not in the index";}
//    return 0;
// }
//======================
// #include<string>
// int findMyFruits(std:: string fruits[],int size, std::string userChoice ){
// for(int i =0; i<size; i++){
// if(fruits[i]==userChoice){
//    return i;
// }
// }
// return -1; // in programming, -1 serves as a centinal value, -1 typically means something was not found.
// }

// int main(){
// std::string fruits[] = {"apple","orange","banana", "grapes", "pare"};
// int size = sizeof(fruits)/sizeof(std::string);
// std::string userChoice;
// int index;
// std::cout<<"what fruit would you like to find: ";
// std::getline(std::cin, userChoice);
// index = findMyFruits(fruits,size,userChoice);
// if(index!=-1){
// std::cout<<userChoice<<" is at the index "<<index;
// }
// else{std::cout<<userChoice<<" is not listed in the array";}
//    return 0;
// }
//===========RANDOM==========
// #include<string.h>
// std:: string hardware();
// int main(){
//    std::cout<<hardware();
//    return 0;
// }
// std:: string hardware(){
//    std::string animal = "elephant";
//    std::cout<<animal.length();
//   char name[25];
//    strcpy(name, "secureSync 265026");
//    return name;
// }
//===================================
// int addNumbers(int myNumbers[5]){
//    int sum=0;
//    for(int i = 0; i<5; i++){
//       sum+=myNumbers[i];
//       //std::cout<<sum;
//    }
//    return sum;
// }

// int main(){
//    int myNumbers[5] = {10,20,30,40,50};
// std::cout<<addNumbers(myNumbers);
//    return 0;
// }
//================================SETTER AND GETTER=================
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
//===================================================================
// class university{
//    public:
//    std::string getData(std:: string name);
//   // void showData();
// };


// std::string university:: getData(std:: string name){
//    return name;
// }


// int main(){
//    university object;
//    std::cout<<object.getData("prachut");
//    //object.showData();
//    return 0;
// }
//=============================
// class bank{
// 	public:
// 	int accNo, balance;
// 	std::string accountHolderName, branch;
// 	enterData();
// }
// bank object[10];
//  std::bank void enterData(){
// 	int customerChoice;
// 	 std::cout<<"Enter the number of customer u want to enter the data";
// 	 std::cin>>customerChoice;
	 
	
//  }


// int main(){
// 	enterData()
// 	return 0;
// }
//=========================
// class bank{
// 	int banknumber;
// 	std:: string branch;
// 	public:
// 	void enter(){
// 		std::cin>>banknumber;
// 		std::cin>>branch;
		
// 	}
// void show(){
// 	std::cout<<banknumber;
// 	std::cout<<branch;
// };
// };

// int main(){
// bank object[3];
// for(int i=0; i<2; i++){
// std::cout<<"please enter the record of bank customer "<<i+1<<std::endl;
// object[i].enter();}
// for(int i=0; i<2; i++){
// 	object[i].show() <<std::endl;}
// 	return 0;
// }
//====================================
// class employees{
// 	std::string name;
// 	float salary;
// 	public:
// 	void getData();
// 	void showData();
// };

// void employees::getData(){
// 		std::cout<<"Name: ";
// 		std::cin.ignore();
// 		std::getline(std::cin, name);
// 		std::cout<<"Salary: ";
// 		std::cin>>salary;
// }

// void employees::showData(){
// 	std::cout<<"Your name is "<<name <<std::endl;
// 	std::cout<<"Your salary is "<<salary <<std::endl;
// }


// int main(){
// 	employees object[3];
// 	for(int i=0; i<3; i++){
// 	std::cout<<"p;ease enter the records of employee "<<i+1 <<std::endl;
// 	object[i]. getData();}
	
// 	for(int i=0; i<3; i++){
// 	object[i]. showData();}
// 	return 0;
// }
// int main(){
// std::cout<<"I am fine";
//    return 0;
// }
//===============================this====================
// in c++, the keyword "this" holds the address of an object, this is also used to access the member variable of a class when the member variable and the local variable of a function have 
// the same name.

// class funrun{
//    int a=10;
//    public:
//    void firstGraders(int a){
//       this->a = a;
//       std::cout<<this -> a;

//       std::cout<<"the address of the object is: "<<this;
//    }
// };

// int main(){
//    funrun object;
//    object.firstGraders(5);

//    return 0;
// }
//============

// class employeeRecord {
//    std::string name;
//    float salary;
//    public:
//    void getdata();
//    void showdata();
// };

// void employeeRecord::getdata(){
//    std::cout<<"employee name: ";
//    std::cin.ignore();
//    std::getline(std::cin, name);
//    std::cout<<"employee salary: ";
//    std::cin>>salary;
// }
// void employeeRecord::showdata(){
//    std::cout<<name<<std::endl;
//    std::cout<<salary<<std::endl;
// }
// int main(){
//    employeeRecord object [3];
//    for(int i=0; i<3; i++){
//       std::cout<<"please input data for employee "<<i+1 <<std::endl;
//       object[i].getdata();
//    }
//    for(int i=0; i<3; i++){
//       std::cout<<"input data for employee "<<i+1 <<std::endl;
//       object[i].showdata();
//    }
//       return 0;
//    }
int isLesserOrGreater(int a){
   bool isgreaterThan;
   isgreaterThan = a>0;
    if(isgreaterThan){
      std::cout<<"I am lucky \n";
   }
   return isgreaterThan;
  
}
int main(){
  isLesserOrGreater(1);
   return 0;
}