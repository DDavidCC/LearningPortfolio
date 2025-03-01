#include <cs50.h>
#include <string.h>
#include <stdio.h>

int main (void){

    string names[] = {"David", "Micheal", "Jimmy", "Omen", "Saint"};

    string n = get_string("Input Name: ");

    for (int i = 0; i < 5; i++)
    {
        if (strcmp(names[i], n) == 0)
        {
            printf("%s Found", names[i]);
            return 0;
        }
    }

    printf("Name not found\n");
    return 1;
}
