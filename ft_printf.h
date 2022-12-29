/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtran <qtran@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:31:18 by qtran             #+#    #+#             */
/*   Updated: 2022/11/04 18:03:36 by qtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int	ft_itohex(unsigned long long n, int lower);
int	len_putchar(char c);
int	len_putstr(char *s);
int	ft_printf(const char *str, ...);
int	len_itoa(int i);
int	ft_pointer(unsigned long n);
int	ft_u(unsigned int i);

#endif