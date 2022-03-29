/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 13:52:04 by kczichow          #+#    #+#             */
/*   Updated: 2022/03/25 13:57:09 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strnstr(char *haystack, char *needle, size_t len)
{
  size_t  i;
  size_t  j;

  i = 0;
  j = 0;

  if (needle[j] == '\0')
    return (haystack);

  while (haystack[i] != '\0' && i < len)
  {
    j = 0;
    if (haystack[i] == needle[j])
    {
      while (haystack[i+j] == needle[j] && haystack[i+j] != '\0' && (i+j < len))
      {
        if (needle[j+1] == '\0')
          return (&haystack[i]);
          j++;
      }
    }
    i++;
  }
  return (0);
}

int main()
{
	char str1[20] = "ABCDEFGHIJKLMN";
  char str2[20] = "JKL";
	size_t len;
	len = 10;

	printf("%s\n", ft_strnstr(str1,str2,len));

	printf("%s\n", strnstr(str1,str2,len));

	return (0);
}
