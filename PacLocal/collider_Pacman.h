#ifndef COLLIDER_PACMAN_H
#define COLLIDER_PACMAN_H
#include <algorithm> // std::min + std::max
#include <rt2d/pointx.h> // Point2

struct Rectangle 
{
	float x;
	float y;
	float width;
	float height;
	Rectangle(float x_, float y_, float w, float h) 
    {
		this->x = x_;
		this->y = y_;
		this->width = w;
		this->height = h;
	}
};
class Collider
{
public:
    static bool point2point(const Point2& point1, const Point2& point2) 
    {
		return point1 == point2;
	}
    static bool point2rectangle(const Point2& point, const Rectangle& rect) 
    {
		bool colx = point.x > rect.x && point.x < rect.x + rect.width;
		bool coly = point.y > rect.y && point.y < rect.y + rect.height;
		return colx && coly;
	}
    static bool rectangle2rectangle(const Rectangle& rect1, const Rectangle& rect2) 
    {
		return (rect1.x < rect2.x + rect2.width &&
		    rect1.x + rect1.width > rect2.x &&
		    rect1.y < rect2.y + rect2.height &&
		    rect1.y + rect1.height > rect2.y);
	}
	static bool rectangle3rectangle(const Rectangle& rect1, const Rectangle& rect3) 
    {
		return (rect1.x < rect3.x + rect3.width &&
		    rect1.x + rect1.width > rect3.x &&
		    rect1.y < rect3.y + rect3.height &&
		    rect1.y + rect1.height > rect3.y);
	}
private:
	// Disallow creating an instance of this object
	Collider() {}
};
#endif