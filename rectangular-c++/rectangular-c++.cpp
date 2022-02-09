#include<iostream>
using namespace std;
    float Area(int);
    double Area(double,double);
    long Area(int,int);
        float Area(int r)
        {
            return(3.1416*r*r);
        }
        double Area(double l,double w)
        {
            return(l*w);
        }
        long Area(int b,int h)
        {
            return(0.5*b*h);
        }
int main()
{   
    int r,b,h;
    double l,w;
    cout<<"Enter the redius of circle."<<endl;
    cin>>r;
    cout<<"Area of circle:"<<Area(r)<<endl;
            cout<<"Enter the Value."<<endl;
            cin>>l>>w;
            cout<<"Area of rectangle:"<<Area(l,w)<<endl;
                    cout<<"Enter the Value."<<endl;
                    cin>>b>>h;
                    cout<<"Area of triangle:"<<Area(b,h)<<endl;
    return 0;
}