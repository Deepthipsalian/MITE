#include<stdio.h>
struct Fiction_t { //383
  char title[250];
  char author[125];
  float price;
};
typedef struct Fiction_t Fiction;

struct NonFiction_t { //753
  char title[250];
  char subject[500];
  float price;
};
typedef struct NonFiction_t NonFiction;
 
union BookType_t {
    Fiction fiction;
    NonFiction nonFiction;
};
typedef union BookType_t BookType;

struct Book_t {
    int type;
    BookType booktype;
};
typedef struct Book_t Book;

Book books[1000];
int bookCount;

void addBooks();
void displayBooks();

int main(){
    addBooks();
    displayBooks();
    return 0;
}

void addBooks(){
    printf("enter number of books:");
    scanf("%d",&bookCount);
   
    for(int T=0;T<bookCount;T++){
        printf("type of book(1.Fiction,2.Non fiction)");
        scanf("%d",&books[T].type);
       
        switch(books[T].type){
            case 1:{
                printf("enter fiction book details(Title,Author,Price):");
                scanf("%s%s%f",book[T].booktype.fiction.title,book[T].booktype.fiction.author,book[T].booktype.fiction.price);
            }break;
            case 2:{
                 printf("enter non fiction book details(Title,subject,Price):");
                scanf("%s%s%f",book[T].booktype.nonfiction.title,book[T].booktype.nonfiction.subject,book[T].booktype.nonfiction.price);
            }break;
        }
    }
}

void displayBooks(){
   
}
