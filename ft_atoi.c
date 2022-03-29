// convert ASCII string to integer, ignore leading whitespaces;
#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str)
{
  int i;
  int  plumin;
  int number;

  i = 0;
  plumin = 1;
  while (str[i] == ' ')
  {
    i++;
  }
  if (str[i] == '-')
    {
      plumin = plumin * (-1);
      i++;
    }
    else
      i++;
  number = 0;
  while (str[i] >= '0' && str[i] <= '9')
  {
    number = number * 10 + str[i] - '0';
    i++;
  }
  return (number * plumin);
}

int main()
{
  char str[20] = " -h12345678";

  printf("%d\n", ft_atoi(str));
  printf("%d\n", atoi(str));

  return (0);
}
