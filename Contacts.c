#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//able to stop anytime(use break)
//csv
//if possible , vcf too(or use csv to write , then print (asking confirmation) , covert to vcf)
//ask no of repetitions and use for loop
//del? ask contact sno number and skip writing it ?
//Till done : read , write ,count,del in csv || info back menu done
//now : work on other stuff
//next : export vcf
int end()
{
		printf("\t\tThanks for Trying this program \n\n\t\t  A Program by TBA5854\n");
		exit(0);
}
int info()
{
	printf("1.This is a Contacts program\n");
	printf("2.This program can store , count , read contacts in csv file and them export all as vcf\n");
	printf("3.Type the option number to confirm your answer\n");
	printf("4.Only enter option number\n");
	printf("5.Never enter a alphabet unless asked to do so\n");
}
int back()
{
	printf("\nType \"back\" to go previous page\n>>");
	char st[5];
	char b[5]="back";
	scanf(" %s",st);
	if (strcmp(st,"back")==0)
	{
		printf("\n");
	}
	else
	{
		printf("Invalid input , program is exiting !!!");
		exit(0);
	}
	return 0;
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
	printf("Use the resources below and type 4 to start(Enter number to choose the option)\n\n");
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
	printf("-->This program works the best when\n the user follows instructions\n-->Check Info for instructions");
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
	printf("5.Delete a contact\n");
	printf("6.Go back to menu\n");
	printf("7.Exit\n");
	printf(">>");
	int ch;
	scanf (" %d",&ch);
	switch (ch)
	{
	case 1:
	printf("\n\tRead Contacts\n\n");
	read();
	printf("\nOperation Comleted\n");
	back();
	start();
	break;
	case 2:
	printf("\n\tAppend Contacts\n\n");
	write();
	printf("\nOperation Comleted\n");
	back();
	start();
	break;
	case 3:
	printf("\n\tCount Contacts\n\n");
    printf("Number of contacts are :%d",count());
	printf("\nOperation Comleted\n");
	back();
	start();
	break;
	case 4:
	printf("\n\tExport Contacts\n\n");
	export_vcf();
	printf("\nOperation Comleted\n");
	back();
	start();
	break;
	case 5:
	printf("\n\tDelete a Contact\n\n");
	del();
	printf("\nOperation Comleted\n");
	back();
	start();
	break;
	case 6:
	menu();
	break;
	case 7:
	end();
	default:
	printf("Invalid input , program is exiting !!!");
	exit(0);
	}
}
int read()
{
    FILE *j;
    j=fopen("contacts.csv","r");
    char buffer[1];
	while (fscanf(j,"%c",buffer)!=EOF)
	{
        if (strcmp(buffer,",")==0)
		{
			printf("\t");
		}
		else if (strcmp(buffer,"\n")==0)
		{
			printf("\n");
		}
		else
		{
			printf("%s",buffer);
		}
		
    }
    fclose(j);
	return 0;
}
int write()
{
	FILE *j;
    j=fopen("contacts.csv","a");
	printf("Enter number of contacts you wish to add\n>>");
	int range;
	scanf(" %d",&range);
	char name[50];
	long number;
	for (int i = 0; i < range; i++)
	{
		printf("Enter the contact name : ");
		scanf(" %s",name);
		printf("Enter contact phone number : ");
		scanf(" %ld",&number);
		fprintf(j,"%d",count()+i+1);
		fprintf(j,")");
		fprintf(j,",");
		fprintf(j,"%s",name);
		fprintf(j,",");
		fprintf(j,"%ld",number);
		fprintf(j,"\n");
	}
	fclose(j);
}
int count()
{
    FILE *j;
    j=fopen("contacts.csv","r");
    char buffer[1];
    int c=0;
    char b ='\n';
    while (fscanf(j,"%c",buffer)!=EOF)
    {
        if (*buffer==b)
        {
            c++;
        }
    }
    fclose(j);
	return c-1;
}
int del()
{
	read();
	printf("Enter the contact's sno to delete\n>>");
	int sno;
	scanf("%d",&sno);
	FILE *j;
    j=fopen("temp.csv","w");
	FILE *s;
    s=fopen("contacts.csv","r");
	FILE *t;
    t=fopen("temp1.csv","w");
    char buffer[1];
	int count=1;
    while (fscanf(s,"%c",buffer)!=EOF)
    {
		while(count==sno+1)
		{
			fscanf(s,"%c",buffer);
			if(strcmp(buffer,"\n")==0)
			{
				break;
			}
		}
        if (strcmp(buffer,",")==0)
		{
			fprintf(j,",");
		}
		else if (strcmp(buffer,"\n")==0)
		{
			fprintf(j,"\n");
			count++;
		}
		else
		{
			fprintf(j,"%s",buffer);
		}
		
    }
	fclose(j);
	fclose(s);
	s=fopen("contacts.csv","w");
    j=fopen("temp.csv","r");
	int new_line_count=0;
	count=0;
	while (fscanf(j,"%c",buffer)!=EOF)
    {
        if (strcmp(buffer,",")==0)
		{
			fprintf(s,",");
			new_line_count=0;
		}
		else if (strcmp(buffer,"\n")==0)
		{
			if (new_line_count==1)
			{
				continue;
			}
			
			fprintf(s,"\n");
			new_line_count++;
			count++;
		}
		else
		{
			if (new_line_count==1)
			{
				fprintf(s,"%d",count);
				new_line_count=0;
				continue;
			}
			fprintf(s,"%s",buffer);
			new_line_count=0;
		}
		
    }
	fclose(j);
	fclose(s);
}
int name()
{
	FILE *j;
    j=fopen("contacts.csv","r");
	FILE *t;
    t=fopen("temp.csv","w");
	char buffer[1];
	int comma_count=0,nl_count=0;
    while (fscanf(j,"%c",buffer)!=EOF)
	{
		while (nl_count==0)
		{
			if (strcmp(buffer,"\n")==0)
			{
				nl_count++;
			}
			fscanf(j,"%c",buffer);
		}
		
		if (strcmp(buffer,",")==0&&comma_count==1)
		{
			fprintf(t,"\n");
			comma_count++;
			continue;
		}
		
		if (strcmp(buffer,",")==0)
		{
			comma_count++;
			continue;
		}
		if (strcmp(buffer,"\n")==0)
		{
			fprintf(t,"\n");
			comma_count=0;
		}
		
		if (comma_count!=0)
		{
			fprintf(t,"%s",buffer);
		}
	}
	fclose(j);
	fclose(t);
}
int vcf_writer()
{

	FILE *j;
	FILE *t;
	char buffer1[50];
	printf("Enter file name for vcf\n>>");
	scanf(" %s",buffer1);
    j=fopen("temp.csv","r");
    t=fopen(strcat(buffer1,".vcf"),"w");
	for (int i = 0; i < 5; i++)
	{
		fprintf(t,"BEGIN:VCARD\nVERSION:2.1\nN:;");
		//while (fscanf(j,"%c",buffer1)!="EOF")
		//{
			fscanf(j,"%s",buffer1);
			fprintf(t,"%s",buffer1);
		//}
		fprintf(t,";;;");
		fprintf(t,"\nTEL;CELL:");
		//while (fscanf(j,"%c",buffer1)!="\n")
		//{
			fscanf(j,"%s",buffer1);
			fprintf(t,"%s",buffer1);
		//}

		fprintf(t,"\nEND:VCARD\n");
		printf("\n\n\n..\n");
	}
	fclose(j);
	fclose(t);
}
int export_vcf()
{
	name();
	vcf_writer();
}
int main()
{
	menu();
}