#include <stdio.h>
#include <stdlib.h>

typedef struct threeNum
{
    int n1, n2, n3;
}tn;


int main(void)
{
    int n;
    tn num;

    FILE *f;
    f = fopen("writing_bin_data.bin", "rb");

    if (f == NULL)
    {
        printf("Error reading file...\n");
        exit(1);
    }

    for (n = 1; n < 5; ++n)
    {
        fread(&num, sizeof(tn), 1, f);
        printf("n1 : %d\t", num.n1);
        printf("n2 : %d\t", num.n2);
        printf("n3 : %d\t", num.n3);
    }

    fclose(f);

    return 0;
}