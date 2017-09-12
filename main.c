#include <stdio.h>
#include <memory.h>
#include <stdbool.h>

int main(int argc, char *argv[20]) { 
    int a, b;
    char arrayChar[20];
    int charInt[20];
    char searchChar;
    int count = 0;
    while (true) {
        int choice;
        printf("-----------------Menu--------------\n");
        printf("1. Enter Chracter.\n");
        printf("2. Search Character.\n");
        printf("3. Exit.\n");
        printf("-----------------------------------\n");
        printf("Please enter your choice: ");
        scanf("%d", &choice);
        getchar();
        if (choice == 3) {
            printf("End program.");
            break;
        }
        switch (choice) {
            case 1:
                for (int i = 0; i < 20; ++i) {
                    printf("Please enter character. \n");
                    scanf(" %c", &arrayChar[i]);
                }
                printf("%i", sizeof(charInt)/ sizeof(char));
                break;
            case 2:
            printf(" Hay nhap ky tu ma ban muon tim. \n");
        scanf("%s", &searchChar);
        for (int i = 0; i <= 19; ++i) {
            if (arrayChar[i] == searchChar) {
                count++;
                break;
            }
            } printf("Ket qua cua ban: %i ky tu.\n", count);
        }
    }
}


