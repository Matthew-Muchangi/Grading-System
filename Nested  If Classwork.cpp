#include <iostream>
using namespace std;

int main(){
string name;
int marks;	
cout<<"Please enter the Name of the Student\n";
cin>>name;	
cout<<"Input Student's Marks\n";
cin>>marks;

if (marks>=70){
cout<<name;
cout<<"'s Grade is a A";
}
else if (marks>=60){
cout<<name;	
cout<<"'s Grade is a B";
}
else if(marks>=50){
cout<<name;	
cout<<"'s Grade is a C";
}
else if(marks>=40){
cout<<name;	
cout<<"'s Grade is a D";
}
else if(marks<40){
	cout<<name;
cout<<"'s Grade is a F";	
}

return 0;
}



