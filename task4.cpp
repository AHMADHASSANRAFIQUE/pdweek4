#include<iostream>
using namespace std;
void speedlimit(float speed);
main(){
	float speed;
	cout<<"Speed: ";
	cin>> speed;
	speedlimit(speed);
}
void speedlimit(float speed){
	if (speed<=100){
		cout<<"Perfect! You're going good.";}
	if (speed>100){
		cout<<"Halt... YOU WILL BE CHALLENGED!!!";
	}
	
}
