#include <iostream>

using namespace std;

int main()
{
    // Enter temperature in celcius
    cout << "Please enter a temperature in Celcius:" << endl;

    // Store that temperature into a variable
    float tempInCelcius;
    cin >> tempInCelcius;

    // Convert celcius to farenheit 
    float tempInFahrenheit = (tempInCelcius * 9.0f )/ 5.0f + 32;

    //Display output to user
    cout << "Temperature is " << tempInFahrenheit << " Fahrenheit " << endl;

}
