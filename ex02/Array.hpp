/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 18:04:29 by linyao            #+#    #+#             */
/*   Updated: 2025/02/08 21:02:07 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template <typename T>
class Array
{
    private:
        T               *_arr;
        unsigned int    _size;
    public:
        Array() : _arr(NULL), _size(0){}
        Array(unsigned int n) : _arr(new T[n]), _size(n){}
        Array(Array<T> const &src)
        {
            src._size ? _arr = new T[src._size] : _arr = NULL;
            _size = src._size;
            for (size_t i = 0; i < _size; i++)
            {
                _arr[i] = src._arr[i];
            }
        }
        Array &operator=(Array<T> const &src)
        {
            if (this != &src)
            {
                delete [] _arr;
                _arr = new T[src._size];
                _size = src._size;
                for (size_t i = 0; i < src._size; i++)
                    _arr[i] = src._arr[i];
            }
            return (*this);
        }
        virtual ~Array() {delete [] _arr;}
        
        T &operator[](size_t i)
        {
            if (i >= _size || !_arr)
                throw (OutOfBoundArrayException());
            return (_arr[i]);
        }

        size_t size() const {return (_size);}

        class OutOfBoundArrayException : public std::exception
        {
            public:
                virtual const char *what() const throw() {
                    return ("The index is out of bound");
                }
        };
};

template <typename T>
std::ostream &operator<<(std::ostream &o, Array<T> &arr)
{
    o << "[";
    for (size_t i = 0; i < arr.size(); i++)
    {
        o << arr[i];
        if (i < arr.size() - 1)
            std::cout << " ";
    }
    o << "]";
    return (o);
}
