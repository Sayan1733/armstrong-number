#include <iostram>
#include <stdio.h>
#include <conio.h>
#include <cmath>

using namespace std;

//Armstrong Number

int main() 
{
	int n,sum,original,power,i=0,m;					//initialize variable
	cout<<"Enter the size of the number:";
	cin>>power;
	cout<<"Enter the number:";
	cin>>n;
	
	original = n;						//initialize original to n;
	
	while(n>0){							//To count the size of number of elements of given number
		n=n/10;
		i++;
	}
	
	if(i==power){
	while(n>0)
	{
		int lastdigit=n%10;							//taking remainder in lastdigit
		sum= sum + pow(lastdigit,power);				//storing power of lastdigit in sum
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
 }
 
 	else
	 {
	 	system("Color 04");
 		printf("You have entered wrong size of input!");
	 }
	getch();
	return 0;
}
