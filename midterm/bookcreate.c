#include <stdio.h>

struct BookRecord {
    int id;
    char name[100];
    char author[100];
    int Year;
    int loanCount;
    int isAvailable;
};

int main() {
    struct BookRecord books[] = {
        {1, "1984", "George", 1949, 0, 1},
        {2, "Luster", "Raven", 2020, 0, 1},
        {3, "Hamnet", "Maggie", 2020, 0, 1},
        {4, "theWish", "Nicholas", 2021, 0, 1},
    };

    int numBooks = sizeof(books) / sizeof(books[0]);

    printf("--bookquery--\n");
    printf("\n");
    printf("id\t\tbookname\tauthor\t\tyear\tnumofborrow\tborrow\n");
    for (int i = 0; i < numBooks; i++) {
        if (books[i].isAvailable) {
            printf("%d\t\t%s\t\t%s\t\t%d\n", books[i].id, books[i].name, books[i].author, books[i].Year);
        }
    }

    return 0;
}

