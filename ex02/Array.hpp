/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 23:00:41 by slazar            #+#    #+#             */
/*   Updated: 2024/11/25 00:16:02 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
class Array {
	private:
		T *_array;
		unsigned int _size;
	public:
		Array() : _array(NULL), _size(0) {}
		Array(unsigned int n) : _array(new T[n]), _size(n) {}
		Array(const Array &src) : _array(NULL), _size(0) {
			*this = src;
		}
		~Array() {
			if (_array) {
				delete[] _array;
			}
		}

		Array &operator=(const Array &rhs) {
			if (this != &rhs) {
				if (_array) {
					delete[] _array;
				}
				_size = rhs._size;
				_array = new T[_size];
				for (unsigned int i = 0; i < _size; i++) {
					_array[i] = rhs._array[i];
				}
			}
			return *this;
		}

		T &operator[](unsigned int i) {
			if (i >= _size) {
				throw std::out_of_range("Index out of range");
			}
			return _array[i];
		}

		unsigned int size() const {
			return _size;
		}

};