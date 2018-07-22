#include<iostream.h>
#include<conio.h>
void main()
{       clrscr();
	int i,j;
	cout<<"\n Enter no1 to swap";
	cin>>i;
	cout<<"\n Enter no2 to swap:";
	cin>>j;
	i=i+j;
	j=i-j;
	i=i-j;
	cout<<i<<" "<<j;
	getch();
}