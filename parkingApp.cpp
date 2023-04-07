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


# include <iostream>
using namespace std; 

class math{
private:
int a,b,c;
public:
void add(int x, int y){
a=x;
b=y;
cout<<"the sum of the two numbers is:: "<<(x+y);
};


};
int main (){
   math m;
   m.add(2,3);
   return 0;
}