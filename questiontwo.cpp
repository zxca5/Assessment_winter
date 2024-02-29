/**
 * @file question_second.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-01-26
 * 
 * @copyright Copyright (c) 2024
 * 
 */

 /*
 创建一个 C++ 程序，定义一个带有虚函数 calculateArea 的基类 Shape。
 从基类派生出两个类 Circle 和 Rectangle。在每个派生类中实现 calculateArea 函数，
 分别计算圆形和矩形的面积。在主函数中，创建两个派生类的实例，
 分别调用 calculateArea 函数，并显示结果。
 */

 #include <iostream>
 using namespace std;

class Shape {
public:
    virtual void calculateArea()
    {
        
    }
    
};

class Circle : public Shape {
    public:
    double r;
    double pai=3.14;
    Circle( double radius) 
    {
        r=radius;
    }   
    void calculateArea()
    {
        double result;
        result=r*r*pai;
        cout << "圆的面积为：  "<< result <<endl;    
    }

};


class Rectangle : public Shape {
    public:
    double length;
    double width;
    Rectangle( double l,double w) 
    {
        length=l;
        width=w;
    }   
    void calculateArea()
    {
        cout << "长方形的面积为：  "<< length*width <<endl;    
    }

};

int main() {
    //补充你的代码
    double r;
    cin >> r ;
    Circle cat(r);
    cat.calculateArea();
    double l,w;
    cin >> l  ;
    cin >> w ;
    Rectangle dog(l,w);
    dog.calculateArea();
}