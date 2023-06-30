#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int negative_mark=0,option_1=0,option_2=0,option_3=0,option_4=0,option_5=0,option_6=0,option_7=0,option_8=0,option_9=0,option_10=0,count=0;
int end()
{
		printf("\t\tThanks for Trying this quiz \n\n\t\t  A Program by TBA5854\n");
		exit(0);
}
int ans_1=2,ans_2=2,ans_3=2,ans_4=1,ans_5=1,ans_6=1,ans_7=3,ans_8=1,ans_9=1,ans_10=1;
int option()
{
	int n;
	printf("\n\tOption\n\n");
	printf("Do you want negative mark ?(default is no | 1 for yes and 0 for no)\n>>");
	scanf(" %d",&n);
	if(n==1)
	{negative_mark=1;}
}
int disc()
{
	printf("This Program is not a official measure to check iq and \nThis Program supposed to work perfectly only when\nthe user follows the rules:\n1.Only enter option number\n2.Never enter a alphabet unless asked to do so\n3.Have Fun!!\n");
	return 0;
}
int info()
{
	printf("1.There are 10 questions in this quiz\n");
	printf("2.There will be 4 options of which only 1 is correct\n");
	printf("3.Type the option number to confirm your answer\n");
	printf("4.There will be 1 mark for correct answer and \nno negative marks or -1 (can be changed in option) for wrong answer\n");
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
int q1()
{
	printf("\nQ1) Which planet is known as the \"Red Planet\"?");
	printf("\n1. Venus");
	printf("\n2. Mars");
	printf("\n3. Jupiter");
	printf("\n4. Saturn");
	return 0;
}
int q2()
{
	printf("\nQ2) What is the chemical symbol for gold?");
	printf("\n1. Ag");
	printf("\n2. Au");
	printf("\n3. Cu");
	printf("\n4. Fe");
	return 0;
}
int q3()
{
	printf("\nQ3)Who painted the famous artwork \"Mona Lisa\"?");
	printf("\n1. Vincent van Gogh");
	printf("\n2. Leonardo da Vinci");
	printf("\n3. Pablo Picasso");
	printf("\n4. Michelangelo");
	return 0;
}
int q4()
{
	printf("\nQ4) Which country is home to the kangaroo?");
	printf("\n1. Australia");
	printf("\n2. Brazil");
	printf("\n3. Canada");
	printf("\n4. India");
	return 0;
}
int q5()
{
	printf("\nQ5) What is the capital city of France?");
	printf("\n1. Paris");
	printf("\n2. London");
	printf("\n3. Rome");
	printf("\n4. Berlin");
	return 0;
}
int q6()
{
	printf("\nQ6) Who wrote the play \"Romeo and Juliet\"?");
	printf("\n1. William Shakespeare");
	printf("\n2. Oscar Wilde");
	printf("\n3. George Bernard Shaw");
	printf("\n4. Jane Austen");
	return 0;
}
int q7()
{
	printf("\nQ7) Which is the largest ocean on Earth?");
	printf("\n1. Atlantic Ocean");
	printf("\n2. Indian Ocean");
	printf("\n3. Pacific Ocean");
	printf("\n4. Arctic Ocean");
	return 0;
}
int q8()
{
	printf("\nQ8) What is the symbol for the chemical element oxygen?");
	printf("\n1. O");
	printf("\n2. H");
	printf("\n3. C");
	printf("\n4. N");
	return 0;
}
int q9()
{
	printf("\nQ9) Who is the author of the Harry Potter book series?");
	printf("\n1. J.K. Rowling");
	printf("\n2. Stephen King");
	printf("\n3. George R.R. Martin");
	printf("\n4. Suzanne Collins");
	return 0;
}
int q10()
{		
	printf("\nQ10) What is the capital city of Japan?");
	printf("\n1. Tokyo");
	printf("\n2. Beijing");
	printf("\n3. Seoul");
	printf("\n4. Bangkok");
	return 0;
}
int questions()
{
	q1();
	printf("\n>>");
	scanf(" %d",&option_1);
	q2();
	printf("\n>>");
	scanf(" %d",&option_2);
	q3();
	printf("\n>>");
	scanf(" %d",&option_3);
	q4();
	printf("\n>>");
	scanf(" %d",&option_4);
	q5();
	printf("\n>>");
	scanf(" %d",&option_5);
	q6();
	printf("\n>>");
	scanf(" %d",&option_6);
	q7();
	printf("\n>>");
	scanf(" %d",&option_7);
	q8();
	printf("\n>>");
	scanf(" %d",&option_8);
	q9();
	printf("\n>>");
	scanf(" %d",&option_9);
	q10();
	printf("\n>>");
	scanf(" %d",&option_10);
}
int intro()
{
	printf("\t\tWelcome to the Quiz !!!\n\n\n");
	printf("\tDo you have what it takes to get a 10 ?");
	printf("\n\t\tLets Find out");
	printf("\n\t  Type \"start\" to go start\n\n\n>>");
	char st[6];
	scanf(" %s",st);
	if (strcmp(st,"start")==0)
	{
		questions();
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
	printf("Hello fellow user , you have started the quiz program !\n");
	once++;
	}
	printf("\n\tMenu\n\n");
	printf("Use the resources below and type 4 to start(Enter number to choose the option)\n");
	printf("1.Disclaimer\n");
	printf("2.Info\n");
	printf("3.Contact\n");
	printf("4.Start\n");
	printf("5.Option\n");
	printf("6.Exit\n");
	printf(">>");
	int ch;
	scanf (" %d",&ch);
	switch (ch)
	{
	case 1:
	printf("\n\tDisclaimer\n\n");
		disc();
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
	printf("\n\tContact\n\n");
	printf("For any querries or reporting bugs , contact TBA58584 via github or twitter\n");
	printf("www.github.com/TBA5854\n");
	printf("www.twitter.com/TBA5854\n");
	back();
	menu();
	break;
	case 4:
	intro();
	break;
	case 5:
	option();
	menu();
	break;
	case 6:
	end();
	default:
	printf("Invalid input , program is exiting !!!");
	exit(0);
	}
}
int check()
{
	if (option_1==ans_1)
	{
		count++;
	}
	else
	{
		count=count-negative_mark;
	}
	
	if (option_2==ans_2)
	{
		count++;
	}
	else
	{
		count=count-negative_mark;
	}
	if (option_3==ans_3)
	{
		count++;
	}
	else
	{
		count=count-negative_mark;
	}
	if (option_4==ans_4)
	{
		count++;
	}
	else
	{
		count=count-negative_mark;
	}
	if (option_5==ans_5)
	{
		count++;
	}
	else
	{
		count=count-negative_mark;
	}
	if (option_6==ans_6)
	{
		count++;
	}
	else
	{
		count=count-negative_mark;
	}
	if (option_7==ans_7)
	{
		count++;
	}
	else
	{
		count=count-negative_mark;
	}
	if (option_8==ans_8)
	{
		count++;
	}
	else
	{
		count=count-negative_mark;
	}
	if (option_9==ans_9)
	{
		count++;
	}
	else
	{
		count=count-negative_mark;
	}
	if (option_10==ans_10)
	{
		count++;
	}
	else
	{
		count=count-negative_mark;
	}
}
int wrong()
{
	printf("\nHere are the Questions you answered wrongly and their answers:\n");
		if (option_1!=ans_1)
	{
		q1();
		printf("\n\nYou have entered option :%d",option_1);
		printf("\nCorrect answer is :%d\n",ans_2);
	}
	if (option_2!=ans_2)
	{
		q2();
		printf("\n\nYou have entered option :%d",option_2);
		printf("\nCorrect answer is :%d\n",ans_2);
	}
	if (option_3!=ans_3)
	{
		q3();
		printf("\n\nYou have entered option :%d",option_3);
		printf("\nCorrect answer is :%d\n",ans_3);
	}
	if (option_4!=ans_4)
	{
		q4();
		printf("\n\nYou have entered option :%d",option_4);
		printf("\nCorrect answer is :%d\n",ans_4);
	}
	if (option_5!=ans_5)
	{
		q5();
		printf("\n\nYou have entered option :%d",option_5);
		printf("\nCorrect answer is :%d\n",ans_5);
	}
	if (option_6!=ans_6)
	{
		q6();
		printf("\n\nYou have entered option :%d",option_6);
		printf("\nCorrect answer is :%d\n",ans_6);
	}
	if (option_7!=ans_7)
	{
		q7();
		printf("\n\nYou have entered option :%d",option_7);
		printf("\nCorrect answer is :%d\n",ans_7);
	}
	if (option_8!=ans_8)
	{
		q8();
		printf("\n\nYou have entered option :%d",option_8);
		printf("\nCorrect answer is :%d\n",ans_8);
	}
	if (option_9!=ans_9)
	{
		q9();
		printf("\n\nYou have entered option :%d",option_9);
		printf("\nCorrect answer is :%d\n",ans_9);
	}
	if (option_10!=ans_10)
	{
		q10();
		printf("\n\nYou have entered option :%d",option_10);
		printf("\nCorrect answer is :%d\n",ans_10);
	}

}
int main()
{
	menu();
	check();
	score:
	printf("You have scored %d/10\n",count);
	char v[5];
	printf("Type \"show\" to check correct answer or \"exit\" to quit the program\n>>");
	scanf(" %s",v);
	if (strcmp(v,"exit")==0)
	{
		end();
	}
	else if (strcmp(v,"show")==0)
	{
		wrong();
		back();
		goto score;
	}
	else
	{
		printf("Invalid input , program is exiting !!!");
		exit(0);
	}
	return 0;
}