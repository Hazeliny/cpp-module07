/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 12:59:51 by linyao            #+#    #+#             */
/*   Updated: 2025/02/08 21:03:12 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main( void )
{
    int *a = new int();
    std::cout << *a << std::endl;
    delete a;
    
    Array<int> arrInt(2);
    std::cout << arrInt.size() << std::endl;
    
    Array<int> n(300);
    int *nptr = new int[300];
    std::cout << n.size() << std::endl;
    
    srand(time(NULL));
    for (int i = 0; i < 300; i++)
    {
        const int v = rand();
        n[i] = v;
        nptr[i] = v;
    }
    std::cout << "the first 6 elements of the original array n: ";
    for (int i = 0; i < 6; i++)
    {
        std::cout << n[i] << " ";
    }
    std::cout << std::endl;
    for (int i = 0; i < 300; i++)
    {
        if (nptr[i] != n[i])
        {
            std::cerr << "failed to save the same value!" << std::endl;
            return 1;
        }
    }
    
    Array<int> tmp = n;
    Array<int> cp(tmp);
    std::cout << "the first 6 elements of the array cp (after copying and operator= assigning): ";
    for (int i = 0; i < 6; i++)
    {
        std::cout << cp[i] << " ";
    }
    std::cout << std::endl;

    try
    {
        n[-3] = 0; 
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        n[300] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    for (int i = 0; i < 300; i++)
        n[i] = rand();
    delete [] nptr;
    
    Array<int> tmpp(3);
    for (int i = 0; i < 3; i++)
        tmpp[i] = i;
    Array<std::string> strr(5);
    for (int i = 0; i < 5; i++)
        strr[i] = "cpp";
    std::cout << tmpp << std::endl;
    std::cout << strr << std::endl;
        
    return 0;
}
