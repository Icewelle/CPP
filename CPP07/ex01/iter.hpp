#pragma once

#include <cstddef>

template <typename T, typename F>
void	iter(T& array, std::size_t len, F function) {
	for (std::size_t i = 0; i < len; ++i) {
		function(array[i]);
	}
}