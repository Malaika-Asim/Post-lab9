#include<stdio.h>
int arr[100];
void bookseat1();
void bookseat2();
int count;
void bookseat1(void)
{
	//For First Class
	printf("\nSelect type of class: 1"); 
    int seat;
    printf("\nSelect seat number(1-30): ");
	scanf_s("%d", &seat);
	if (seat >= 1 && seat <= 30)
	{
		if (arr[seat-1] == 0)
		{
			arr[seat - 1] = 1;
			count = count + 1;
			printf("********************************");
			printf("\nYou type of class is First Class!");
			printf("\nYour seat number is: %d", seat);
			printf("\n********************************");
		}
		else if (arr[seat-1] == 1)
		{
			printf("This seat is already booked!");
			printf("\nPlease book another seat!\n");
			printf("********************************");
			bookseat1();
		}
	}
	else if (seat > 30)
	{
		printf("\n");
		printf("Please type the correct seat number for First Class!");
		bookseat1();
	}
	menu_ticket();
}
void bookseat2(void)
{
	//For Economy Class
	printf("\nSelect type of class: 2");
	int seat;
	printf("\nSelect seat number(31-100): ");
	scanf_s("%d", &seat);
	if (seat >= 31 && seat <= 100)
	{
		if (arr[seat-1] == 0)
		{ 
			arr[seat - 1] = 1;
			count = count + 1;
			printf("********************************");
			printf("\nYou type of class is Economy Class!");
			printf("\nYour seat number is: %d", seat);
			printf("\n********************************");
		}
		else if (arr[seat-1] == 1)
		{
			 printf("This seat is already booked!");
			 printf("\nPlease book another seat!\n");
			 printf("********************************");
			 bookseat2();
		}
	}
	else if (seat < 31)
	{
		printf("\n");
		printf("Please type the correct seat number for Economy Class!");
		bookseat2();
	}
	menu_ticket();
}
