/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:30:58 by kczichow          #+#    #+#             */
/*   Updated: 2022/04/06 17:44:02 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <string.h>
# include <ctype.h>
# include <stdlib.h>

int		ft_isalpha(int i);
int		ft_isdigit(int i);
int		ft_isalnum(int i);
int		ft_isascii(int i);
int		ft_isprint(int i);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *str1, int c, size_t len);
void	*ft_bzero(void *str1, size_t len);
void	*ft_memcpy(void *dst1, const void *src, size_t n);
void	*ft_memmove(void *dst1, const void *src, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char	*dst, const char *src, size_t dstsize);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
void	*ft_memchr(const void	*str1, int c, size_t	n);
int		ft_memcmp(const void *str1, const void *str2, size_t	n);
char	*ft_strnstr(const char	*haystack, const char	*needle, size_t	len);
int		ft_atoi(const char *str);
void	*ft_calloc(size_t	count, size_t	size);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const   *s, unsigned int	start, size_t	len);
char	*ft_strjoin(char const	*s1, char const	*s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);

#endif