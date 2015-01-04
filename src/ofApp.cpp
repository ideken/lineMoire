#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    ofSetCircleResolution(128);
    ofBackground(255);
    ofNoFill();
    fw = ofGetWidth();
    fh = ofGetHeight();
    cPos.set(fw/2, fh/2);
    gap = 10;
    distance = 0;
    step = 1;
    imgNum = 0;
}

//--------------------------------------------------------------
void ofApp::update(){
    distance += step;
    imgNum++;
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofTranslate(cPos);
    ofSetColor(0,200);
    for (int i = 0; i < fh/2; i+=gap) {
        ofCircle(0, 0, i);
    }
    for (int i = 0; i < fh/2; i+=gap){
        ofCircle(distance, 0, i);
    }
    if (abs(distance) > fh/4) {
        step *= -1;
    }
 //     if(imgNum < 40) {
 //       myImg.grabScreen(0, 0, fw, fh);
 //       myImg.saveImage("./capture/" + ofToString(imgNum, 4, '0') + ".png");
 //   }
 //   if(imgNum == 40){ofExit();}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
