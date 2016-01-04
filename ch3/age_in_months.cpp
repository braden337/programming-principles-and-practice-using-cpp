#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;
inline void keepOpen() { char ch; cin>>ch; }

int main() {
  
  string name = "x";
  double age = 0;
  cout<<"Enter your name and age:\n";
  cin>>name>>age;
  age*=12;
  cout<<"Hello "<<name<<" (age: "<<age<<" months)\n";

}