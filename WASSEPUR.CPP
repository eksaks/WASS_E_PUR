#include<iostream.h>
#include<fstream.h>
#include<conio.h>
using namespace std;

void student();

void server();

void main()
{
	int a,b,c,d,e,f=0;
	clrscr();
	cout<<"\t\t\tIIT ROORKEE METALLURGY FIRST YEAR\n";
	while (f==0)
	{
		cout<<" If you are a student please enter - 1 \n If you are a faculty please enter - 2 \n";
		cin>>a;
		if (a!=1&&a!=2)
			cout<<"\n Please enter a valid bullet\n";
		else
			break;
	}
	if (a==1)
		student();
	else
		server();
	cout<<"\n\n Press any number to get out of the program";
	cin>>b;
}

void student()
{
	clrscr();
	int a;
	char b;
	cout<<"\t\t\tHELLO METALLURGY STUDENT :) \n";
	cout<<" Here we have your timetable for this semester\n Type the number corresponding to the day you want to look for\n";
	cout<<" Monday - 1\n Tuesday - 2\n Wednesday - 3\n Thursday - 4\n Friday - 5\n If you want to look for due assignment - 6\n";
	do
	{
	cin>>a;
	if (a==1)
	{
		cout<<" MONDAY \n 11:05-12:00 \n TMTN-102(R1) 12:05-1:00 \n TMTN-102(R2) \n 2:00-2:55 LCEN-105 \n 3:00-3:55 \n LMAN-001 \n 4:00-4:55 \n LMTN-101";
		break;
	}
	else if (a==2)
	{
		cout<<" TUESDATY \n 11:05-12:00 \n TMAN-001(R1&R2) 12:05-1:00 \n TMAN-001(R3&R4) \n 2:00-2:55 LCEN-105 \n 3:00-3:55 \n LMTN-102 \n 4:00-4:55 \n LPHN-007 \n LHSN-001A";
		break;
	}
	else if (a==3)
	{
		cout<<" WEDNESDAY \n 2:00-2:55 LMTN-102 \n 3:00-3:55 \n LMAN-001 ";
		break;
	}
	else if (a==4)
	{
		cout<<" THURSDAY \n 11:05-12:00 \n THSN-002(R1&R3) 12:05-1:00 \n THSN-002(R2&R4) \n 2:00-2:55 LCEN-105 \n 3:00-3:55 \n LPHN-007 \n 5:00-5:55 \n LHSN-002";
		break;
	}
	else if (a==5)
	{
		cout<<" FRIDAY \n 11:05-12:00 \n TMTN-102(R3) 12:05-1:00 \n TMTN-102(R4) \n 2:00-2:55 LMTN-102 \n 3:00-3:55 \n LMAN-001 \n 4:00-4:55 \n LPHN-107 \n LMTN-101";
		break;
	}
	else if (a==6)
	{
		cout<<" Pending assignment are \n MTN-102 Assignment-2 \n Due date-10/01/2021";
		break;
	}
	else
	{
		cout<<" Please enter a valid number";
		continue;
	}
	}while(a==7);

}

void server()
{
	int a;
	clrscr();
	cout<<"\t\t\t   GREETING FACULTY MEMBER \n";
	cout<<" We are very happy to have you here \n For timetable press - 1 \n For any assignment update press - 2\n";
	do
	{
		cin>>a;
		if (a==1)
		{
			cout<<" Go to the code in the student function and change the relevant place in the timetable";
			break;
		}
		else if (a==2)
		{
			cout<<" In the code in student fuction go to a=6 and update the assignment";
			break;
		}
		else
		{
			cout<<" Enter a valid number";
			continue;
		}
	}while (a==3);
}
