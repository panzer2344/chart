#include "stdafx.h"
#include "TPoint.h"


TPoint::TPoint(int _x, int _y){
	x = _x;
	y = _y;
}


TPoint::~TPoint()
{
}

void TPoint::Show(Graphics^ gr) {
	gr->FillEllipse(Brushes::Black, x - 2, y - 2, 2, 2);
	visible = true;
}

void TPoint::Hide(Graphics^ gr) {
	gr->FillEllipse(Brushes::White, x - 2, y - 2, 2, 2);
	visible = true;
}

void TPoint::Move(Graphics^ gr, int dx, int dy) {
	Hide(gr);
	x += dx;
	y += dy;
	Show(gr);
}

int TPoint::GetX() {
	return x;
}

int TPoint::GetY() {
	return y;
}

void TPoint::SetX(int _x) {
	x = _x;
}

void TPoint::SetY(int _y) {
	y = _y;
}


