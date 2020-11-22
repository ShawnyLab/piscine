/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 21:43:09 by marvin            #+#    #+#             */
/*   Updated: 2020/11/22 21:43:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int len;
char arr[10];

void show_ans(int a, int b)
{
    int i;
    
    if(b == len)
    {
        write(1, arr, len);
        write(1, ", ", 2);
        return;
    }
    if(a == 9)
        return;
        
    i = a;
    while (++i <= 10 - len + b)
    {
        arr[b] = '0' + i;
        show_ans(i,b+1);
    }
}

void	tail(int i)
{
	char c;

	while (i <= 9)
	{
		c = '0' + i++;
		write(1, &c, 1);
	}
}


void main(int n)
{
    n = 5;
    int m;
    
    m = 0;
    len = n;
    
    while(m < 10 - n)
    {
        arr[0] = '0' + m;
        show_ans(m++, 1);
    }
    tail(m);
}