/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_intra.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 18:05:42 by eperperi          #+#    #+#             */
/*   Updated: 2025/01/17 18:21:32 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Array.hpp"

#define MAX_VAL 15

int main(void)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
		Array<int> empty;
        Array<int> tmp = numbers;
        Array<int> test(tmp);
		
		empty.printArray();
		tmp.printArray();
		test.printArray();
    }

	
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
		std::cout << i + 1 << " : " << numbers[i] << ", " << mirror[i] << std::endl;
    }
	
	// numbers.printArray();
	// std::cout << std::endl;

    try
    {
        numbers[2] = 0;
		std::cout << "Access succesfull" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[80] = 0;
		std::cout << "Access succesfull" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
		std::cout << i + 1 << " : " << numbers[i] << ", " << mirror[i] << std::endl;
		// if (mirror[i] != numbers[i])
        // {
        //     std::cerr << "didn't save the same value!!" << std::endl;
        //     return 1;
        // }
    }
    delete [] mirror;//
    return 0;
}