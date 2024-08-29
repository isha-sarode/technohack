#include <iostream>
using namespace std ;


float c_to_ff(float temperature) {
    return (temperature * 9.0) / 5.0 + 32;
}

float f_to_c(float temperature) {
    return (temperature - 32) * 5 / 9;
}


int main()
{
    int choice;
    float temperature;
    float converted_temperature;
    cout<<"How you gonna to covert temperature"<<endl;
    cout<<"Choice 1: From Fahrenhiet to Celsius"<<endl;
    cout<<"Choice 2: From Celsius to Fahrenhiet"<<endl;

    cout<<"Enter choice: ";
    cin>>choice;

    cout<<"Enter Temperature: ";
    cin>>temperature;

    if (choice == 1) {
        converted_temperature = f_to_c(temperature);
        cout<<"Temerature: "<<converted_temperature<<" in degree Celsius"<<endl;
    }
    else if (choice == 2) {
        converted_temperature = c_to_ff(temperature);
        cout<<"Temerature: "<<converted_temperature<<" in Fahrenhiet"<<endl;
    }
    else {
        cout<<"Wrong Choice. Exit";
    }

    float fahrenheit, celsius;
 
    fahrenheit = (celsius * 9.0) / 5.0 + 32;

    return 0;
}


