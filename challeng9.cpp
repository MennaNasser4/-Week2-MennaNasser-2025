#include <iostream>
#include <vector>
using namespace std;
int main() {
vector<int>vector1;
    char choice;
 
   cout<<"P- Print numbers\nA- Add a number\nM- Display the mean of numbers\nS- Display the smallest number\nL- Display the largest number\nQ- Quit";
   
do{cout<<"enter your choice : ";
       cin>>choice;
      
    if (choice=='P' ||choice=='p'){
            if(vector1.size()==0)
             cout<<"\n[] - The list is empty "; 
            else 
				cout << "\n[";
				for (int i : vector1) 
				cout << i << " ";
				cout << "]"; }
    else if (choice == 'A' || choice == 'a') {
    int add_num;
    cout<<"Enter number to list :  ";
    cin>>add_num;
    cout<<endl<<add_num<<" added";
    vector1.push_back(add_num);
    }
    else if(choice=='M' ||choice=='m'){
         if(vector1.size()==0)
           cout<<"Unable to calculate the mean - no data";
         else {
            double mean=0;
           for(int i : vector1)
            mean+=(i/vector1.size());
            cout<<"\nthe mean is : "<<mean;
         }
}
    else if(choice=='S' ||choice=='s'){
          if (vector1.size()==0)
             cout<<"\n[] - The list is empty "; 
          else {
				int minimum = vector1.at(0);
				for (int i : vector1) 
				  if (i < minimum) 
				   minimum = i;
				cout << "\nThe smallest value is: " << minimum;}
}
else if (choice == 'L' || choice == 'l') {
			if (vector1.size() == 0) 
			cout << "\n[] - The list is empty ";
			else {
				int max = vector1.at(0);
				for (int i : vector1) 
				 if (i > max)
				  max = i;
				cout << "\nThe largest value is : " << max<<endl;
			}
		}
		else if (choice == 'Q' || choice == 'q') 
		cout << "Goodbye "<<endl;
		else cout << "\nIllegal choice , Try again";
		cout << "\n--------------------------------------------\n";
	} while (choice != 'Q' || choice != 'q');


  return 0; }
