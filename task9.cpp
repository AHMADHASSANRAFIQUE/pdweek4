#include<iostream>
using namespace std;
void covid(int member,int roll);
main(){
	float member,roll;
	cout<<"Number of people in the household: ";
	cin>> member;
	cout<<"Number of rolls of TP: ";
	cin>> roll;
	covid(member,roll);
}
void covid(int member,int roll){
	int day;
	day = ((roll*500)/(member*57));
	if (day<14){
		cout<<"Your TP will only last "<<day<<" days, buy more!";}
	if (day>=14){
		cout<<"Your TP will last "<<day<<" days, no need to panic!";
	}
	
}
