#include <stdio.h>
#include <stdlib.h>

typedef struct threeNum
{
    int n1, n2, n3;
}tn;

int main(void)
{
    tn num;
    int i;

    FILE *f = fopen("writing_bin_data.bin", "rb");

    if (f == NULL)
    {
        printf("Error reading file...\n");
        exit(1);
    }

    fseek(f, -sizeof(num), SEEK_END);

    for (i = 1; i < 5; ++i)
    {
        fread(&num, sizeof(num), 1, f);
        printf("n1 : %d\t\tn2 : %d\t\tn3 : %d\n",num.n1, num.n2, num.n3);
        fseek(f, -2 * sizeof(num), SEEK_CUR);
    }

    fclose(f);
    return 0;
}