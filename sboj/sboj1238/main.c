#include <stdio.h>

struct book {

    char name[30];

    //int isbn;

    float price;

};

struct book books[3];

int main(void) {

    int i, max, min, n;

    max = min = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)

        scanf("%s%f", books[i].name, &books[i].price);

    for (i = 1; i < n; i++) {

        if (books[max].price < books[i].price)

            max = i;

        if (books[min].price > books[i].price)

            min = i;

    }

    printf("定价最高的书名称是%s,价格是%.2f\n", books[max].name, books[max].price);

    printf("定价最低的书名称是%s,价格是%.2f", books[min].name, books[min].price);

    return 0;

}