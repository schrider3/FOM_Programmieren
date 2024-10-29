#include <stdio.h>

int main() {
    int i = 0;

    while(1)
    {
        i++;
        if(i % 2000 == 0)
            printf("%i\n", i);
    }

    return 0;
}