/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 12:40:48 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/06/13 15:11:47 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
 #define MAIN_H

#include <stdlib.h>
#include <ctype.h>

void	extract_flags(char *str, char *dest);
int		extract_field_width(char *str);
int		extract_precision(char *str);
void	extract_length_modifer(char *str);
void	extract_conversion_specifier(char *str);

#endif
