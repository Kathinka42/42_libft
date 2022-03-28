/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:30:58 by kczichow          #+#    #+#             */
/*   Updated: 2022/03/28 19:54:07 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <string.h>
# include <ctype.h>

int	ft_isalpha(int i);
int	ft_isdigit(int i);
int	ft_isalnum(int i);
int	ft_isascii(int i);
int	ft_isprint(int i);
int	ft_strlen(char *str);
void	*ft_memset(void *str1, int c, size_t len);
void	*ft_bzero(void *str1, size_t len);
void	*ft_memcpy(void *dst1, const void *src1, size_t n);
void	*ft_memmove(void *dst1, const void *src1, size_t len);
size_t	ft_strlcpy(char *dst, char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
int	ft_toupper(int c);
int	ft_tolower(int c);
char	*ft_strchr(char *str, int c);
char	*ft_strrchr(char *str, int c);
int	ft_strncmp(char *str1, char *str2, size_t n);

#endif