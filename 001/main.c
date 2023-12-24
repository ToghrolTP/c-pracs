#include <stdio.h>

int main() {
    // Writing strings using `printf`
    // char *ptr = "Hello World";
    // printf("%s", ptr);

    /* ".ns" is used to print just a part of the string where `n` is the number of
     * characters to be displayed on the screen */
    // char *ptr = "Hello World";
    // printf("%.5s\n", ptr);

    /* `%m.ns` is used to print just a part of the string where n is the number of
     * characters to be displayed and m denotes the size of the filed within which
     * the string will be displayed.
    */
    // printf("%6.5s", ptr);

    // Writing String Using `puts`
    /* puts() function is a function declared in <stdio.h> library and is used to
     * write strings to the output screen.
     * Also, puts() function automatically writs a NEWLINE character after writing
     * the string to the output screen.
    */
    char *s = "Hello";
    puts(s);
    puts(s);

    return 0;
}
