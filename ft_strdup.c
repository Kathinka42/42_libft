
#include <string.h>
#include <stdio.h>

// save a copy of a string;
// The strdup()function allocates sufficient memory for a copy of the string s,
// does the copy, and returns a pointer to it.  The pointer may
// subsequently be used as an argument to the function free(3).

ft_strlen(str);
char *ft_strdup(const char *str1)
{
  char *str2;
  unsigned int i;
  i = ft_strlen(str);

  str2 = (char*) malloc(i);
  if (str2 == NULL)
  {
    return (0);
  }
  else
  {
    ft_strlcpy(str1, str2, i);
  }

}
