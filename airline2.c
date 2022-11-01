
int main()
{
	for (int i = 0; i < 100; i++)
	{
		arr[i] = 0;
	}
	printf("\t\t\t\t\tAirline Reservation System");
	printf("\n\t\t\t*********************************************************");
	printf("\n\nChoose from the given Options:-");
	menu_ticket();
}
void menu_ticket(void)
{
	printf("\n1. Seating Chart");
	printf("\n2. Book a Seat");
	printf("\n*********************\n");
	int n;
	scanf_s("%d", &n);
	if (n == 1)
	{
		seatchart();
	}
	else if (n == 2)
	{
		printf("Type 1 for 'First Class' ");
		printf("\nType 2 for 'Economy Class' ");
		printf("\n*************************\n");
		int num;
		scanf_s("%d", &num);
		if (num == 1)
		{
			bookseat1();
		}
		else if (num == 2)
		{
			bookseat2();
		}
	}
	else if (n != 1 && n != 2)
	{
		printf("The number of seats sold is= %d", count);
		printf("\nThank You for using the program!");
	}
}
void seatchart(void) {
	for (int i = 0; i < 100; i++)
	{
		printf("%d", arr[i]);

	}
	printf("\n");
	menu_ticket();
}