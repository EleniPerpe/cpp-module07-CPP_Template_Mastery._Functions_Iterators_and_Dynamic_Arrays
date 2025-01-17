/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 14:01:26 by eperperi          #+#    #+#             */
/*   Updated: 2025/01/17 16:30:05 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void roundFloat(float& f);

int main()
{
	int intArray[] = {43, 67, -2, 54, 45, 87};
	int intArraySize = sizeof(intArray) / sizeof(intArray[0]);
	char charArray[] = {'c', 'h', 'm', 'b', 'e', 'p', 'g'};
	int charArraySize = sizeof(charArray);
	float floatArray[] = {43.7, 78.9, 23.0, 32.78, 56.788, 90.3};
	int floatArraySize = sizeof(floatArray) / sizeof(floatArray[0]);

	iter(intArray, intArraySize, printArray<int>);
	std::cout << std::endl;
	iter(intArray, intArraySize, addTwo<int>);
	std::cout << std::endl;
	iter(intArray, intArraySize, printArray<int>);
	std::cout << std::endl;
	iter(intArray, intArraySize, printExtra<int>);
	std::cout << std::endl;
	iter(charArray, charArraySize, printArray<char>);
	std::cout << std::endl;
	iter(charArray, charArraySize, addTwo<char>);
	std::cout << std::endl;
	iter(charArray, charArraySize, printExtra<char>);
	std::cout << std::endl;
	iter(floatArray, floatArraySize, printArray<float>);
	std::cout << std::endl;	
	iter(floatArray, floatArraySize, roundFloat);
	std::cout << std::endl;
	iter(floatArray, floatArraySize, printExtra<float>);
}

void roundFloat(float& f)
{
	f = ::round(f);
}