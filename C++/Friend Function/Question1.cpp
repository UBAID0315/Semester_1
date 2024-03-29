#include<iostream>
using namespace std;

class Complex
{
    private:
        int real;
        int imaginary;
        friend Complex addComplex(Complex c1,Complex c2);
    public:
        Complex();
        void setreal(int);
        int getreal();
        void setimg(int);
        int getimg();
        void display(Complex,Complex);
};


void Complex::setreal(int real)
{
    this->real = real;
}
int Complex::getreal()
{
    return this->real;
}
void Complex::setimg(int img)
{
    imaginary = img;
}
int Complex::getimg()
{
    return imaginary;
}
Complex::Complex()
{
    real = 0;
    imaginary = 0;
}
void Complex::display(Complex c1,Complex c2)
{
    cout<<"Your answer is: "<<real<<" + "<<imaginary<<"i"<<endl;
}
Complex addComplex(Complex c1, Complex c2)
{
    Complex result;
    result.setreal(c1.getreal() + c2.getreal());
    result.setimg(c1.getimg() + c2.getimg());
    return result;
}

int main()
{
    Complex c1,c2;
    int real,img;

    cout<<"C1 Real value: ";
    cin>>real;
    cout<<"C1 Img value: ";
    cin>>img;
    c1.setimg(img);
    c1.setreal(real);
    
    cout<<endl;
    
    cout<<"C2 Real value: ";
    cin>>real;
    cout<<"C2 Img value: ";
    cin>>img;
    cout<<endl;
                // FUNCTIONS

    c2.setimg(img);
    c2.setreal(real);

    Complex result = addComplex(c1,c2);
    result.display(c1,c2);
}