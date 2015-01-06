#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(30);
    ofBackground(255);
    ofSetCircleResolution(64);
    fw = ofGetWidth();
    fh = ofGetHeight();
    cPos.set(fw/2, fh/2);
    gap = 10;
    step = 8;
    imgNum = 0;
    slideCenter.set(0, 0);
    p = 200;
    g = 420;
    b = sqrt(g*g/4 - p*p);
    
    ofNoFill();
}

//--------------------------------------------------------------
void ofApp::update(){
    
    slideCenter.x += step;
    imgNum++;
    theta += 4;
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofNoFill();
    ofSetColor(0,200);
    ofTranslate(cPos);
    for (int i = 0; i < fw; i+=gap) {
        ofCircle(-p, 0,i);
    }
    
    for (int i = 0; i < fw; i+=gap) {
        ofCircle(p, 0, i);
    }
    ofFill();
    ofCircle(g*cos(PI * theta/180)/2, b*sin(PI * theta/180), 3);
    if (theta > 360) {
        g += 10;
        b = sqrt(g*g/4 - p*p);
        theta = 0;
    }
    

    
    if(imgNum < 90) {
        myImg.grabScreen(0, 0, fw, fh);
        myImg.saveImage("./capture/" + ofToString(imgNum, 4, '0') + ".png");
    }
    if(imgNum == 90){ofExit();}
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
