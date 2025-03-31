//Lab7-4.cpp - displays the average electric bill
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double bill=0.0;
	int month=0;
	double totalBills=0.0;
	double averageBill=0.0;

	cout<<"Enter bill for month one: $ ";
	cin>>bill;

	while (bill>=0.0)
	{
		totalBills+=bill;
		month+=1;
		cout<<"Enter bill for month "<<month<<": $ ";
		cin>>bill;
	}

	if (month>0)
	{	averageBill=totalBills/month;
		cout<<fixed<<setprecision(2);
		cout<<"Average bill for "<<month<<" months is $"<<averageBill<<endl;
	}
	else
		cout<<"No bills entered"<<endl;

	return 0;
}	