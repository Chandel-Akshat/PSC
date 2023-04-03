#include <stdio.h>
void replaceCharacter(char input[], char c1, char c2)
{
    // Write your code here
    int s = 0;
    int i = 0;
    for (i = 0; input[i] != '\0'; i++)
    {
        if (input[i] == c1)
        {
            input[i] = c2;
        }
    }
}
int main()
{
    char input[1000000], c1, c2;
    scanf("%[^\n]%*c%c %c", input, &c1, &c2);
    replaceCharacter(input, c1, c2);
    printf("%s", input);
}
