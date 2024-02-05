#pragma once
struct Vec2
{
	float x, y;
};

class IShape
{
public:
	IShape() {};
	virtual ~IShape() {};

	virtual void Size() = 0;
	virtual void Draw() = 0;
	
	void SetSize(Vec2 siz) { siz_ = siz; }
	void SetArea(float area) { area_ = area; }

	Vec2 GetSize() { return siz_; }
	float GetArea() { return area_; }

private:

	Vec2 siz_ = {};
	float area_ = {};
};

