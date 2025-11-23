// WAP to create a custom data type using structures and arrays to represent a real world entity such as book and student.
#include<stdio.h>
#include<string.h>

struct books{
    char title[50];
    char author[50];
    int pages;
    float price;
};
void print_book(struct books book);
void print_book(struct books book)
{
    printf("Book Title:%s\n",book.title);
    printf("Book Author:%s\n",book.author);
    printf("Book Price:%f\n",book.price);
    printf("Book Pages:%d\n",book.pages);
}
int main()
{
    struct books book1;
    struct books book2;
    strcpy(book1.title,"Program-1");
    strcpy(book1.author,"Likesh");
    book1.price=500;
    book1.pages=600;
    strcpy(book2.title,"Program-2");
    strcpy(book2.author,"Shivan");
    book2.price=100;
    book2.pages=450;
    print_book(book1);
    print_book(book2);
    return 0;
}