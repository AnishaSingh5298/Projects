#include<stdio.h>
#include<conio.h>
#include<string.h>

struct library
{
	char book[50];
	char author[50];
	int page;
	float price;
	
};

int main()
{
	struct library l[100];
	char bn[30],an[30];
	int i,j,count=0;
	
	while(j<=6)
	{
		printf("\n\n 1) Add book information\n 2) Display book information\n 3) List all books of given author\n ");
		printf("4) List the details of specified book\n 5) List the count of books in the library\n 6) Exit\n");
		printf("\n\nEnter one of the above: ");
		scanf("%d",&j);
		
		switch (j)
		{
			
			case 1:
				printf("Enter book name: ");
				scanf("%s",l[i].book);
				
				printf("Enter author name: ");
				scanf("%s",l[i].author);
				
				printf("Enter page: ");
				scanf("%d",&l[i].page);
				
				printf("Enter price: ");
				scanf("%f",&l[i].price);
				
				count++;
				break;
				
			case 2:
			    printf("The entered information are as follows-:\n");
			    printf("Book\tAuthor\tPage\tPrice\n");
				for(i=0;i<count;i++)
				{
				
					printf("%s\t",l[i].book);
					printf("%s\t",l[i].author);
					printf("%d\t",l[i].page);
					printf("%f\n",l[i].price);
				}	
				break;
				
			case 3:
			    printf("Enter author's name : ");
				scanf("%s",an);
				for(i=0;i<count;i++)
				{
					if(strcmp(an , l[i].author)==0)
					printf("%s\t%s\t%d\t%f\n",l[i].book,l[i].author,l[i].page,l[i].price);
				}
				break;
				
			case 4:
			    printf("Enter book's name : ");
				scanf("%s",bn);
				for(i=0;i<count;i++)
				{
					if(strcmp(bn , l[i].book)==0)
					printf("%s\t%s\t%d\t%f",l[i].book,l[i].author,l[i].page,l[i].price);
				}
				break;	
				
			case 5:
			    printf("Total number of books in library : %d",count);
				break;
				
				
			case 6:
			    exit (0);
				break;	
			
		}
	}
	return 0;
}
