#pragma once
class Line
{
private:
	int first;
	int second;

public:
	void setFirst(int firstValue);
	void setSecond(int secondValue) {
		second = secondValue;
	}

	int getFirst() {
		return first;
	}
	int getSecond() {
		return second;
	}

	void Init(int first, int second);

	int function(int x);
};

