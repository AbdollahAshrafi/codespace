#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[] = {"carter", "david"};
    string numbers[] = {"+1-617_495_1000", "+1-978-234-1239"};

    string name = get_string("name: ");
    for (int i = 0; i < 2; i++)
    {
        if (strcmp(names[i], name) == 0)
        {
            printf("Found %s\n", numbers[i]);
            return 0;
        }
    }
    printf("not found\n");
    return 1;
}