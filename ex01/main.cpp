/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 12:59:51 by linyao            #+#    #+#             */
/*   Updated: 2025/02/08 17:55:52 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main( void ) {
    int a[5] = {1, 2, 3, 4, 5};
    char b[3] = {'a', 'b', 'c'};
    std::string str[6] = {"eva", "dan", "ann", "zoe", "leo", "lin"};
    ::iter(a, 5, func);
    std::cout << std::endl;
    ::iter(b, 3, func);
    std::cout << std::endl;
    ::iter(str, 6, func);
    std::cout << std::endl;
    return 0;
}
