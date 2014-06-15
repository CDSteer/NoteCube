#include "NoteLight.h"
#include "BreathLight.h"
#include "Settings.h"

Settings settings;
BreathLight breathLight;
NoteLight noteLight;

void setup() {
    Spark.function("colourLight", colourLight);
    Spark.function("RGBOff", RGBOff);
    Spark.function("setMode", setMode);
    settings = Settings();
    noteLight = NoteLight();
    breathLight = BreathLight();
    RGB.control(true);
}

void loop() {
    RGB.color(noteLight.getRed(), noteLight.getGreen(), noteLight.getBlue());
    if (settings.isSolid() == true){
        RGB.color(noteLight.getRed(), noteLight.getGreen(), noteLight.getBlue());
    } else if (settings.isFlashing() == true) {
        delay(500);
        RGB.color(noteLight.getRed(), noteLight.getGreen(), noteLight.getBlue());
    } else if (settings.isBreathing() == true) {
        RGB.color(noteLight.getRed(), noteLight.getGreen(), noteLight.getBlue());
    }
}

int setMode(String args){
    if (args == "solid"){
        settings.setMode(1);
    } else if (args == "flashing") {
        settings.setMode(2);
    } else if (args == "breathing") {
        settings.setMode(3);
    }
    return 0;
}

int colourLight(String args){
    if (args == "blue"){
        noteLight.lightBlue();
    } else if (args == "lBlue"){
        noteLight.setBlue(128);
        noteLight.setRed(0);
        noteLight.setGreen(0);
    } else if (args =="red"){
        noteLight.lightRed();
    } else if (args =="green"){
        noteLight.lightGreen();
    } else if (args =="yellow"){
        noteLight.setBlue(0);
        noteLight.setRed(255);
        noteLight.setGreen(255);
    } else if (args == "orange"){
        noteLight.setBlue(0);
        noteLight.setRed(128);
        noteLight.setGreen(255);
    }
}

int RGBOff(String args){
    noteLight.lightOff();
}