/*
1. `enum`:
   a) Write a program that defines an enumeration for the days of the week and prompts the user to enter a number representing a day. Display the corresponding day of the week.
   
   b) Create an `enum` for different car models (e.g., Sedan, SUV, Convertible) and write a program that asks the user to enter a car model and displays a message based on the input.

2. `typedef`:
   a) Define a `typedef` for an integer array of size 10 called `IntArray` and write a program that declares and initializes an `IntArray`, then prints its elements.
   
   b) Create a `typedef` for a structure called `Person` that contains fields for name, age, and address. Write a program that declares a `Person` variable, prompts the user to enter their name, age, and address, and displays the entered information.

3. `struct`:
   a) Define a structure called `Student` that contains fields for name, roll number, and marks in three subjects. Write a program that declares an array of `Student` structures, prompts the user to enter the details for each student, and displays the average marks for each student.
   
   b) Create a structure called `Rectangle` with fields for length and width. Write a program that calculates and displays the area and perimeter of a rectangle based on user input.

4. `union`:
   a) Define a union called `Number` that can hold either an integer or a float. Write a program that prompts the user to enter a number, determines its type (integer or float), and performs a specific operation based on the type (e.g., doubling the integer or rounding the float to the nearest integer).
   
   b) Create a union called `Data` with fields for an integer, a float, and a character. Write a program that asks the user to enter data of any type and displays the entered data with its corresponding type.*/
#include <stdio.h>
int enum_a()
{
	enum days
	{
		Sunday = 1,
		Monday,
		Tuesday,
		Wednesday,
		Thursday,
		Friday,
		Saturday,
	};
	enum days d;
	printf("Enter the Number you want to correspond to a day :");
	scanf(" %d", &d);
	switch (d)
	{
	case Sunday:
		printf("Sunday");
		break;
	case Monday:
		printf("Monday");
		break;
	case Tuesday:
		printf("Tuesday");
		break;
	case Wednesday:
		printf("Wednesday");
		break;
	case Thursday:
		printf("Thursday");
		break;
	case Friday:
		printf("Friday");
		break;
	case Saturday:
		printf("Saturday");
		break;
	default:
		printf("Invalid input");
	}
	return 0;
}
int enum_b()
{
	enum cars
	{
		Sedan = 1,
		SUV,
		Convertible
	};
	enum cars d;
	printf("Choose \n1.Sedan\n2.SUV\n3.convertible\n");
	printf("Enter your choice :");
	scanf(" %d", &d);
	switch (d)
	{
	case Sedan:
		printf("Sedan honks at you");
		break;
	case SUV:
		printf("SUV honks at you");
		break;
	case Convertible:
		printf("Convertible honks at you");
		break;
	default:
		printf("Invalid input ");
	}
	return 0;
}
int typedef_a()
{
	typedef int b[10];
	b a;
	for (int i = 0; i < 10; i++)
	{
		printf("Enter your element for index %d : ", i);
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		printf("Element in index %d  is %d \n", i, a[i]);
	}
	return 0;
}
int typedef_b()
{
	struct Person
	{
		char name[20];
		int age;
		char address[100];
	};
	typedef struct Person P;
	P p1;
	printf("Enter your name:");
	scanf(" %s", p1.name);
	printf("Enter your age");
	scanf(" %d", &p1.age);
	printf("Enter your address:");
	scanf(" %s", p1.address);
	printf("Name :%s\nAge:%d\nAddress:%s", p1.name, p1.age, p1.address);
	return 0;
}
int struct_a()
{
	int r;
	printf("Enter no. of students :");
	scanf(" %d", &r);
	struct s
	{
		char name[20];
		int rollno;
		int m1;
		int m2;
		int m3;
		float avg;
	} s[r];
	for (int i = 0; i < r; i++)
	{
		printf("Enter name:");
		scanf(" %s", s[i].name);
		printf("Enter roll no");
		scanf(" %d", &s[i].rollno);
		printf("Enter m1:");
		scanf(" %d", &s[i].m1);
		printf("Enter m2:");
		scanf(" %d", &s[i].m2);
		printf("Enter m3:");
		scanf(" %d", &s[i].m3);
		s[i].avg = (float)(s[i].m1 + s[i].m2 + s[i].m3) / 3;
	}
	for (int j = 0; j < r; j++)
	{
		printf("For student of roll number %d , average marks is :%f\n", s[j].rollno, s[j].avg);
	}
	return 0;
}
int struct_b()
{
	struct rect
	{
		int length;
		int breadth;
		int area;
		int p;
	} r;
	printf("Enter length of the rectangle :");
	scanf(" %d", &r.length);
	printf("Enter breadth of the rectangle :");
	scanf(" %d", &r.breadth);
	r.area = r.length * r.breadth;
	r.p = 2 * (r.length + r.breadth);
	printf("Area of triangle is %d and perimeter is %d", r.area, r.p);
	return 0;
}
int union_a()
{
	union Number {
		int i;
		float f;
	} n;
	printf("Enter input:");
	scanf(" %f", &n.f);
	if (n.f == (int)n.f)
	{
		printf("Its a integer and doubling it gives %d", ((int)n.f) * 2);
	}
	else if ((int)n.f == (int)(n.f - 0.5))
	{
		printf("Its a float and nearest int is :%d", ((int)n.f) + 1);
	}
	else
	{
		printf("Its a float and nearest int is :%d", (int)n.f);
	}
	return 0;
}
int union_b()
{
	union Data {
		int i;
		float f;
		char c;
	};
	union Data data;

	printf("Enter data of any type (integer, float, or character): ");

	if (scanf("%f", &data.f) == 1)
	{
		if (data.f == (int)data.f)
		{
			printf("Entered data: %d (Type: Integer)\n", (int)data.f);
		}
		else
		{
			printf("Entered data: %f (Type: Float)\n", data.f);
		}
	}
	else
	{
		scanf(" %c", &data.c);
		printf("Entered data: %c (Type: Character)\n", data.c);
	}

	return 0;
}
int main()
{
	int ch;
	printf("Welcome\n");
	printf("Choose:");
	printf("1.Enum days\n");
	printf("2.Enum cars");
	printf("3.typedef array");
	printf("\n4.typedef struct\n");
	printf("5.stuct students\n");
	printf("6.structure rectangle\n");
	printf("7.Union 1\n");
	printf("8.Union 2\n");
	printf("Enter your choice :");
	scanf(" %d", &ch);
	switch (ch)
	{
	case 1:
		enum_a();
		break;
	case 2:
		enum_b();
		break;
	case 3:
		typedef_a();
		break;
	case 4:
		typedef_b();
		break;
	case 5:
		struct_a();
		break;
	case 6:
		struct_b();
		break;
	case 7:
		union_a();
		break;
	case 8:
		union_b();
		break;
	default:
		printf("Invalid input");
	}
	return 0;
}