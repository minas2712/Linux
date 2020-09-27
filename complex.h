//
// Created by Julia on 20.09.2020.
//
#pragma once
#ifndef COMPLEX_H
#define COMPLEX_H
#include <vector>

class Complex {
private:
    double Re;
    double Im;
public:
    Complex();
    Complex(double re, double im);
    double getRe() const;
    double getIm() const;
    void setRe(double Re);
    void setIm(double Im);
    Complex operator+(Complex c);
    Complex operator-(Complex c);
    Complex operator*(double c);
    Complex operator<(Complex c);
    double absvalue();

    void Display();

    ~Complex();
};
#endif
