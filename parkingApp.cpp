// # include <iostream>
// using namespace std; 

// int main (){
//    int count = 0;
//    int amount =0;
//    int Rickshaw=0;
//    int u_input;
//    while(true){
//    cout<< "press 1 to enter Rickshaws \n";
//    cout<< "press 2 to enter cars \n";
//    cout<< "press 3 to enter buses \n";
//    cout<< "press 4 to show records \n";
//    cout<< "press 5 to delete all records \n";
//     cin >> u_input;
   
//       if (u_input ==1)
//    {
//       count = count+1; amount = amount+100; Rickshaw =Rickshaw+1;
//    }
//    else if (u_input ==2)
//    {
//      count = count+1; amount = amount+200;
//    }
//    else if (u_input ==3)
//    {
//       count = count+1; amount = amount+300;
//    }
//    else if (u_input ==4)
//    {
//       cout<<"     Record Detail \n";
//       cout<<"total numberof Rickshaw = " <<Rickshaw;
//       cout<<"total number of vehicles parked = " <<count<<endl;
//       cout<<"total amount = " <<amount <<endl;
//    }
//    else if (u_input ==5)
//    {
//       cout  <<"      Records deleted \n"; 
//       amount=0;
//       count=0;
//    }

//    else{cout<<"invalied entry";}
//    }
//    return 0;
// }
//=====================================

// # include <iostream>
// using namespace std; 

// class math{
// private:
// int a,b,c;
// public:
// void add(int x, int y){
// a=x;
// b=y;
// cout<<"the sum of the two numbers is:: "<<(x+y);
// };


// };
// int main (){
//    math m;
//    m.add(2,3);
//    return 0;
// }
//======================================

#include<iostream>

displayScreen(){
   char empInput;
   int totalParkingSpace=50;
   int bus, car, count;
    bus=0;
    car=0;
    count=0;
std::cout<<"************** PARKING LOT APP **************\n \n";
std::cout<<"Please press B to inter bus \n";
std::cout<<"Please press C to inter car\n";
std::cout<<"Please press R to show Records\n\n";
std::cout<<"*********************************************\n";
std::cin>>empInput;
if(empInput=='b'){
   bus++;
   count=count+1;
std::cout<<"the total number of bus parked is: "<<bus<<std::endl;
std::cout<<"the total number of vehicles parked is: "<<count<<std::endl;
std::cout<<"the total number of free parking space available is: "<<totalParkingSpace-(bus+car)<<std::endl;

}
else if(empInput=='c'){
   car++;
   count=count+1;
std::cout<<"the total number of car parked is: "<<car<<std::endl;
std::cout<<"the total number of vehicles parked is: "<<count<<std::endl;
std::cout<<"the total number of free parking space available is: "<<totalParkingSpace-(bus+car)<<std::endl;
}
}


   

int main(){
      while(true){displayScreen();}
   
   return 0;
}