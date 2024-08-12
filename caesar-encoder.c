#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool only_digits(string key);
char rotate(char text, int key);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s key\n", argv[0]);
        return 1;
    }
    else if (only_digits(argv[1]) != true)
    {
        printf("Usage: %s key\n", argv[0]);
        return 1;
    }

    int key = atoi(argv[1]);

    string plaintext = get_string("Plaintext: ");

    printf("ciphertext: ");
    for (int i = 0; i < strlen(plaintext); i++)
    {
        char ctext = rotate(plaintext[i], key);
        printf("%c", ctext);
    }
    printf("\n");
}

bool only_digits(string key)
{
    for (int i = 0; i < strlen(key); i++)
    {
        if (!isdigit(key[i]))
        {
            return false;
        }
    }
    return true;
}

char rotate(char text, int key)
{
    if (isupper(text))
    {
        char uletter = (char) ((((int) text - (int) 'A' + key) % 26) + (int) 'A');
        return uletter;
    }
    else if (islower(text))
    {
        char lletter = (char) ((((int) text - (int) 'a' + key) % 26) + (int) 'a');
        return lletter;
    }
    else
    {
        return text;
    }
}
