#include<iostream>
using namespace std;
void tandf(string truefalse);
main(){
	string truefalse;
	cout<<"Enter 'true' or 'false': ";
	cin>> truefalse;
	tandf(truefalse);
}
void tandf(string truefalse){
	if (truefalse=="false"){
		cout<<"true";}
	if (truefalse=="true"){
		cout<<"false";
	}
	
}
