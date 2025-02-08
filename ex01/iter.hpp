/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 17:33:50 by linyao            #+#    #+#             */
/*   Updated: 2025/02/08 17:53:00 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template <typename T>
void iter(T *arr, size_t len, void (*f)(T const &))
{
    if (arr == NULL || f == NULL)
        return ;
    for (size_t i = 0; i < len; i++)
        f(arr[i]);
}

template <typename T>
void func(T const &para)
{
    std::cout << "func: " << para << std::endl;
}
