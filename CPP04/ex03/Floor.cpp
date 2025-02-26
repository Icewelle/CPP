#include "Floor.hpp"

Floor::Floor() {
	for (int i = 0; i < 1000; ++i) {
		_floor[i] = NULL;
	}
}

Floor::Floor(const Floor &other) {
	*this = other;
}

Floor::~Floor() {
	for (int i = 0; i < 1000; ++i) {
		if (_floor[i]) {
			delete _floor[i];
		}
	}
}

Floor	&Floor::operator=(const Floor &other) {
	if (this != &other) {
		for (int i = 0; i < 1000; ++i) {
			if (other._floor[i])
				_floor[i] = other._floor[i];
		}
	}
	
	return (*this);
}

void	Floor::addOnFloor(AMateria *materia) {
	for (int i = 0; i < 1000; ++i) {
		if (!_floor[i]) {
			_floor[i] = materia;
			break;
		}
	}
}

void	Floor::cleanFloor(void) {
	for (int i = 0; i < 1000; ++i) {
		if (_floor[i]) {
			delete _floor[i];
			_floor[i] = NULL;
		}
	}
}