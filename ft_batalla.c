#include <unistd.h>

void ft_batalla(int d)
{
int a;
int b;
char c;

a = 1;
b = 1;
while (d < 51)
    {
        if (d == a * 2 && d == b * 9)
        {
            write(1, "Bulbasaur\n", 10);
            d++;
            a++;
            b++;
        }
        else if(d == a * 2)
        {
            write(1, "Charmander\n", 11);
            d++;
            a++;
        }
        else if (d == b * 9)
        {
            write(1, "Squirtle\n", 9);
            d++;
            b++;
        }
        else if (d < 10)
        {
            c = d + '0';
            write (1, &c, 1);
            write (1, "\n", 1);
            d++;
        }
        else if (d > 9)
            {
            c = d/10 + '0';
            write(1, &c, 1);
            c = d%10 + '0';
            write(1, &c, 1);
            write(1, "\n", 1);
            d++;
            }
    }
}

int main(void)
{
    ft_batalla(1);
    return (0);
}
