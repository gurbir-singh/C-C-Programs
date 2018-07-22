#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int p,i,count;
	cout<<"\n Enter the number:";
	cin>>i;
	for (p=2;p<=i/2;p++)
	{
		if(i%p==0)
		{
			count=1;
			break;
		}
	}
	if(count==0)
	{
		cout<<"\n The no entered "<<i<<" is a prime no...!!";
	}
	else
	{
	cout<<"\n Please enter the prime number..!!";
	}

	getch();
}
