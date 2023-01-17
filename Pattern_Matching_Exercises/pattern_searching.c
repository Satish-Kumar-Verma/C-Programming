#include <stdio.h>
#include <cs50.h>
#include <stdbool.h>
#include <string.h>

bool search_pattern(string, string);
int main(void)
{
    string sentence = get_string("Enter the sentence : ");

    string word = get_string("Enter the word : ");

    if (search_pattern(sentence, word))
    {
        printf("Pattern is found in the sentence!\n");
    }

    else
    {
        printf("Pattern isn't found in the sentence!\n");
    }


    return 0;
}

bool search_pattern(string sentence, string word)
{
    int length_s = strlen(sentence);
    int length_w = strlen(word);
    bool kontinue;
    int counter;
    for (int i = 0; i < length_s - length_w; i++)
    {
        counter = 0;
        kontinue = true;
        for (int j = 0; j < length_w && kontinue; j++)
        {
            if (sentence[i + j] == word[j])
            {
                counter++;
            }

            else
            {
                kontinue = false;
            }
        }
        if (counter == length_w)
        {
            return true;
        }
    }
    return false;
}