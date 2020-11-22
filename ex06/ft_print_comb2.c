/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.C                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 21:41:52 by marvin            #+#    #+#             */
/*   Updated: 2020/11/22 21:41:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void change_arr(char *arr,int n)
{
    write(1, &arr , n);
}

void main(int n)
{
    n = 2;
    if(n <= 0 || n >= 10 )
        return;
    else 
    {
        char arr[n];
        arr[0] = '1';
        arr[1] = '2';
        change_arr(arr, n);
    }
}