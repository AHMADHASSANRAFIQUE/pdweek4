#include<iostream>
using namespace std;
void boardgame(float yourposition,float friendp);
main(){
	int yourposition,friendp;
	cout<<"Enter your position: ";
	cin>> yourposition;
	cout<<"Enter your friend's position: ";
	cin>>friendp;
	boardgame(yourposition,friendp);
}
void boardgame(float yourposition,float friendp){
	if (yourposition+6>friendp){
		cout<<"true";}
	if (yourposition+6<=friendp){
		cout<<"false";
	}
	
}
