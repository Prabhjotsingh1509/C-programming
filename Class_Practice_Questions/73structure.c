// WAP to create a custom data type using structures and arrays to represent a real world entity such as book and student.
#include<stdio.h>
#include<string.h>

struct Book {
    char title[50];
    char author[50];
    int pages;
    float price;
};

int main()
{
    struct Book b[3];  
    int i;

    for(i = 0; i < 3; i++)
    {
        printf("\nEnter details of Book %d:\n", i + 1);

        printf("Title: ");
        fgets(b[i].title, sizeof(b[i].title), stdin);
        b[i].title[strcspn(b[i].title, "\n")] = '\0';

        printf("Author: ");
        fgets(b[i].author, sizeof(b[i].author), stdin);
        b[i].author[strcspn(b[i].author, "\n")] = '\0';

        printf("Pages: ");
        scanf("%d", &b[i].pages);

        printf("Price: ");
        scanf("%f", &b[i].price);

        getchar();  
    }

    printf("Book details");
    for(i = 0; i < 3; i++)
    {
        printf("\nBook %d\n", i + 1);
        printf("Title : %s\n", b[i].title);
        printf("Author: %s\n", b[i].author);
        printf("Pages : %d\n", b[i].pages);
        printf("Price : %.2f\n", b[i].price);
    }

    return 0;
}
