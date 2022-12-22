#include <iostream>
#include <string>
#include <vector>
#include <optional>
#include <D:\projects\WeatherForecast_teamwork\Header1.h>
using namespace std;



int main() {
    Weather a(14, "London", "England", 18.2, 70, 6, SUNNY);
    Weather b(14, "Kyiv", "Ukraine", 20.6, 100, 4, RAINY);
    Weather c(14, "Kyiv", "Ukraine", 34.2, 50, 2,FOGGY);
    Weather e(15, "Kyiv", "Ukraine", 134, 90, 3, RAINY);
    Weather d(15, "Kyiv", "Ukraine", 23, 40, 3, CLOUDY);
    Weather f(15, "Kyiv", "Ukraine", 3, 40, 3, SUNNY);
    Weather g(3, "Lviv", "Ukraine", 0, 80, 15, RAINY);
    Weather h(3, "Lviv", "Ukraine", -23, 80, 15, RAINY);

    WeatherCalendar Calendar;
    Calendar.AddWeatherItem(d);
    Calendar.AddWeatherItem(a);
    Calendar.AddWeatherItem(b);
    Calendar.AddWeatherItem(e);
    Calendar.AddWeatherItem(c);
    Calendar.AddWeatherItem(f);
    Calendar.AddWeatherItem(g);
    Calendar.AddWeatherItem(h);
    e.Print();
    e.IsLvivWeather();
    Calendar.BubbleSort();
    Calendar.PrintVector();
    cout << "\nThe highest temperature "<< Calendar.FindMaxTemprature(15) << endl;
    cout << "\nThe highest temperature " << Calendar.FindMaxTemprature(14) << endl;
    cout << "\nThe highest temperature " << Calendar.FindMaxTemprature(3) << endl;





}