#include <stdio.h>

// Define the structure for Book
struct Book {
    char title[50];
    char author[50];
    float price;
};

int main() {
    // Declare a variable of type struct Book
    struct Book myBook;

    // Take input for the book details
    printf("Enter book title: ");
    fgets(myBook.title, sizeof(myBook.title), stdin);  // Input the title
    
    printf("Enter book author: ");
    fgets(myBook.author, sizeof(myBook.author), stdin); // Input the author name
    
    printf("Enter book price: ");
    scanf("%f", &myBook.price);  // Input the price

    // Display the entered book details
    printf("\nBook Details:\n");
    printf("Title: %s", myBook.title);
    printf("Author: %s", myBook.author);
    printf("Price: %.2f\n", myBook.price);

    return 0;
}
