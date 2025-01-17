/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:51:38 by eperperi          #+#    #+#             */
/*   Updated: 2025/01/17 15:53:03 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
class Array
{
	private:
		T* _array;
		size_t _size;

	public:
		Array() : _array(nullptr), _size(0) {}
		Array(size_t size) : _array(new T[size]), _size(size) {}
		Array(const Array& copy) : _array(new T[copy._size]), _size(copy._size)
		{
			for (size_t i = 0; i < this->_size; i++)
				this->_array[i] = copy._array[i];
		}
		Array& operator=(const Array& copy)
		{
			if (this == *copy)
				return *this;
			if (this->_size != copy._size)
			{
				delete [] this->_array;
				this->_size = copy._size;
				this->_array = new T[this->_size];
			}
			for (size_t i = 0; i < this->_size; i++)
				this->_array[i] = copy._array[i];
			return *this;
		}
		~Array() { delete [] _array; }
		
		size_t size() const
		{
			return this->_size;
		}

		T& operator[](size_t index)
		{
			if (index >= this->_size)
				throw OutOfBoundsException();
			return (this->_array[index]);
		}

		class OutOfBoundsException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Array out of bounds");
				}
		};

		void printArray()
		{
			for (size_t i = 0; i < this->_size; i++)
			{
				std::cout << "Position : " << i + 1 << ",  index : " << this->_array[i] << std::endl;
			}
		}
};