#include<iostream>
using namespace std;
void tom(float holidays);
main(){
	float holidays;
	cout<<"Holidays: ";
	cin>> holidays;
	tom(holidays);
}
void tom(float holidays){
	int result,mins,hours,totalmins;
	mins = ((365-holidays)*63)+(holidays*127);
	mins = 30000-mins;
	
	hours = mins/60;
	totalmins = mins%60;
	
	if ((mins)>=0)
	{
		cout<<"Tom sleeps well"<<endl;
		cout<<hours<<" hours and "<<totalmins<<" minutes less for play";}
	if ((mins)<0)
	{
		hours = hours*(-1);
		totalmins = totalmins*(-1);	
		cout<<"Tom will run away"<<endl;
		cout<<hours<<" hours and "<<totalmins<<" minutes for play";
	}
	
}
