/*
gasTotal.cpp
Jun 14, 2017
shivamsharma612
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double gascost, mpg, distance, gallons, totalcost;

	//prompt user to enter gascost
	cout<<"Enter gas cost per gallon:"<<endl;
	cin>>gascost;

	//prompt user to enter miles per gallon
	cout<<"Enter the car's miles per gallon:";
	cin>>mpg;

	//prompt user to enter distance to be covered
	cout<<"Enter the distance of the journey:"<<endl;
	cin>>distance;

	//now calculating the total gas cost
	totalcost = distance/mpg * gascost;

	cout<<"The total cost of the gas for the trip:"<<fixed<<setprecision(4)<<totalcost<<endl;

return 0;
}
