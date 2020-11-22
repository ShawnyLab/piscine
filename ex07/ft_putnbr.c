/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 21:39:17 by marvin            #+#    #+#             */
/*   Updated: 2020/11/22 21:39:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void change(int nb)
{
    char ans;
    
    if(nb == 0)
        return;
    change(nb / 10);
    ans = '0' + nb % 10;
    write(1, &ans, 1);
}




void ft_putnbr(int nb)
{
    char tail;
    
    if(nb < 0)
    {
        write(1, "-", 1);
        change(-(nb/10));
        tail = '0' - nb % 10;
    }
    else
    {
        change(nb/10);
        tail = '0' + nb % 10;
    }
    write(1, &tail, 1);
}
