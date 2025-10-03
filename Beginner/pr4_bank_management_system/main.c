
#include "main.h"

int main()
{
    FILE *fptr;
    fptr = fopen("../data.txt", "r");
    int age;
    char name[10];
    char last_name[10];
    if (fptr == NULL){
        printf("The file is not opened.");
    }else{
        while(fscanf(fptr, "%*d %s %s %d", name, last_name, &age) == 3)
        {
            printf("Hello %s %s. You are now %d years old.\n", name, last_name, age);
        }
    }
    return 0;
}