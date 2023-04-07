# include <iostream>
using namespace std; 
int cinput;
int showMenu(){
    cout<< "Press 1 to open an account \n";
   cout<<"Press 2 to deposit money \n";
   cout<<"Press 3 to withdraw money \n";
   cout<<"Press 4 to check balance \n";
   cout<<"Press 5 to exit \n";
   cin>>cinput;
}
 
int balance =0;
char name [100], add [100], y;
class bankApp{
   public:
         void open_account();
         void deposit_money();
         void withdraw_money();
         void display_account();
};

void bankApp :: open_account(){
   if (cinput==1){
   cout<<"enter your full name: ";
   cin.ignore(); // to clear the buffer
   cin.getline(name,100); // this inbuilt function helps to get string

   cout<<"enter your address: ";
   cin.ignore();
   cin.getline(add, 100);

   cout<<"what type of account do you want to open savings (s) or current (c)?: ";
   cin>>y;

   cout<<" Welcome to Currency Bank, your account has been successfully created";
}
}
void bankApp :: deposit_money(){
   if (cinput==2){
   int deposit_amount;
   cout<< "enter the amount you want to deposit: $ ";
   cin>>deposit_amount;
   cout<<"you deposited: $ "<<deposit_amount <<endl;
   cout<<"your new balance is: $" <<deposit_amount + balance;
}
}

void bankApp :: withdraw_money(){
   float withdraw_amount;
   if (cinput==3){
cout<<"how much money would you like to withdraw? $ ";
cin>>withdraw_amount;
if(balance>withdraw_amount){
   balance=balance-withdraw_amount;
   cout<<"your new balance is $ " <<balance;
}
else{cout<<"you do not have sufficient funds in your account";}
}
}
int main (){
  showMenu();
  bankApp b;
  b.open_account();
  b.deposit_money();
  b.withdraw_money();
  if(cinput==5){exit(1);}
   return 0;
}
