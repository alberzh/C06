#include <unistd.h>

void ft_putnbr(int n)
{
    char c;
    if (n > 9)
    {
        c = n / 10 + '0';
        write(1, &c, 1);
    }
    c = n % 10 + '0';
    write(1, &c, 1);
    write(1, "\n", 1);
}

void ft_batalla(int d)
{
    while (d <= 50)
    {
        if (d % 18 == 0)  // Múltiplo de 2 y 9
            write(1, "Bulbasaur\n", 10);
        else if (d % 2 == 0)  // Múltiplo de 2
            write(1, "Charmander\n", 11);
        else if (d % 9 == 0)  // Múltiplo de 9
            write(1, "Squirtle\n", 9);
        else
            ft_putnbr(d);
        d++;
    }
}

int main(void)
{
    ft_batalla(1);
    return (0);
}
