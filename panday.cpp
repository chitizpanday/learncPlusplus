// #include <iostream>
// using namespace std;
// int main (){
//    int a = 3, b=5;
//    std::cout<< "hello choor \n" << a+b <<"\n muji paat";
//    return 0;
// }  
//==================================================================
// int glo=9;

// void sum (){
// int a=2, b=3;
// std::cout<<a+b;
// }

// int main (){
// int glo=5;
// bool yes=true;
// std::cout<< glo  <<  yes;
// sum();
//    return 0;
// }
//================================================================
//Reference variable
// int main()
// {
// int a=7;
// int & b = a;        //variable b starts pointing a
// std::cout<<a <<endl;
// std::cout<<b;
//    return 0;
// }
//=================================================================
// TYPE CASTING
// int main()
// {
//    int a = 45;
//    float b= 45.87;
//    cout<<(float)a<<endl;
//    cout<<int (b);
//    return 0;
// }
//=================================================================
// int main()
// {
//    int a,b,c;
//    c=(a+b);
//    cout<< "give me the first integer";
//    cin>> a;
//    cout<< "give me the second integer";
//    cin>>b;
//    cout<< "the sum is" <<c;

//    return 0;
// }
//==================================break and continue==========================
// # include <iostream>
// using namespace std; 

// int main (){
//    for (int i=0; i<=11; i++){
//       if(i==6){
//          break;
//       }
//       cout<<i;
//    }
//    return 0;
// }
//=================================Pointer========================
// pointer is a data type (variable) that holds the address of another data type (variable)
//& ---> (address of) operator
//*---->value at
// # include <iostream>
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
//    int arr [] = {20,21,22,23};
//    for(int i=0; i<=3; i++){
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
//    cout<< sizeof emp1 <<endl;
//    cout<< sizeof emp2;
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

// # include <iostream>
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
//========================================================
// # include <iostream>
// using namespace std; 
// # include <string.h>
// int main (){
// char collection []= "chitiz";
// char collection1 []= "panday";
// int r=strlen(collection);
// cout<<r;
// cout<<strupr(collection) <<endl;
// cout<<strcat(collection, collection1)<<endl;
// cout<<strrev(collection);

//    return 0;
// }
//==================================================FILE HANDELING============
// The header file for file handeling is # include <fstream>
//to create and write we use ofstream, to read from the file we use ifstream.
// # include <iostream>
// # include <fstream>
// using namespace std; 

// int main (){
//    ofstream newfile ("c:\\Users\\pandc\\OneDrive\\Desktop\\cpp.txt");
//    cout<<"file created";
//    newfile<<"file handling testing content";
//    newfile.close();
//    return 0;
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
//CLASS is a user defined data type. it has its own data members (variables) and member function which can be used by creating
//an instance of the class. class is just a logical entity that does not have no memory which can also be called a template, but 
//memory is created as soon as it gets instantiated, ie- when its object is created
// by default the access specifier of a class is private
// object is an instance of a class that has state (data member/variables) and behavior (member functions)
 
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
//     string a []= {"chitiz ", "panday ", "gyani","cha"};
//     for (int i = 0; i < 4; i++)
//     {
//       cout<<a[i];
//     }
   
   
//    return 0;
// }
//=======================================INHERITENCE==============================
# include <iostream>
//using namespace std; 
class universe{
   public:
void people(){
std::cout<<"people are greedy";
}
void animals(){
std::cout<<"animals are innocent!!";
}
};

class earth : public universe{
   public:
   void resources(){
   std::cout<<"earth is rich in resources";
   }
};
int main (){
   earth ear;
   ear.people();
   ear.resources();
   return 0;
}