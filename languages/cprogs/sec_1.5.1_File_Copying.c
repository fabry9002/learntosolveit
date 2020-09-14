#include <stdio.h>

main()
{
    int c;
    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}

/* There is a 2nd version to do it*/

/*
main()
{
    int c;

    while ((c=getchar()) != EOF)
        putchar(c);
}
*/
