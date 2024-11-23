/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 18:49:21 by slazar            #+#    #+#             */
/*   Updated: 2024/11/23 20:53:01 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "iter.hpp"
#include <iostream>

void print(int const &i) {
	std::cout << i << std::endl;
}

void print(std::string const &s) {
	std::cout << s << std::endl;
}

void print(char const &c) {
	std::cout << c << std::endl;
}

int main() {
	int intArray[] = {1, 2, 3, 4, 5};
	std::string stringArray[] = {"one", "two", "three", "four", "five"};
	char charArray[] = {'a', 'b', 'c', 'd', 'e'};
	
	iter(intArray, 5, print);
	iter(stringArray, 5, print);
	iter(charArray, 5, print);
	return 0;
}