#include "Line.h"

void Line::setFirst(int firstValue) {
	first = (firstValue != 0) ? firstValue : 10;
}

void Line::Init(int first, int second) {
	setFirst(first);
	setSecond(second);
}

int Line::function(int x) {
	return getFirst() * x + getSecond();
}
