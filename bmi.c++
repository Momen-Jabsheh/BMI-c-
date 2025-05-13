#include<iostream>
using namespace std ;
class BMI{
    float height = 1;
    float width = 1;
    float bmi  ;
    void result(){
        bmi = width /(height * height) ;
        cout<<"\nyou BMI is : " << bmi << endl ;
        if (bmi < 18.5)
            cout<<"you are underweight \n";
        else if (bmi < 25)
            cout<<"you are of normal weight \n";
        else if (bmi < 30)
            cout << "you are overweight \n" ;
        else 
            cout<< "you are obese \n " ;
    }

    public:
    BMI(float h , float w ){
        height = h  ;
        width = w ;
        result() ;
    }
    BMI (){
        cout << "type your hight (m) ";
        cin >> height ;
        cout <<"\ntype your width (kg) " ;
        cin >> width ;
        result() ;
    }
};
int main(){
    BMI(1.8 , 70) ;
    BMI() ;
    return 0 ;
}