#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

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

t_argument  *add_argument(t_argument *list, char *f, int fw, int prec, char *lm, char *cs)
{
    t_argument *argument;
    
    argument = (t_argument*)malloc(sizeof(t_argument));
    if (!argument)
        return (NULL);
    argument->next = list;
    argument->flags = f;
    argument->field_width = fw;
    argument->precision = prec;
    argument->length_modifier = lm;
    argument->conversion_specifier = cs;
    return (argument);
}

char	*extract_flags(char *str, char *dest)
{
	int i;

	i = 0;
	while (str[i] && (str[i] == '#' || str[i] == '0' || str[i] == '-' || str[i] == '+' || str[i] == ' '))
	{
		dest[i] = str[i];
		i++;
	}
}

int		extract_field_width(char *str)
{
	return (atoi(str));
}

int		extract_precision(char *str)
{
	int i;

	i = 0;
	// Skip over all characters until the period is found.
	while (str[i] && str[i] != '.')
		i++;
}	return (atoi(&str[i]));

char	*extract_length_modifier(char *str)
{

}

char	*extract_conversion_specifier(char *str)
{

}

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

char   * process_conversion(const char *str)
{

}

int    is_specifier(const char s)
{
    if (s == 's' || s == 'S' || s == 'p' || s == 'd' || s == 'D' || s == 'i'
            || s == 'i' || s == 'o' || s == 'O' || s == 'u' || s == 'U' || s == 'x'
            || s == 'X' || s == 'c' || s == 'C')
    {
        return (1);
    }
    return (0);
}

int ft_printf(const char *format, ...)
{
    int i;
    int len_arg;
    int arg_integer;
    const char *start;
    char temp[20];
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

                printf("LEN ARG IS: %s\n", temp);    
            }
        }
        i++;
    }
}



int main(void)
{
    ft_printf("yooh%++--d");
}
