#include "floraGPS.h"

void FloraGPS::init(HardwareSerial* _GPSSerial, int baudrate) {
	GPSSerial = _GPSSerial;
	gps = new Adafruit_GPS(GPSSerial);
	gps->begin(baudrate);
	
	// You can adjust which sentences to have the module emit, below
	
	// Show only the $GPRMC sentence
	gps->sendCommand(PMTK_SET_NMEA_OUTPUT_RMCONLY);
	
	// Disable $PGTOP sentence
	gps->sendCommand(PGCMD_NOANTENNA);
	
	// Set update rate to 1 Hz
	gps->sendCommand(PMTK_SET_NMEA_UPDATE_1HZ);
	
	// Start logging
	gps->LOCUS_StartLogger();
};

void FloraGPS::update() {
	rawData = GPSSerial->readStringUntil('\n');
	
	int i;
	int commaIndex[12];

	commaIndex[0] = rawData.indexOf(',');
	dataPoint[0] = rawData.substring(0, commaIndex[i]);
	for(i = 1; i < 12; i++) {
		commaIndex[i] = rawData.indexOf(',', commaIndex[i-1] + 1);
		dataPoint[i] = rawData.substring(commaIndex[i-1]+1, commaIndex[i]);
	}
	dataPoint[i] = rawData.substring(commaIndex[i-1]+1);
}

// TODO: Conversions
void FloraGPS::dumpSerial() {
	// Print begin
	Serial.print("GPS Module: ( ");

	Serial.print("Message_ID = ");
	Serial.print('"');
	Serial.print(dataPoint[0]);
	Serial.print('"');
	Serial.print(", ");

	Serial.print("UTC_Time = ");
	Serial.print('"');
	Serial.print(dataPoint[1]);
	Serial.print('"');
	Serial.print(", ");

	Serial.print("Status = ");
	Serial.print('"');
	Serial.print(dataPoint[2]);
	Serial.print('"');
	Serial.print(", ");

	Serial.print("Latitude = ");
	Serial.print('"');
	Serial.print(dataPoint[3]);
	Serial.print('"');
	Serial.print(", ");

	Serial.print("NS_Indicator = ");
	Serial.print('"');
	Serial.print(dataPoint[4]);
	Serial.print('"');
	Serial.print(", ");

	Serial.print("Longitude = ");
	Serial.print('"');
	Serial.print(dataPoint[5]);
	Serial.print('"');
	Serial.print(", ");

	Serial.print("EW_Indicator = ");
	Serial.print('"');
	Serial.print(dataPoint[6]);
	Serial.print('"');
	Serial.print(", ");

	Serial.print("Speed = ");
	Serial.print("");
	Serial.print(dataPoint[7]);
	Serial.print('"');
	Serial.print(" knots");
	Serial.print(", ");

	Serial.print("Course = ");
	Serial.print('"');
	Serial.print(dataPoint[8]);
	Serial.print('"');
	Serial.print(" degrees");
	Serial.print(", ");

	Serial.print("Date = ");
	Serial.print('"');
	Serial.print(dataPoint[9]);
	Serial.print('"');
	Serial.print(", ");

	Serial.print("Magnetic_Variation = ");
	Serial.print('"');
	Serial.print(dataPoint[10]);
	Serial.print('"');
	Serial.print(" degrees");
	Serial.print(", ");

	Serial.print("Mode? = ");
	Serial.print('"');
	Serial.print(dataPoint[11]);
	Serial.print('"');
	Serial.print(", ");

	// TODO: Split
	Serial.print("Mode+Checksum = ");
	Serial.print('"');
	Serial.print(dataPoint[12]);
	Serial.print('"');

	// Print end
	Serial.println(" )");
};
