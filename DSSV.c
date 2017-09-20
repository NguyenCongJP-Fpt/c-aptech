#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <memory.h>

void nhapSV() {
    char name[100];
    char birthday[50];
    char phone [20];
    char address [20];
    for (int i = 0; i < 10; i++) {
        printf("Name Of Student %d: \n", i + 1);
        fgets(name, sizeof(name), stdin);
        FILE *myFile = fopen("DSSinhVien.txt", "a"); //mở file với quyền w ( write , ghi dữ liệu).
        fputs(name, myFile);  //ghi tên vào file.
//        printf("Name: \t");
        fflush(stdin); //xóa bộ nhớ đệm của lần nhập trước.


        printf("Birthday Of Student: \n");
        fgets(birthday, sizeof(birthday), stdin);
        fputs(birthday, myFile);
//        printf("Birthday: \t");
        fflush(stdin); //xóa bộ nhớ đệm của lần nhập trước.


        printf("Phone Of Student: \n", phone);
        fgets(phone, sizeof(phone), stdin);
        fputs(phone, myFile);
//        printf("Phone: \t");
        fflush(stdin); //xóa bộ nhớ đệm của lần nhập trước.


        printf("Address Of Student : \n", address);
        fgets(address, sizeof(address), stdin);
        fputs(address, myFile);
//        printf("Address: \t");
        fflush(stdin); //xóa bộ nhớ đệm của lần nhập trước.

        fclose(myFile); //lệnh đóng file sau khi ghi.
    }printf("okay."); //sau khi ghi xong sẽ báo là Kết thúc.
}
void hienSV() {
    FILE *myFileRead = fopen("DSSinhVien.txt", "r");  //Mở file với quyền r (read, đọc file).
    char charArraySV[100];
    while (fgets(charArraySV, 100, myFileRead)){
        printf("%s", charArraySV);
        fclose(myFileRead);
    }
}
int main (){
    while (true) {
        int choice;
        printf("================Menu================\n");
        printf("1. ADD STUDENTS.\n");
        printf("2. SHOW STUDENTS. LIST.\n");
        printf("3. EXIT.\n");
        printf("====================================\n");
        printf("PLEASE ENTER YOUR CHOICE:  \n");
        scanf("%d", &choice);
        getchar();
        if (choice == 3) {
            printf("End program.");
            break;
        }
        switch (choice) {
            case 1:
                printf("PLEASE ADD STUDENTS.\n");
                nhapSV();
                break;
            case 2:
                printf("SHOW STUDENTS LIST.\n");
                hienSV();
                break;
            default:
                printf("Please choice a number 1 to 3.\n");
        }
    }
}
