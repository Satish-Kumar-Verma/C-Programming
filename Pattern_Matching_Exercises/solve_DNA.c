#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdbool.h>
#define SIZE 50
string take_input(int);
bool find_virus(string, string);
bool check_DNA(string);
void replace_virus(string, string, string, char[]);
bool check_virus(string, string, int);

int main(void)
{
    string input_DNA, virus, healthy_gene;
    // char input_DNA[] = "ACTGATTCGTTAGTTG";
    // char virus[] = "GAT";
    // char healthy_gene[] = "ATGT";
    char healthy_DNA[SIZE];

    input_DNA = take_input(1);
    virus = take_input(2);
    healthy_gene = take_input(3);
    if (find_virus(input_DNA, virus))
    {
        replace_virus(input_DNA, virus, healthy_gene, healthy_DNA);
        printf("Here is your virus-free DNA : ");
        puts(healthy_DNA);
    }
    else
    {
        printf("Congrulation! You have a virus-free DNA!\n");
    }

    return 0;
}

string take_input(int flag)
{
    bool kontinue = false;
    while (!kontinue)
    {
        if (flag == 1)
        {
            string input_DNA = get_string("Enter the DNA sequence [A, G, T, C]: ");
            kontinue = check_DNA(input_DNA);
            if (kontinue)
            {
                return input_DNA;
            }
        }

        else if (flag == 2)
        {
            string input_DNA = get_string("Enter the Virus [A, G, T, C] : ");
            kontinue = check_DNA(input_DNA);
            if (kontinue)
            {
                return input_DNA;
            }
        }

        else
        {
            string input_DNA = get_string("Enter the healthy gene [A, G, T, C] : ");
            kontinue = check_DNA(input_DNA);
            if (kontinue)
            {
                return input_DNA;
            }
        }
    }
}

bool find_virus(string input_DNA, string virus)
{
    int length_dna = strlen(input_DNA);
    int length_v = strlen(virus);
    int kontinue;
    int counter;

    for (int i = 0; i < length_dna - length_v; i++)
    {
        counter = 0;
        kontinue = true;
        for (int j = 0; j < length_v && kontinue; j++)
        {
            if (input_DNA[i + j] == virus[j])
            {
                counter++;
            }

            else
            {
                kontinue = false;
            }
        }

        if (counter == length_v)
        {
            return true;
        }
    }
    return false;
}

bool check_DNA(string input_DNA)
{
    for (int i = 0; i < strlen(input_DNA); i++)
    {
        if ((input_DNA[i] != 'A' && input_DNA[i] != 'G') && (input_DNA[i] != 'T' && input_DNA[i] != 'C'))
        {
            return false;
        }
    }
    return true;
}

void replace_virus(string input_DNA, string virus, string healthy_gene, char healthy_DNA[])
{
    int length_DNA = strlen(input_DNA);
    int length_v = strlen(virus);
    int length_gene = strlen(healthy_gene);
    int index = 0;

    for (int i = 0; i < length_DNA; i++)
    {
        if (input_DNA[i] == virus[0] && check_virus(input_DNA, virus, i))
        {
            for (int j = 0; j < length_gene; j++)
            {
                healthy_DNA[index] = healthy_gene[j];
                index++;
            }
            i = i + length_v;
            i--;
        }

        else
        {
            healthy_DNA[index] = input_DNA[i];
            index++;
        }
    }
    healthy_DNA[index] = '\0';
}

bool check_virus(string input_DNA, string virus, int index)
{
    int length_DNA = strlen(input_DNA);
    int length_v = strlen(virus);
    int j = 0;
    for (int i = index; i < index + length_v; i++)
    {
        if (input_DNA[i] != virus[j])
        {
            return false;
        }
        j++;
    }
    return true;
}