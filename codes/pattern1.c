#include <stdio.h>
void alphaPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c", 64 + i);
        }
        printf("\n");
    }
}

void galaxyStars(int n)
{
    int x = n / 2;
    for (int i = 0; i < n / 2 + 1; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void pyramidStars(int n)
{
    int nst = 1;
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n - i; k++)
        {
            printf("  ");
        }
        for (int j = 0; j < nst; j++)
        {
            printf("* ");
        }
        nst++;
        nst++;
        printf("\n");
    }
}

void pyramidNumber(int n)
{
    int nst = 1;
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n - i; k++)
        {
            printf("  ");
        }
        for (int j = 1; j <= nst; j++)
        {
            printf("%d ", j);
        }
        nst++;
        nst++;
        printf("\n");
    }
}

void diamondStar(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
            printf(" ");

        for (int j = 1; j <= 2 * i - 1; j++)
            printf("*");

        printf("\n");
    }

    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= i; j++)
            printf(" ");

        for (int j = 1; j <= 2 * (n - i) - 1; j++)
            printf("*");

        printf("\n");
    }
}

void diamondNumber(int n)
{
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
            printf("  ");

        for (int j = 1; j <= 2 * i - 1; j++)
            printf("%d ",j);

        printf("\n");
    }

    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("  ");

        for (int j = 1; j <= 2 * (n - i) - 1; j++)
            printf("%d ",j);

        printf("\n");
    }
}
int main()
{
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("The ALPHA PATTERN is as follow:");
    alphaPattern(rows);
    printf("\n");
    printf("The GALAXY OF STARS is as follow:\n");
    galaxyStars(rows);
    printf("\n");
    printf("The PYRAMID OF STARS is as follow:\n");
    pyramidStars(rows);
    printf("\n");
    printf("The PYRAMID OF NUMBERS is as follow:\n");
    pyramidNumber(rows);
    printf("\n");
    printf("The DIAMOND OF STAR is as follow:\n");
    diamondStar(rows);
    printf("\n");
    printf("The DIAMOND OF NUMBERS is as follow:\n");
    diamondNumber(rows);
    printf("\n");
}