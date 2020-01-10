#include <unistd.h>
void ft_putchar( char c)
{
  write(1, &c, 1);
}

void  ft_print_alphabet(void)
{
  int x;

  x = 97;
  while(x <= 122)
    {
      ft_putchar(x);
      x = x + 1;
    }

}
int   main()
{
  ft_print_alphabet();
  return (0);
}
