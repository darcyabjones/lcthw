#include <stdio.h>

int main(int argc, char *argv[]){
    // create two arrays we care about

    int ages[] = { 23, 43, 12, 89, 2 };
    char *names[] = { "Alan", "Frank", "Mary", "John", "Lisa" };

    // Safely get the size of ages
    int count  = sizeof(ages) / sizeof(int);
    int i = 0;

    for (i = 0; i < count; i++) {
        printf("%s has %d years.\n", names[i], ages[i]);
    }

    printf("---\n");

    // setup the pointers to the start of the array
    int *cur_age = ages;
    char **cur_name = names;

    for (i=0; i < count; i++) {
        printf("%s is %d years old.\n", *(cur_name + i), *(cur_age + i));
    }

    printf("---\n");

    //
    for (i=0; i < count; i++) {
        printf("%s is %d years old again.\n", cur_name[i], cur_age[i]);
    }

    printf("---\n");

    for (cur_age = ages, cur_name = names; (cur_age - ages) < count; cur_name++, cur_age++) {
        printf("%s lived %d years, at address %p.\n", *cur_name, *cur_age, cur_age);
    }

    return  0;

}