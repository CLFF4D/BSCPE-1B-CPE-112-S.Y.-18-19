#include<iostream>
using namespace std;

class ctampos
{
	public:
		long x,y,z;
		void twovariables();
		void threevariables();
};

int main()
{
	ctampos call;
	call.twovariables();
	call.threevariables();
	return 0;
}

void ctampos::twovariables()
{
	// Swapping of Two Variables
	cout<<"Swapping of TWO VARIABLES"<<endl;
	cout<<"Input X: ";
	cin>>x;
	cout<<"Input Y: ";
	cin>>y;
	
	y=x+y;
	x=y-x;
	y=y-x;
	
	cout<<endl<<"Swapped 2 VARIABLES : "<<endl<<"X = "<<x<<endl;
	cout<<"Y = "<<y<<endl;
}

void ctampos::threevariables()
{
	// Swapping of Three Variables
	cout<<endl<<"Swapping of 3 VARIABLES"<<endl;
	cout<<"Input X: ";
	cin>>x;
	cout<<"Input Y: ";
	cin>>y;
	cout<<"Input Z: ";
	cin>>z;
	
	x=x+y;
	y=x-y;
	x=x-y; 
	z=z+x;
	x=z-x;
	z=z-x;
	
	cout<<endl<<"Swapped 3 VARIABLES: "<<endl<<"X = "<<x<<endl;
	cout<<"Y = "<<y<<endl;
	cout<<"Z = "<<z<<endl;
}
