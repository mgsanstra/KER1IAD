#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(20);
	
	soundStream.printDeviceList();
	soundStream.setDeviceID(1);
	soundStream.setup(this, 2, 0, 44100, 512, 4);
}

void ofApp::audioOut(float* output, int bufferSize, int nChannels) {
	for (int i = 0; i < bufferSize* nChannels; i += 2){
		float sample = sin(phase);
		output[i] = sample;
		
		sample = sin(phase * 1.008f);
		
		output[i+1] = sample;
		
		step += 0.001;
		phase += step;
	}
}
