
namespace Shapes{

class Square{
    public:
    Square();
    Square(float sideLength);
    ~Square();


private:
float sideLength;


public:
void setSideLength(float sideLength);
float getSideLength();
float calculateArea();


};

}
