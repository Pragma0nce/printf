/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extract_data.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 11:43:21 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/06/13 15:12:22 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void extract_flags(char *str, char *dest)
{
    int i;
    i = 1;
    while (str[i] && (str[i] == '#' || str[i] == '0' || str[i] == '-' || str[i] == '+' || str[i] == ' '))
    {
        dest[i] = str[i];
        i++;
    }
}

int     extract_field_width(char *str)
{
    // Skips over all characters that are not digits
    int  i;

    i = 0;
    while (str[i] && !isdigit(str[i]))
        i++;
    return (atoi(&str[i]));
}

int     extract_precision(char *str)
{
    int i;

    i = 0;
    // Skip over all characters until the period is found.
    while (str[i] && str[i] != '.')
        i++;
    if (str[i] == '.')
        i++;
    return (atoi(&str[i]));
}

void    extract_length_modifier(char *str)
{
}

void    extract_conversion_specifier(char *str)
{
}
