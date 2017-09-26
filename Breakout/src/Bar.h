#pragma once

#include "ofMain.h"

class Bar {
private:
	int x, y;
	int width, height;
	bool endflag;
	int gh;

private:
	void Draw();
	void keyGet();
	void Destroy();

public:
	Bar();
	~Bar();
	bool all();
	int getX();
	int getY();
	int getWidth();
	int getHeight();
};