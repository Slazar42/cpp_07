/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 18:44:59 by slazar            #+#    #+#             */
/*   Updated: 2024/11/23 21:44:09 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>

void iter(T *array, int length, void (*f)(T const &)) {
	for (int i = 0; i < length; i++)
		f(array[i]);
}


