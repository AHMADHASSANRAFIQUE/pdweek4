#include<iostream>
using namespace std;
void flowers(float Red,float White,float Tulips);
main(){
	float Red,White,Tulips;
	cout<<"Red Rose: ";
	cin>> Red;
	cout<<"White Rose: ";
	cin>> White;
	cout<<"Tulips: ";
	cin>>Tulips;
	flowers(Red,White,Tulips);
}
void flowers(float Red,float White,float Tulips){
	float price;
	price = Red*2+White*4.10+Tulips*2.5;
	cout<<"Original Price: $"<<price<<endl;
	if (price>200){
		float discount;
		discount = price * 0.2;
		discount = price-discount;
		cout<<"Price after Discount: $"<<discount;}
	if (price<=200){
		cout<<"No discount applied.";
	}
	
}
