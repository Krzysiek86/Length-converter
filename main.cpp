#include <iostream>

using namespace std;

float meters;

float How_many_inches(float m)
{
    return m*39.37;

}

float How_many_yards(float x);

void How_many_miles(float m)
{
    cout<< "Miles: "<<m*0.0006213;
}

int main()
{

cout<< "How many meters: ";
cin>>meters;

    cout<< "Inches: "<<How_many_inches(meters)<<endl;
    cout<< "Yards: "<<How_many_yards(meters)<<endl;
    How_many_miles(meters);

    getchar(); getchar();
    return 0;


}

float How_many_yards(float x)
{
    return x*1.0936;
}

