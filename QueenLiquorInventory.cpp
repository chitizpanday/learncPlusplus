
# include <iostream>
# include <string.h>
//include queenLiquorInventory.hpp



class queenLiquorInventory{
   string productName = "mileHigh";
   int productNumber = 5000;
   int purchasePrice;
   int sellingPrice;
   public:
   void display();
   void dataInput();
   void dataOutput();
};

void queenLiquorInventory :: display(){
   std::cout<< "===================================================\n";
   std::cout<< "     QUEEN LIQUOR INVENTORY MANAGEMENT SYSTEM\n";
   std::cout<< "===================================================\n\n";
   std::cout<<productName;

}

void queenLiquorInventory :: dataInput(){
   for(int i=1; i<500; i++){
      std::cout<< "PLEASE INTER THE PRODUCT OF INTEREST:  ";
      getline(std::cin, productName);
      
   }
   
   
}

void queenLiquorInventory :: dataOutput(){
   
}

int main(){
   queenLiquorInventory object;
   object.display();
   object.dataInput();
   return 0;
}