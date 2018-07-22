#include<iostream.h>
#include<conio.h>

void main()
{       clrscr();
	unsigned long int i,n,nextn,k,len;
	cout<<"\n Enter Desired number of fibonnic length : ";
	cin>>len;
	i=0;
	n=1;
	nextn=1;
	for(k=0;k<len;k++)
	{       cout<<i<<"  ";
		i=n;
		n=nextn;
		nextn=i+n;
	}
	getch();
}