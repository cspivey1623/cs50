#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //prompts user for name
    string name = get_string("What is your name?\n");
    printf("hello, %s\n", name);
}
