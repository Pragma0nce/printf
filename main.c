/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 11:46:01 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/06/13 14:47:21 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <ctype.h>
#include "argument.h"
#include "main.h"

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(const char *str)
{
    while (*str)
    {
        ft_putchar(*str++);
    }
}

char    is_specifier(char s)
{
    if (s == 's' || s == 'S' || s == 'p' || s == 'd' || s == 'D' || s == 'i'
            || s == 'i' || s == 'o' || s == 'O' || s == 'u' || s == 'U' || s == 'x'
            || s == 'X' || s == 'c' || s == 'C')
    {
        return (s);
    }
    return (0);
}

char     *is_length_modifier(char *str)
{
    if ((*str == 'h' && *(str + 1) == 'h') || *str == 'h' || *str == 'l'
        || (*str == 'l' && *(str + 1)  == 'l') || *str == 'j' || *str == 'z')
        return (str);
    else
        return (NULL);
}

int ft_printf(const char *format, ...)
{
    int i;
    int len_arg;
    int arg_integer;
    const char *start;
    char temp[50];
    t_argument *arg_list;

    va_list args;
    va_start(args, format);
    start = NULL;
    len_arg = 0;
    arg_list = NULL;
    i = 0;
    while (format[i])
    {
        if (format[i] == '%')
            start = &format[i];
        
		if (start != NULL)
        {
            len_arg++;
            if (is_specifier(format[i]))
            {
                strncpy(temp, start, len_arg);
                // Null terminate temp
                temp[len_arg] = '\0';
                printf("LEN ARG IS: %d\n", len_arg);
				char flags[20];
				int width;
				int precision;
                char length_modifier[3];

			    extract_flags(temp, flags);
				width = extract_field_width(temp);
				precision = extract_precision(temp);
                extract_length_modifier(temp, length_modifier);

				printf("FORMAT: %s\n", temp);
			    printf("FLAGS: %s\n", flags);
				printf("FIELD WIDTH: %d\n", width);	
            	printf("PRECISION: %d\n", precision);
                printf("LENGTH MODIFIER: %s\n", length_modifier);
			}
        }
        i++;
    }
	return (1);
}



int main(void)
{
    ft_printf("yooh%+-5.2lld");
	return (1);
}
