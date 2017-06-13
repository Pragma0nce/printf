/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 11:34:22 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/06/13 14:47:32 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARGUMENT_H
# define ARGUMENT_H

typedef struct s_argument t_argument;

struct  s_argument
{
    char        *flags;
    int         field_width;
    int         precision;
    char        *length_modifier;
    char        *conversion_specifier;
    t_argument  *next;

};

#endif
