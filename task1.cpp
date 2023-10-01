#include<iostream>
using namespace std;
void equalnum(float num1,float num2);
main(){
	float num1,num2;
	cout<<"Enter the first number: ";
	cin>> num1;
	cout<<"Enter the second number: ";
	cin>> num2;
	equalnum(num1,num2);
}
void equalnum(float num1,float num2){
	if (num1==num2){
		cout<<"true";}
	if (num1!=num2){
		cout<<"false";
	}
	
}
