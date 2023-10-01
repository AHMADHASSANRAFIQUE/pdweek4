#include<iostream>
using namespace std;
void country(string name,float price);
main(){
	string name; 
	float price,dprice;
	cout<<"Enter the country's name: ";
	cin>> name;
	cout<<"Enter the ticket price in dollars: $";
	cin>> price;
	country(name,price);
}
void country(string name,float price){
	if (name=="Pakistan"){
		float discount;
		discount = 0.05*price;
		discount = price - discount;
		cout<<"Final ticket price after discount: $"<<discount;}
	if (name=="Ireland"){
		float discount;
		discount = 0.1*price;
		discount = price - discount;
		cout<<"Final ticket price after discount: $"<<discount;}
	if (name=="India"){
		float discount;
		discount = 0.2*price;
		discount = price - discount;
		cout<<"Final ticket price after discount: $"<<discount;}
	if (name=="England"){
		float discount;
		discount = 0.3*price;
		discount = price - discount;
		cout<<"Final ticket price after discount: $"<<discount;}
	if (name=="Canada"){
		float discount;
		discount = 0.45*price;
		discount = price - discount;
		cout<<"Final ticket price after discount: $"<<discount;}}
