#include <iostream>
#include <vector>
using namespace std;

char choice_fun();
void display_menu();
void display_list(const vector <int> vector1);
void add_num(vector<int> &vector1);
void mean(const vector<int> vector1);
void smallest(const vector<int> vector1);
void largest(const vector<int> vector1);
//void switch_loop(vector<int> vector1);

int main() {
vector<int>vector1;
 char choice;
   display_menu();
   do{
       cout<<"enter your choice : ";
        choice=choice_fun();
        
        if (choice == 'P') {
			display_list(vector1);
		}
		else if (choice == 'A') {
			add_num(vector1);
		}
		else if (choice == 'M') {
			mean(vector1);
		}
		else if (choice == 'S') {
			smallest(vector1);
		}
		else if (choice == 'L') {
			largest(vector1);
		}
		else if (choice == 'Q') cout << "\nGoodbye";
		else cout << "\nIllegal choice ,Try again";
		cout << "\n---------------------------------------\n";
   }while(choice != 'Q');

  return 0; }
  
  void display_menu(){
        cout<<"P- Print numbers\nA- Add a number\nM- Display the mean of numbers\nS- Display the smallest number\nL- Display the largest number\nQ- Quit";

  }
  char choice(){
      char choice;
      cin>>choice;
      return toupper(choice) ;
      
  }
void display_list(const vector <int> vector1){
    if(vector1.size()==0)
             cout<<"\n[] - The list is empty "; 
    else 
        cout << "\n[";
		for (int i : vector1) 
	    cout << i << " ";
		cout << "]"; 
}
void add_num(vector<int> &vector1){
    int add_num;
    cout<<"Enter number to list :  ";
    cin>>add_num;
    cout<<endl<<add_num<<" added";
    vector1.push_back(add_num);
}
void mean(const vector<int> vector1){
    
    if(vector1.size()==0)
           cout<<"Unable to calculate the mean - no data";
         else {
            double mean=0;
           for(int i : vector1)
            mean+=(i/vector1.size());
            cout<<"\nthe mean is : "<<mean;
         }
}
void smallest(const vector<int> vector1){
     if (vector1.size()==0)
             cout<<"\n[] - The list is empty "; 
          else {
				int minimum = vector1.at(0);
				for (int i : vector1) 
				  if (i < minimum) 
				   minimum = i;
				cout << "\nThe smallest value is: " << minimum;}
}
void largest(const vector<int> vector1){
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
