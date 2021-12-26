#include <iostream>
#include <conio.h>

using namespace std;
int main()

{
	int a;
	int i = 0;
	cout<<"Enter a:"<<endl;
	cin>>a;
	
	long sum = 0;
	
	while (a >= i)
	sum += i++ ;
		
	cout<<"The sum Of The First "<<a<<" Integers Is "<<sum<<endl;
	
	getch();	 
}
