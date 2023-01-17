#include <stdio.h>
#include <stdlib.h>

// typedef <original name> <alias name>
typedef int integer;

typedef struct threeNum
{
    int n1, n2, n3;
}tn;


int main(void)
{
    integer n;
    tn num;

    FILE *f;
    f = fopen("writing_bin_data.bin", "wb");

    if (f == NULL)
    {
        printf("Error creating the file...\n");
        exit(1);
    }

    for (n = 1; n < 5; ++n)
    {
        num.n1 = n;
        num.n2 = n * 5;
        num.n3 = (n * 5) + 1;
        fwrite(&num, sizeof(tn), 1, f);
    }
    fclose(f);
    return 0;
}