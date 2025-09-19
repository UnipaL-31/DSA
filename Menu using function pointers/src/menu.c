#include "../headers/main.h"

int main(){
    void (*fPtr[3])(int) = {menu_call1, menu_call2, menu_call3};

    printf("Enter a number between 0 and 2, input 3 to exit: ");
    int choice = 0;
    scanf("%d", &choice);

    while(choice != 0){
        //error handling in case of invalid choice  . . . . . .
        (*fPtr[choice - 1])(choice);

        printf("Enter a number between 0 and 2, input 3 to exit: ");
        scanf("%d", &choice);
    }

    puts("Program execution completed.");
    return 0;
}

void menu_call1(int identifier1) {
    printf("You entered %d so menu 1 was called\n", identifier1);
    return;
}

void menu_call2(int identifier2) {
    printf("You entered %d so menu 2 was called\n", identifier2);
    return;
}

void menu_call3(int identifier3) {
    printf("You entered %d so menu 3 was called\n", identifier3);
    return;
}
