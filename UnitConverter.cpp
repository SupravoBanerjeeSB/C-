#include <iostream>
using namespace std;

void Length()
{
    double meters;
    cout << "Enter length in meters: ";
    cin >> meters;

    double feet = meters * 3.28084;
    cout << "Length: " << feet << " feet\n\n";
}

void Weight()
{
    double kg;
    cout << "Enter weight in kilograms: ";
    cin >> kg;

    double pounds = kg * 2.20462;
    cout << "Weight: " << pounds << " pounds\n\n";
}

void Temperature()
{
    double c;
    cout << "Enter temperature in Celsius: ";
    cin >> c;

    double f = (c * 9.0 / 5.0) + 32;
    cout << "Temperature: " << f << " °F\n\n";
}

void Time()
{
    int hours;
    cout << "Enter hours: ";
    cin >> hours;

    int minutes = hours * 60;
    cout << "Time: " << minutes << " minutes\n\n";
}

void Speed()
{
    double kmh;
    cout << "Enter speed in km/h: ";
    cin >> kmh;

    double mph = kmh * 0.621371;
    cout << "Speed: " << mph << " mph\n\n";
}

void DataStorage()
{
    double bytes;
    cout << "Enter size in bytes: ";
    cin >> bytes;

    double mb = bytes / (1024 * 1024);
    cout << "Size: " << mb << " MB\n\n";
}

void Volume()
{
    double liters;
    cout << "Enter volume in liters: ";
    cin >> liters;

    double gallons = liters * 0.264172;
    cout << "Volume: " << gallons << " gallons\n\n";
}

void Area()
{
    double sqm;
    cout << "Enter area in square meters: ";
    cin >> sqm;

    double sqft = sqm * 10.7639;
    cout << "Area: " << sqft << " sq ft\n\n";
}

int main()
{
    int choice;

    while (true)
    {
        cout << "==== Unit Converter ====\n";
        cout << "1. Length (meters to feet)\n";
        cout << "2. Weight (kg to pounds)\n";
        cout << "3. Temperature (Celsius to Fahrenheit)\n";
        cout << "4. Time (hours to minutes)\n";
        cout << "5. Speed (km/h to mph)\n";
        cout << "6. Data Storage (bytes to MB)\n";
        cout << "7. Volume (liters to gallons)\n";
        cout << "8. Area (sq meters to sq feet)\n";
        cout << "9. Exit\n";
        cout << "========================\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1: Length(); break;
            case 2: Weight(); break;
            case 3: Temperature(); break;
            case 4: Time(); break;
            case 5: Speed(); break;
            case 6: DataStorage(); break;
            case 7: Volume(); break;
            case 8: Area(); break;
            case 9:
                cout << "Exiting program...\n";
                return 0;
            default:
                cout << "Invalid choice! Try again.\n\n";
        }
    }
}
