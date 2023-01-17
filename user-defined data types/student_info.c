#include <stdio.h>

typedef struct
{
    char name[15];
    char roll_no[20];
    int room_no;
}student;


int main(void)
{
    student s;

    printf("Enter the student's name : ");
    char temp;
    int index = 0;
    do 
    {
        scanf("%c", &temp);
        if (temp != '\n')
        {
            s.name[index] = temp;
            index++;
        }
    }while(!(temp == '\n'));
    s.name[index] = '\0';

    printf("Enter the roll number : ");
    index = 0;
    do 
    {
        scanf("%c", &temp);
        if (temp != '\n')
        {
            s.roll_no[index] = temp;
            index++;
        }
    }while(!(temp == '\n'));
    s.roll_no[index] = '\0';

    printf("Enter the room number : ");
    scanf("%d", &s.room_no);

    printf("Name : %s\n", s.name);
    printf("Roll Number : %s\n", s.roll_no);
    printf("Room Number : %d\n", s.room_no);


    
    return 0;
}