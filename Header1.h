#include <iostream>
#include <string>
#include <vector>
#include <optional>

using namespace std;

enum type {
    SUNNY,
    CLOUDY,
    RAINY,
    FOGGY,
    NONE
};

class Weather {

public:
    int day;
    string city;
    string country;
    float temp;
    int humidity;
    float windspeed;
    type weather_type;

    Weather() {
        day = 000;
        city = "000";
        country = "000";
        temp = 000;
        humidity = 000;
        windspeed = 000;
        weather_type = NONE;
    }

    Weather(int day1, string city1, string country1, float temp1, int humidity1, float windspeed1, type weather_type1) {
        day = day1;
        city = city1;
        country = country1;
        temp = temp1;
        humidity = humidity1;
        windspeed = windspeed1;
        weather_type = weather_type1;
    }

    ~Weather() {

    }
    
    void Print() {
        cout << "Day: " << day << endl;
        cout << "City: " << city << endl;
        cout << "Country: " << country << endl;
        cout << "Temperature: " << temp << endl;
        cout << "Humidity: " << humidity << endl;
        cout << "Windspeed: " << windspeed << endl;
        cout << "Type: " << weather_type << endl;
    }

    void IsLvivWeather() {
        if (humidity >= 80 && weather_type == RAINY) {
            cout << "Typical weather in Lviv" << endl;
        }
        else {
            cout << "You are lucky dude" << endl;
        }
    }
};

class WeatherCalendar {
public:
    Weather weather_item;

    vector <Weather> all_weather_days;

    vector <Weather> AddWeatherItem(Weather weather_item) {
        all_weather_days.push_back(weather_item);
        return all_weather_days;
    }


    float FindMaxTemprature(int random_day) {
        float max_temp = 0;
        int days_found = 0;

        for (int i = 0; i < all_weather_days.size(); i++) {

            if (all_weather_days[i].day == random_day) {
                days_found = 1;
                if (all_weather_days[i].temp > max_temp) {
                    max_temp = all_weather_days[i].temp;
                }
            }

        }
        if (days_found == 0) {
            cout << "NOT ENOUGH DATA";
        }

        return max_temp;

    }

    void BubbleSort()
    {
        int i, j;
        for (i = 0; i < all_weather_days.size() - 1; i++) {

            for (j = 0; j < all_weather_days.size() - i - 1; j++) {
                if (all_weather_days[j].day > all_weather_days[j + 1].day) {
                    swap(all_weather_days[j], all_weather_days[j + 1]);
                }
            }
        }
    }
    void PrintVector() {
        for (int i = 0; i < all_weather_days.size(); i++) {
            cout << all_weather_days[i].day << endl;
        }
    }


};