#include <stdio.h>

int main(int argc, char *argv[]) {
    int areas[] = { 10, 12, 13, 14, 20 };
    char name[] = "Zed";
    char full_name[] = {
        'Z', 'e', 'd',
        ' ', 'A', '.', ' ',
        'S', 'h', 'a', 'w', '\0'
    };

    printf("Size of an int %ld\n", sizeof(int));
    printf("Size of areas %ld\n", sizeof(areas));
    printf("Num ints in areas %ld\n", sizeof(areas) / sizeof(int));
    printf("First area is %d, 2nd area is %d.\n", areas[0], areas[1]);

    printf("Size of char %ld\n", sizeof(char));
    printf("Size of name %ld\n", sizeof(name));
    printf("number of chars %ld\n", sizeof(name) / sizeof(char));

    printf("size of full_name %ld\n", sizeof(full_name));
    printf("num chars %ld\n", sizeof(full_name) / sizeof(char));

    printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);

    return 0;
}
