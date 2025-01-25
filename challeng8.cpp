#include <iostream>
#include<vector>
using namespace std;
int main() {
const int dollar_convert=100 ,quarter_convert=25 ,dime_convert=10,neckel_convert=5;
int dollars,quarters,dimes,neckels,pennies,cent,rest;

cout<<"Enter the amount in cents: ";
cin>>cent;

dollars = cent/dollar_convert;
rest = cent - dollars*dollar_convert;
quarters = rest/quarter_convert;
rest = rest - quarters*quarter_convert;
dimes =rest/dime_convert;
rest =rest- dimes*dime_convert;
neckels= rest/neckel_convert ;
rest=rest - neckels*neckel_convert;
pennies=rest;
cout<<"dollars : "<<dollars;
cout<<"\nquarters : "<<quarters;
cout<<"\ndimes : "<<dimes;
cout<<"\nneckels : "<<neckels;
cout<<"\npennies : "<<pennies;


 return 0;
}
