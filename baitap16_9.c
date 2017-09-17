#include <stdio.h>

void iputIntArray(){
    printf("Please enter number:\n");
    int array[5];
    for (int i = 0; i < 5; ++i) {
        scanf(" %d", &array[i]);
    }
    printf("Array is: \n");
    for (int i = 0; i < 5; ++i) {
        printf(" %d\t", array[i]);
    }
}
void inputCharArray (){
    printf("Please enter character:\n");
    int array[5];
    for (int i = 0; i < 5; ++i) {
        scanf(" %c", &array[i]);
    }
    printf("Array is: \n");
    for (int i = 0; i < 5 ; ++i) {
        printf(" %c\t", array[i]);
    }
}
int main(){
    void (*pt_function) ();
    int choice;
    printf("=========MENU=========\n");
    printf("1. Choice Int Array.\n");
    printf("2. Choice Char Array.\n");
    printf("3. End program.\n");
    printf("========THE END=======\n");
    printf("\nYour choice: ");
    scanf("%d", &choice);
    getchar();
    if (choice==3){
        printf("END PROGRAM.THANK YOU.\n");
        return 0;
    }
    switch(choice){
        case 1:
            pt_function = &iputIntArray;
            break;
        case 2:
            pt_function = &inputCharArray;
            break;
        default:
            printf("NguyenCong JP.\n");
            return 0;
    }
    pt_function();
}

