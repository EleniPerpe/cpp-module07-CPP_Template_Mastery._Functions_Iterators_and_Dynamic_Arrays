/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 14:02:17 by eperperi          #+#    #+#             */
/*   Updated: 2025/01/17 16:24:03 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T, typename F>
void iter(T* array, int length, F func)
{
	for (int i = 0; i < length; i++)
		func(array[i]);
}

template <typename T>
void printArray(T array)
{
	std::cout << "[" << array << "] " << std::endl;
}

template <typename T>
void printExtra(T array)
{
	std::cout << "** [" << array << "] ** " << std::endl;
}

template <typename T>
void addTwo(T& array)
{
	array += 2;
}
