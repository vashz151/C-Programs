struct Book
{
	char title[20];
	struct
	{
		char first_name[20],surname[20];
	}author;
	struct
	{
		char first_name[20],surname[20];
	}publisher;
	int edition,ISBN;
};