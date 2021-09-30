// structure program - memory map of structure
 #include <stdio.h>

 int main()
 {
    struct book
    {
        char name;
        float price;
        int pages;

    };

    struct book b1 = {'A', 130.00, 550};

    printf("Address of name = %u\n", &b1.name);
    printf("Address of price = %u\n",&b1.price);
    printf("Address of pages = %u\n",&b1.pages);
    printf("size of struct = %d\n", sizeof(b1));
    printf("size of char name = %d\n", sizeof(b1.name));
    printf("size of float price = %d\n", sizeof(b1.price));
    printf("size of int pages = %d\n", sizeof(b1.pages));
    return 0;
 }
