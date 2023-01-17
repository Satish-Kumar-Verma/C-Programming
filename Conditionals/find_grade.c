#include <stdio.h>

int main(void)
{
    int myan, eng, maths, chem, phys, bio;
    int total_marks = 600;
    int marks;
    float percentage;
    myan = 60;
    eng = 60;
    maths = 60;
    chem = 60;
    bio = 60;
    phys = 60;

    marks = myan + eng + maths + chem + phys + bio;

    percentage = ((float)marks / (float)total_marks) * 100; // type casting
    // percentage = (marks * 100) / total_marks;
    printf("Percentage : %.2f %%\n", percentage);

    if(percentage < 25)
        printf("F\n");

    else if(percentage >= 25 && percentage < 45)
        printf("E\n");

    else if(percentage >= 45 && percentage < 50)
        printf("D\n");

    else if(percentage >= 50 && percentage < 60)
        printf("C\n");
    
    else if(percentage >= 60 && percentage < 80)
        printf("B\n");
    
    else if(percentage >= 80)
        printf("A\n");

}