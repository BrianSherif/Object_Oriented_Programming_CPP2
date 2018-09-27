/*
CH08-320143
problem_1.1
Brian Sherif Nazmi Hanna Nasralla
b.hannanasralla@jacobs-university.de
*/


class Complex{
    public:
      float re; //the real part
      float im; //the imaginary part
        Complex();
        Complex(float n_re, float n_im);
        ~Complex();

        Complex(const Complex& other); //copy constructor
        //constructor, destructor
        //

        float getRe();
        float getIm();
        void setRe(float n_re);
        void setIm(float n_im);
        //getter and setter
        //declarations for thge arthemtic operators
        friend Complex operator + (Complex, Complex);
        friend Complex operator * (Complex, Complex);
        friend Complex operator - (Complex, Complex);
        Complex& operator = (const Complex&);
        Complex conjugate();
        friend ostream& operator<<(ostream& os, const Complex& c);
        friend ifstream& operator >> (ifstream& in, const Complex& c);


        void print();
};
