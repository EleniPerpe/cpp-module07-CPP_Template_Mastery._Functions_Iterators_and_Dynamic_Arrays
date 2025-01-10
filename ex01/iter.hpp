/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 14:02:17 by eperperi          #+#    #+#             */
/*   Updated: 2025/01/10 14:38:56 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T, typename F>
void iter(T* array, int length, F func)
{
	for (int i = 0; i < length; i++)
		func(array[i], i);
}

template <typename T>
void printArray(T array, int i)
{
	std::cout << "Array position  " << i << " : " << array << std::endl;
}

template <typename T>
void printExtra(T array, int i)
{
	std::cout << "** Array position  " << i << " : " << array << " **" << std::endl;
}