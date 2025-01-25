#include <iostream>
#include<vector>
using namespace std;
int main() {
vector<int>vector_1;
vector<int>vector_2;
vector<vector<int>>vector_2d;

vector_1.push_back(10);
vector_1.push_back(20);
cout<<"vector_1 is : "<<vector_1.at(0)<<" "<<vector_1.at(1);
cout<<"\nthe size of vector_1 : "<<vector_1.size()<<endl;

vector_2.push_back(100);
vector_2.push_back(200);
cout<<"vector_2 is : "<<vector_2.at(0)<<" "<<vector_2.at(1);
cout<<"\nthe size of vector_2 : "<<vector_2.size()<<endl;

vector_2d.push_back(vector_1);
vector_2d.push_back(vector_2);
cout<<"vetor_2d is : \n"<<vector_2d.at(0).at(0)<<" "<<vector_2d.at(0).at(1)<<endl<<vector_2d.at(1).at(0)<<" "<<vector_2d.at(1).at(1)<<endl;
vector_1.at(0)=1000;

cout<<"vetor_2d is : #after change vector1 at(0) to 1000 \n"<<vector_2d.at(0).at(0)<<" "<<vector_2d.at(0).at(1)<<endl<<vector_2d.at(1).at(0)<<" "<<vector_2d.at(1).at(1)<<endl;

 cout<<"vector_1 is : "<<vector_1.at(0)<<" "<<vector_1.at(1);
cout<<"\nthe size of vector_1 : "<<vector_1.size()<<endl;

  return 0;
}
