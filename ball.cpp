#include "ball.h"

Ball::Ball(int new_x, int new_y):
    x(new_x),
    y(new_y)
{}

void Ball::step(int new_x, int new_y)
{
    x += new_x;
    y += new_y;
}

Ball *Ball::clone(int new_x, int new_y)
{
    return new Ball(x + new_x, y + new_y);
}

Ball::~Ball(){}
