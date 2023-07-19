#include<iostream>
#include<ctime>

class functions{
public:
void display();
void you();
void computer();
void result();
};

char cinput;
// char cpuinput;
// int compinput;
void functions::display(){
   std::cout<<"*************************\n";
   std::cout<<"Rock Paper Scissors Shoot\n";
   std::cout<<"*************************\n";
   std::cout<<"Please Press R for Rock\n";
   std::cout<<"Please Press P for Paper\n";
   std::cout<<"Please Press S for Scissors\n";
   std::cin>>cinput;
}

void functions::you(){
   if(cinput=='R'){
      std::cout<<"You chose Rock\n";
   }
   else if(cinput=='P'){
      std::cout<<"You chose Paper\n";
   }
   else{std::cout<<"You chose Scissors\n";}
}
void functions::computer(){
srand(time(NULL)); 
char characters[] = {'R', 'P', 's'};
int compinput = rand()%3;
char cpuinput = characters[compinput];
if(cpuinput=='R'){std::cout<<"the computer chose Rock\n";}
else if(cpuinput=='P'){std::cout<<"the computer chose Paper\n";}
else{std::cout<<"the computer chose Scissors\n";}
 
if(cinput==cpuinput){
std::cout<<"Its a tie!!!";
}
 else if(cinput=='R'){
   if(cpuinput=='P'){std::cout<<"the Computer Won!!!";}
   else{std::cout<<"You won!!";}
}
else if(cinput=='P'){
   if(cpuinput=='R'){std::cout<<"You Won!!!";}
   else{std::cout<<"The Computer won!!";}
 }
}

 void functions::result(){
   std::cout<<"the result of cinput is:"<<cinput <<" and the result of cpuinput is: "<<cpuinput;
// if(cinput==cpuinput){
// std::cout<<"Its a tie!!!";
// }
//  else if(cinput=='R'){
//    if(cpuinput=='P'){std::cout<<"the Computer Won!!!";}
//    else{std::cout<<"You won!!";}
// }
// else if(cinput=='P'){
//    if(cpuinput=='R'){std::cout<<"You Won!!!";}
//    else{std::cout<<"The Computer won!!";}
//  }
 }
// else if(cinput=='S'){
//    if(cpuinput=='P'){std::cout<<"You Won!!!";}
//    else if(cpuinput=='R'){std::cout<<"The Computer won!!";}
// }
// }
int main(){
   functions object;
do{object.display();
}
while(cinput!='R'&& cinput!='P'&& cinput!='S');

   object.you();
   object.computer();
   object.result();
   return 0;
}