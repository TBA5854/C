#include<stdio.h>
#include<stdlib.h>>
#include<string.h>
int main()
{
    	printf("hi");
	FILE *j;
    j=fopen("contacts.csv","r");
	FILE *t;
    t=fopen("temp.csv","w");
	char buffer[1];
	int comma_count=0,nl_count=0;
	printf("hi");
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
    j=fopen("temp.csv","r");
	
    t=fopen("temp1.csv","w");
	char buffer1[50];
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