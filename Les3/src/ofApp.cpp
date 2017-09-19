#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	//Functie voor het opstarten van Arduino, zodat ze signalen kunnen opvangen van de app
	ofAddListener(arduino.EInitialized, this, &ofApp::setupArduino);
	
	//Opstarten arduino naar correct port
	arduino.connect("/dev/cu.usbmodem1421");
	arduino.sendFirmwareVersionRequest(); //Workaround voor een bug

}

//--------------------------------------------------------------
void ofApp::update(){
	arduino.update();
}

//--------------------------------------------------------------
void ofApp::draw(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	arduino.sendDigital(11, ARD_HIGH);
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
	arduino.sendDigital(11, ARD_LOW);

}

void ofApp::setupArduino(const int& version) {
	ofLog() << "Arduino firmware found." << arduino.getFirmwareName() << arduino.getMajorFirmwareVersion() << arduino.getMinorFirmwareVersion() << endl;
	
	arduino.sendDigitalPinMode(11, ARD_OUTPUT); // Lampje op arduino (uitvoer)
	arduino.sendDigitalPinMode(12, ARD_INPUT); // Knopje op arduino (invoer)
	arduino.sendAnalogPinReporting(0, ARD_ANALOG); // Lichtgevoelige weerstand (lichtsensor)
	arduino.sendAnalogPinReporting(1, ARD_ANALOG); // Draaiknop
	
	ofAddListener(arduino.EAnalogPinChanged, this, &ofApp::analogPinChanged);
	ofAddListener(arduino.EDigitalPinChanged, this, &ofApp::digitalPinChanged);
	
}

void ofApp::analogPinChanged(const int& pin) {
	ofLog() << "Analog pin" << pin << " value: " << arduino.getAnalog(pin) << endl;
	
}

void ofApp::digitalPinChanged(const int& pin) {
	ofLog() << "Digital pin" << pin << " value: " << arduino.getDigital(pin) << endl;
	
}
