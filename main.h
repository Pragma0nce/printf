/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 12:40:48 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/06/16 13:37:48 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
 #define MAIN_H

#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include "argument.h"

void	    extract_flags(char *str, char *dest);
int		    extract_field_width(char *str);
int		    extract_precision(char *str);
void	    extract_length_modifier(char *str, char *dest);
char	    extract_conversion_specifier(char *str);
char        *is_length_modifier(char *str);
char		is_specifier(char str);
t_argument  add_argument(t_argument *list, char *f, int fw, int prce, char *lm, char *cs);

void	process_conversion(char converter, char *output, int value);
void	process_flags(char *flags, char converter,  char *output);

#endif
