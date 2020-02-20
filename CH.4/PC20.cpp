// Spectral Analysis

// Classes needed
#include<iostream>
using namespace std;

// Main function
int main()
{
	// Constant variable
	const double RADIO_WAVE = .01;
	const double MICROWAVE = .001;
	const double INFRARED = .0000007;
	const double ULTRAVIOLET = .0000004;
	const double X_RAYS = .00000001;
	const double GAMMA_RAYS = .00000000001;
	
	// Variables
	double wavelength;
	
	cout << "\nEnter in the wavelength in meters:\n";
	cin >> wavelength;
	
	if(wavelength >= RADIO_WAVE)
	{
		cout << "\nWavelength is a radio wave";
	}
	
	else if(wavelength > MICROWAVE && wavelength < RADIO_WAVE)
	{
		cout << "\nWavelength is a microwave";
	}
	
	else if(wavelength > INFRARED && wavelength < MICROWAVE)
	{
		cout << "\nWavelength is a infrared";
	}
	
	else if(wavelength > ULTRAVIOLET && wavelength < INFRARED)
	{
		cout << "\nWavelength is a visible light";
	}
	
	else if(wavelength > X_RAYS && wavelength < ULTRAVIOLET)
	{
		cout << "\nWavelength is a ultraviolet light";
	}
	
	else if(wavelength > GAMMA_RAYS && wavelength < X_RAYS)
	{
		cout << "\nWavelength is an x-ray";
	}
	
	else if(wavelength > GAMMA_RAYS)
	{
		cout << "\nWavelength is a gamma ray";
	}
	
	return 0;
}
