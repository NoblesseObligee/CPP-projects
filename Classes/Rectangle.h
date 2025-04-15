

class Rectangle{

public:
Rectangle();
Rectangle(float Length, float Width);


private:
    float length;
    float width;

public:
    void setLength(float Length);
    void setWidth(float Width);
    float getLength();
    float getWidth();
    float calculateArea();


};
