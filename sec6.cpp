#include <iostream>
using namespace std;
int main() {
   double small_room, larg_room,small_price=25,larg_price=35,cost,tax ;
   cout<<"hello welcome to Frank's Carpet Cleaning Service.\n"<< "How many small rooms would you like clean? ";
   cin>>small_room;
   cout<<"How many larg rooms would you like clean? ";
   cin>>larg_room;
   cost=(small_room*small_price) +(larg_room*larg_price);
   tax=cost*6/100;
   cout<<"Number of small room is : "<<small_room<<"\n Number of larg room is : "<<larg_room<<"\n the price per small rooms is : "<<small_price<<"$"<<"\n the price per small rooms is : "<<larg_price<<"$"<<"\n cost : "<<cost<<"$"<<"\n tax : "<<tax<<"$";
   cout<<"\n=========================================================\n"<<"Total estimate : "<<cost+tax<<"$\n"<<"this estimate valide for 30 days ";

    return 0;
}
