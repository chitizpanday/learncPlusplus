# include <iostream>
# include <windows.h>
# include <string.h>
using namespace std; 
string username, password, username1, password1;
int main (){
   cout<<"\n \t \t Employee Management System \n";
   cout<<"\n \t \t \tSign up Page\n";
   cout<< "Enter User ID: \t";
   cin>>username;
   cout<<"Enter Password: ";
   cin>>password;
   cout<<"Your account is being created, please wait";
   for (int i = 0; i < 6; i++)
   {
      cout<<".";
      Sleep(1000); //the header file # include <windows.h> is required for this function.
   }
   cout<<"\nCongratulations!! Your ID is Successfully Created";
   system("cls");
   cout<<"\n \t \t Employee Management System \n";
  cout<<"\n \t \t \t login Page\n";
  cout<< "Enter User ID: \t";
   cin>>username1;
   cout<<"Enter Password: ";
   cin>>password1;
   if (username==username1 && password==password1){
      system("cls");
      while(1){
         cout<<"Press 1 to enter data" <<endl;
         cout<<"Press 2 to show data" <<endl;
         cout<<"Press 3 to search data" <<endl;
         cout<<"Press 4 to update data" <<endl;
         cout<<"Press 5 to delete data" <<endl;
         cout<<"Press 6 to logout" <<endl;
         cout<<"Press 7 to Exit \n" <<endl;
         cin.ignore();
      }
   }
   else if (username != username1){
      cout<< "invalied username";
   }
   else if (password!=password1){
      cout<<"invalied password!!";
   }
   {
      /* code */
   }
   
   return 0;
}