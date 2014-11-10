/*
Given an equation involving any number of fluent quantities to find the fluxions, and vice versa." Newton */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void caesar (int key, char message[])
{ 
    int i;
    char c;
    for (i = 0; i < strlen(message); i++)
    {
        c = message[i];
        if (islower(c))
        {
            c = 'a' + (c - 'a' + key)%26;
        }
        else if (isupper(c))
        {
            c = 'A' + (c - 'A' + key)%26;
        }
        printf("%c", c);
    }
    printf("\n");
}

int main(void)
{
    char message[] = "Libi imycibqwvm ycwbkcvycm ntcmvbma ycivbqbibma"
                 " qvdwtdmvbm, ntcfqwvma qvdmvqzm: mb dqkm dmzai";
    int i;
    
    for(i = 1; i < 26; i++)
    {
        caesar(i, message);
    }             
    return 0;
}
