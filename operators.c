/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:57:41 by cjimenez          #+#    #+#             */
/*   Updated: 2022/03/14 08:51:36 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void    ft_push(t_stack **src, t_stack **dest)
{
    t_stack *first;
    t_stack *second;

    first = *src;
    if (first == NULL)
        return  ;
    *src = first->next;
    second = *dest;
    *dest = first;
    (*dest)->next = second;
}

void    ft_swap(t_stack **src)
{
    t_stack *first;
    t_stack *second;

    first = *src;
    if (first != NULL && first->next != NULL)
    {
        first = *src;
        second = first->next->next;
        *src = first->next;
        (*src)->next = first;
        (*src)->next->next = second;
    }
}

void    ft_rotate(t_stack **src)
{
    t_stack *first;
    t_stack *content;

    if (*src != NULL && (*src)->next != NULL )
    {
        first = *src;
        *src = first->next;
        content = *src;
        while (content->next != NULL)
            content = content->next;
        content->next = first;
        first->next = NULL;
    }

}