#pragma once
struct Vec2
{
	float x, y;
};

class Ishape
{
public:
	Ishape() {};
	virtual ~Ishape() {};

	virtual void Siz() = 0;
	virtual void Draw() = 0;
	
	void SetSiz(Vec2 siz) { siz_ = siz; }
	void SetArea(float area) { area_ = area; }

	Vec2 GetSiz() { return siz_; }
	float GetArea() { return area_; }

private:

	Vec2 siz_ = {};
	float area_ = {};
};

