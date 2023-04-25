#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class Temperature
{
private:
  double temperature = 0;

public:
  void setTemperature(int tempToSet)
  {
    if (temperature != 0)
    {
      temperature = 0;
      temperature += tempToSet;
    }
    else
    {
      temperature += tempToSet;
    }
  }
  int getTemperature()
  {
    return this->temperature;
  }
};

class ConvertTemperature : public Temperature
{
public:
  int toCelsius(){
    int celsius, inputFahrenheit;
    cout << "Enter a temperature in fahrenheit: ";
    cin >> inputFahrenheit;
    setTemperature(inputFahrenheit);
    celsius = 5 / 9 * (getTemperature() - 32);
    return celsius;
  };
  int toFahrenheit(){
    int fahrenheit, inputCelsius;
    cout << "Enter a temperature in fahrenheit: ";
    cin >> inputCelsius;
    setTemperature(inputCelsius);
    fahrenheit = 9 / 5 * getTemperature() + 32;
    return fahrenheit;
  };

  
};
