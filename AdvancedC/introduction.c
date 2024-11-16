#include <stdio.h>

int main()
{
    printf("EXAMPLE 1: ");

    if(sizeof(int) > -1)
        printf("True\n");
    else
        printf("False\n");

/** Explanation
 *  Output: False
 *  Why?    sizeof function is of size_t which is an unsigned integer data type 
 *          and we are trying to compare unsigned int to signed int which is -1.
 *          So, the loop will enter into else statement and will print False.
 */
    printf("EXAMPLE 2: ");

    float f = 0.1;

    if (f == 0.1)
        printf("True\n");
    else
        printf("False\n");

/** Explanation
 *  Output: False
 *  Why?    By default, C language has an affinity for a double data type.
 *          Whenever we have a floating point number (in this case 0.1), it will
 *          be treated like a double data type. Therefore there is a mismatch while 
 *          comparing float to double in the if statement. Both operands must be of same
 *          data types.
 */
    printf("EXAMPLE 3: ");

    int a, b = 1, c = 1;

    a = sizeof(c = ++b + 1);
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    /** Explanation
    *  Output: a = 4, b = 1, c = 1 
    *  Why?    since, c is of type int and we know that int is 4 bytes
    *          therefor a = 4.
    */
    printf("EXAMPLE 4: \n");

    /* char *p = 0;
    
    *p = 'A';

    printf("Value at p = %c\n", *p); */

    /** Explanation
     *  Output: Segmentation fault
     *  Why?    Here, we are trying to illegal access memory which are not
     *          supposed to access or we are not supposed to read or write values
     *          into it. char *p = 0 --> here we are declaring pointer p to NULL.
     *          NULL means zero memory location. In other words, there is no
     *          memory addresses. Hence, the system will not support this.
     *          Fault is in this line, *p = 'A'.
     */
    printf("EXAMPLE 5: ");

    int x = 1, y = 3, z = 2;
    if (x > y)
        if (y > z)
            printf("x > y and y > z\n");
        else
            printf("something else\n");
    /** Explanation
    *  Why? Here, correct indentation is important. The first if statement will not execute. 
    *       After that, it will go to else statement which is not there. So, it wont print anything.
    *      
    */



    return 0;
}

