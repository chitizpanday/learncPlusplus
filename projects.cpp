// #include<iostream>
// #include<iomanip>
// int choice;
// float deposit;
// float withdraw;
// float balance=100.444;

//    void display(){
//    std::cout<<"**********************\n";
//    std::cout<<"Enter Your Choice\n";
//    std::cout<<"**********************\n";
//    std::cout<<"Press 1 to Show Balance\n";
//    std::cout<<"Press 2 to Deposit Money\n";
//    std::cout<<"Press 3 to Withdraw Money\n";
//    std::cout<<"Press 4 to Exit \n";
//    //std::cin.ignore();
//    std::cin>>choice;
//    }
//    float showBalance(){
//       std::cout<<"Your balance is $ "<<balance<<"\n";
//    }

//    float depositMoney(){
//       std::cout<<"How much would you like to deposit $ ";
//       std::cin>>deposit;
//       std::cout<<"You deposited $ "<<deposit<<"\n";
//       balance+=deposit;
//       std::cout<<"Your new balance is $ " <<std::setprecision(2)<<std::fixed<<balance<<"\n";
//    }
//    int main(){
//      while(true){ display();
   
//    switch (choice)
//    {
//     case 1:
//       std::cout<<showBalance();
//       break;
//    case 2:
//       std::cout<<depositMoney();
//       break;
//    case 3:
//       std::cout<<"How much would you like to withdraw $ ";
//       std::cin>>withdraw;
//       if(withdraw>balance){
//          std::cout<<"You do not have sufficient amount \n";
//       }
//       else{std::cout<<"You withdrew $ " <<withdraw <<"\n" <<"Your new balance is $ "<<std::setprecision(2)<<std::fixed<<balance-withdraw <<"\n";}
//       break;
//    case 4:
//       std::cout<<"Thanks for being a valued customer";
//       break;
   
//    default:std::cout<<"That is not a valied entry";
//       break;
//    }
//      }
//    return 0;
// }
//================================ANOTHER WAY OF MAKING BANK APP======================================
#include<iostream>
#include<windows.h>
int custinput;
char fullName[20];
char address [50];
int phoneNumber;
void display(){
   std::cout<<"********************** WELCOME TO WELLS FARFO ********************** \n";
   std::cout<<"****************************************************************** \n";
   std::cout<<"Please press 1 to open an new account \n";
   std::cout<<"Please press 2 to check your balance\n";
   std::cout<<"Please press 3 to make a deposit\n";
   std::cout<<"Please press 4 to make a withdraw\n";
   std::cout<<"Please press 5 to exit\n";
   //std::cin.ignore();
  std::cin>>custinput;
  if(custinput>5){
   std::cout<<"Thats not a valied entry!!\n";
  }
}

class bankApp{
   public:
   void openAccount();
   void checkBalance();
   void makeDeposit();
   void makeWithdraw();
   void exit();
};

void bankApp :: openAccount(){
   std::string fullName;
   if(custinput==1){
std::cout<<"please enter your full name: ";
std::cin.ignore();
std::getline(std::cin, fullName);
while(fullName.empty()){
   std::cout<<"Your name can not be empty \n";
   std::getline(std::cin, fullName);
   }
std::cout<<"please enter your address: ";
std::cin.ignore();
std::cin.getline(address,50);
std::cout<<"please enter your phone number: ";
std::cin.ignore();
std::cin>>phoneNumber;
std::cout<<"Please wait, your account is being created ";
for(int i=0; i<=5; i++){
   std::cout<<'.';
   Sleep(1000);         //#include<windows.h> header is required to use this function
}
std::cout<<"\nCongratulations "<<fullName<<" Your account has been successfully created \n";
   }
}

void bankApp :: exit(){
if (custinput==5)
{
   std::cout<<"Thank You For Being a Valued Customer \n\n";
}
}
int main(){
   bankApp object;
   while(true){
   display();
   object.exit();
   object.openAccount();
   }
   return 0;
}