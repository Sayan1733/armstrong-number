#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

//Armstrong Number

int main() 
{
	int n,sum,original;					//initialize variable
	
	cout<<"Enter the number:";
	cin>>n;
	
	original = n;						//initialize original to n;
	
	while(n>0)
	{
		int lastdigit=n%10;							//taking remainder in lastdigit
		sum= sum + pow(lastdigit,3);				//storing cube of lastdigit in sum
		n=n/10;										//make n/10 store in n for continue of while loop
		
	}
	
	if(sum==original)												//checking sum and number is same or not
	{
		cout<<"The number is Armstrong Number.";
	}
	else
	{
		cout<<"The number is not Armstrong Number.";
	}
	
	getch();
	return 0;
}
