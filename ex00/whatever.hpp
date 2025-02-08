/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 17:22:11 by linyao            #+#    #+#             */
/*   Updated: 2025/02/08 17:25:28 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template <typename T>
void swap(T &a, T &b)
{
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T &min(T &a, T &b)
{
    return (a < b ? a : b);
}

template <typename T>
T &max(T &a, T &b)
{
    return (a > b ? a : b);
}
