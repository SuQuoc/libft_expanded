/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Testing_Library.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtran <qtran@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 13:35:38 by qtran             #+#    #+#             */
/*   Updated: 2022/12/28 13:39:56 by qtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main (void)
{
    //PRINTF
    /* printf(""); */

    printf("%d", ft_printf("123456"));
    printf("|\n\n");

    ft_printf("%%c: Fuck printf %c", 64);
    printf("|\n\n");
    
    ft_printf("%%d: Fuck printf %d", 5);
    printf("|\n\n");

    ft_printf("%%i: Fuck printf %i", -41234342342423);
    printf("|\n\n");

    ft_printf("%%u: Fuck printf %u", -423);
    printf("|\n\n");

    ft_printf("%%u: Fuck printf %u", -423);
    printf("|\n\n");

    ft_printf("%%x: Fuck printf %x", 1234);
    printf("|\n\n");

    ft_printf("%%X: Fuck printf %X", 1234);
    printf("|\n\n");

    char c = 'A';
    void * ptr = &c;
    /* unsigned long add = (unsigned long)ptr;
    printf("\nTesting the int with x: %li\n", add); */
    
    printf("Testing void * pointer\nchar &c = %c\nvoid ptr = c\nOriginal: %p\n", c, ptr);
    ft_printf("\nMy printf: %p", ptr);

    printf("\n----------------\nSame test but different:\nOriginal: %p\n", (void *)123);
    ft_printf("\nMy printf: %p", (void * )123);
    return 0;

    //GNL
}
