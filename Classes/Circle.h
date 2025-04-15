
namespace Shapes{


class Circle{
    public:
Circle();
Circle(float Radius);
~Circle();


private:
float radius;


public:
void setRadius(float newRadius);
float getRadius();
float calculateArea();

};
}
