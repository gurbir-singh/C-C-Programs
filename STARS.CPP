#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int row,blue,col;
	cout<<endl<<"Enter no of rows:";
	cin>>blue;
	for(row=1; row<=blue; row++)
	{
			for(col=1; col<=row; col++)
			{
				cout<<" *";
			}
		cout<<"\n";
	}


   getch ();
}