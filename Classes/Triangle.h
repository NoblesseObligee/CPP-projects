#pragma once

namespace Shapes{
class Triangle{
    public:
Triangle();
Triangle(float Base, float Height);
~Triangle();
void setBase(float newBase);
void setHeight(float newHeight);
float getBase() const;
float getHeight() const;


private:
float base;
float height;





};

}
