/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 23:01:27 by slazar            #+#    #+#             */
/*   Updated: 2024/11/25 00:18:36 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	try
	{
		Array<int> intArray(5);
		Array<std::string> stringArray(5);
		Array<char> charArray(5);

		for (unsigned int i = 0; i < intArray.size(); i++)
		{
			intArray[i] = i;
			stringArray[i] = "string_" + std::to_string(i);
			charArray[i] = i + 'a';
		}
		Array<int>intArrayCopy(intArray);
		for (unsigned int i = 0; i < intArray.size(); i++)
		{
			std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
			std::cout << "intArrayCopy[" << i << "] = " << intArrayCopy[i] << std::endl;
			std::cout << "stringArray[" << i << "] = " << stringArray[i] << std::endl;
			std::cout << "charArray[" << i << "] = " << charArray[i] << std::endl << std::endl;
		}
		std::cout << "charArray[" << 42 << "] = " << charArray[42] << std::endl << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}