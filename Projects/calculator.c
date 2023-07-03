#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("Enter number followed by symbols(+,-,*,/)\n");
	int storage = 1, temp = 2;
	char symbol = '*';
	scanf("%d %c %d %c", &storage, &symbol, &temp, &symbol);

	while (symbol != '=')
	{
		system("clear");
		//system("cls");
		printf("Enter number followed by symbols(+,-,*,/)\n");
		switch (symbol)
		{
		case '+':
			storage += temp;
			printf("%d %c ", storage, symbol);
			break;
		case '-':
			storage -= temp;
			printf("%d %c ", storage, symbol);
			break;
		case '*':
			storage *= temp;
			printf("%d %c ", storage, symbol);
				break;
		case '/':
			storage /= temp;
			printf("%d %c ", storage, symbol);
			break;
		}
		scanf(" %d %c", &temp, &symbol);
	}
}