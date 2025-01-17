/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 13:20:45 by eperperi          #+#    #+#             */
/*   Updated: 2025/01/17 16:01:40 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main( void ) 
{
	
int a = 2;
int b = 3;
std::cout << "a = " << a << ", b = " << b << std::endl;
::swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

std::string c = "banana";
std::string d = "apple";
std::cout << "c = " << c << ", d = " << d << std::endl;
::swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

double e = 42.424242;
double f = 35.353535;
std::cout << "e = " << e << ", f = " << f << std::endl;
::swap(e, f);
std::cout << "e = " << e << ", f = " << f << std::endl;
std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
std::cout << "max( e, f) = " << ::max( e, f ) << std::endl;

return 0;
}