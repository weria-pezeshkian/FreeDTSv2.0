#if !defined(AFX_Vec3D_H_8F4421B8_D12D_11D3_CF24_124095086555__INCLUDED_)
#define AFX_Vec3D_H_8F4421B8_D12D_11D3_CF24_124095086555__INCLUDED_

#include <iostream>
#include <cmath>
/*******************
 Weria Pezeshkian (weria.pezeshkian@gmail.com)
 Copyright (c) Weria Pezeshkian
 An inhouse made  3d vector object.
 *******************/
class Vec3D {
public:
    Vec3D(double x = 0.0, double y = 0.0, double z = 0.0);
    double& operator()(const int n);
    Vec3D operator+(const Vec3D& other) const;
    Vec3D operator-(const Vec3D& other) const;
    Vec3D operator*(const Vec3D& other) const;
    Vec3D operator*(double scalar) const;
    void operator=(const Vec3D& other);
    double norm() const;
    static double dot(const Vec3D& v1, const Vec3D& v2);
private:
    double m_X;
    double m_Y;
    double m_Z;
};


/*
#include <vector>

class Vec3D
{
public:
	Vec3D(double x,double y,double z);
    Vec3D();
    ~Vec3D();
    
public:
    // some access functions (not needed ....)
    double at( int n);
    void put( int n,  double);
private:
    double m_X;
    double m_Y;
    double m_Z;
    double m_Value;

// vector operators
public:
double& operator()(const int n);
Vec3D operator + (Vec3D);
Vec3D operator - (Vec3D);
Vec3D operator * (Vec3D);
Vec3D operator * (double );
void operator = (Vec3D);
    
// extra functions
double dot(Vec3D,Vec3D);  // dot product
double norm();             // size of the vector


};

 */
#endif
