#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int choice;    
    
    scanf("%d", &choice);

    if(isalpha(choice) || isgraph(choice) || ispunct(choice))
    {
        puts("Yu ful");
        return 0;
    }

    puts("Its Ok");

    return 0;
}