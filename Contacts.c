#include<stdio.h>
#include<stdlib.h>
//able to stop anytime(use break)
//csv
//if possible , vcf too(or use csv to write , then print (asking confirmation) , covert to vcf)
//ask no of repetitions and use for loop
int info()
{
	printf("1.This is a Contacts program\n");
	printf("2.This program can store , count , read contacts in csv file and them export all as vcf\n");
	printf("3.Type the option number to confirm your answer\n");
	printf("4.Only enter option number\n");
	printf("5.Never enter a alphabet unless asked to do so\n");
}
int menu()
{
	static int once = 0;
	if (once==0)
	{
	printf("Hello fellow user , you have started the Contacts Program !\n");
	once++;
	}
	printf("\n\tMenu\n\n");
	printf("Use the resources below and type 4 to start(Enter number to choose the option)\n");
	printf("1.Disclaimer\n");
	printf("2.Info\n");
	printf("3.Contact Developer\n");
	printf("4.Start\n");
	printf("5.Exit\n");
	printf(">>");
	int ch;
	scanf (" %d",&ch);
	switch (ch)
	{
	case 1:
	printf("\n\tDisclaimer\n\n");
		printf("-->This program works the best when\n tge user follows instructions\n-->Check Info for instructions")
		back();
		menu();
		break;
	
	case 2:
	printf("\n\tInfo\n\n");
	info();
	back();
		menu();
		break;
	case 3:
	printf("\n\tContact Developer\n\n");
	printf("For any querries or reporting bugs , contact TBA58584 via github or twitter\n");
	printf("www.github.com/TBA5854\n");
	printf("www.twitter.com/TBA5854\n");
	back();
	menu();
	break;
	case 4:
	start();
	break;
	case 5:
	end();
	default:
	printf("Invalid input , program is exiting !!!");
	exit(0);
	}
}
int start()
{
	printf("\n\tContacts\n\n");
	printf("1.Read Contacts\n");
	printf("2.Append Contacts\n");
	printf("3.Count number of contacts saved\n");
	printf("4.Export Contacts\n");
	printf("5.Exit\n");
	printf(">>");
	int ch;
	scanf (" %d",&ch);
}
int read()
{
	
}
int write()
{
	
}
int count()
{
	
}
int export_vcf()
{
	
}
int main()
{
	
}