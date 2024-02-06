#ifndef RECTANGLETYPE_H
#define RECTANGLETYPE_H


class rectangleType
{
    public:
        rectangleType();
        // init length and width = 0
        rectangleType(double l, double w);
        // init using given params
        void setDimension(double l, double w);
        // sets length and width using given params
        double getLength() const;
        // returns length
        double getWidth() const;
        // returns width
        double area() const;
        // returns area = length x width
        double perimeter() const;
        // returns perimeter = 2 x (area)
        void print() const;
        // prints -> Length = l; Width = width

        // one variable associated with all objects -> will be affected by derived class if associated
        static int y;

        ~rectangleType();
    protected:
    private:
        double length;
        double width;
};

#endif // RECTANGLETYPE_H
