#pragma once

template <typename T>
void swap(T &val1, T &val2) {
	T tmp = val1;
	val1 = val2;
	val2 = tmp;
}

template <typename T> 
T& min(T& val1, T& val2) {
	return ((val1 < val2) ? val1 : val2);
}

template <typename T> 
T& max(T& val1, T& val2) {
	return ((val1 > val2) ? val1 : val2);
}