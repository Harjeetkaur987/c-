#include<stdio.h>
#include<string.h>

struct Books
{
   char title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};

int main()
{

struct Books B1;
struct Books B2;

strcpy(B1.title,"c programming");
strcpy(B1.author,"nehu ali");
strcpy(B1.subject,"c++");
B1.book_id=653689;

strcpy(B2.title,"c programming 1");
strcpy(B2.author,"zara ali");
strcpy(B2.subject,"c tutorial");
B2.book_id=76903;

printf( "Book 1 title : %s\n", B1.title);
printf( "Book 1 author : %s\n", B1.author);
printf( "Book 1 subject : %s\n", B1.subject);
printf( "Book 1 book_id : %d\n", B1.book_id);

printf( "Book 2 title : %s\n", B2.title);
printf( "Book 2 author : %s\n", B2.author);
printf( "Book 2 subject : %s\n", B2.subject);
printf( "Book 2 book_id : %d\n", B2.book_id);

return 0;
	
}
