namespace Shapes{
class Triangle{
    public:
Triangle();
Triangle(float Base, float Height);
~Triangle();


private:
float base;
float height;

public:
void setBase(float newBase);
void setHeight(float newHeight);
float getBase();
float getHeight();
float calculateArea();


};
}
