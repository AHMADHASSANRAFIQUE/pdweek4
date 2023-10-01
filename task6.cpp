#include<iostream>
using namespace std;
void handmin(float hour,float min);
main(){
	float hour,min;
	cout<<"Enter the number of hours: ";
	cin>> hour;
	cout<<"Enter the number of minutes: ";
	cin>>min;
	handmin(hour,min);
}
void handmin(float hour,float min){
	if (hour*60>min){
		cout<<hour;}
	if (min>hour*60){
		cout<<min;
	}
	
}
