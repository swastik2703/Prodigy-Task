#include<iostream>

using namespace std;

int main()
{

    double temp1,temp2,temp3;
    char unit;
    
    cout<<"***** TEMPERATURE CONVERTOR *****"<<endl;
    cout<<"F: Fahrenheit"<<endl;
    cout<<"C: Celcius"<<endl;
    cout<<"K: Kelvin"<<endl;
    cout<<"Enter the unit u want to convert : ";
    cin>>unit;

    cout<<"Enter the temperature (degree "<<unit<<"):";
    cin>>temp1;

    if(unit=='C'|| unit=='c')
    {
        temp2=(temp1*(1.8))+32;
        temp3=temp1+273.15;
        cout<<"Temperature in Fahrenheits = "<<temp2<<" F"<<endl;
        cout<<"Temperature in Kelvins = "<<temp3<<" K"<<endl;
    }

    else if(unit=='F'|| unit=='f')
    {
        temp2=(temp1-32)*(0.555556);
        temp3=temp2+273.15;
        cout<<"Temperature in Celcius = "<<temp2<<" C"<<endl;
        cout<<"Temperature in Kelvins = "<<temp3<<" K"<<endl;
    }

    else if(unit=='K'|| unit=='k')
    {
        temp2=temp1-273.15;
        temp3=(temp2*(1.8))+32;
        cout<<"Temperature in Celcius = "<<temp2<<" C"<<endl;
        cout<<"Temperature in Fahrenheits = "<<temp3<<" F"<<endl;
    }

    else
    {
        cout<<"Invalid choise of unit!!"<<endl;
    }

}