#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(30);
    ofBackground(255);
    fw = ofGetWidth();
    fh = ofGetHeight();
    cPos.set(fw/2, fh/2);
    gap = 8;
    angle = 20;
    step = -1;
    imgNum = 0;
}

//--------------------------------------------------------------
void ofApp::update(){
    angle += step;
    imgNum++;
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(0,150);
    for (int i = 0; i < fh; i+=gap) {
        ofLine(0, i, fw, i);
    }
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotateZ(angle);
    if (angle < 0) {
        step *= -1;
    }
    for (int i = 0; i < fh; i+=gap) {
    ofLine(-cPos.x, i - cPos.y, fw + cPos.x, i - cPos.y);
    }
    if(imgNum < 40) {
        myImg.grabScreen(0, 0, fw, fh);
        myImg.saveImage("./capture/" + ofToString(imgNum, 4, '0') + ".png");
    }
    if(imgNum == 40){ofExit();}
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
