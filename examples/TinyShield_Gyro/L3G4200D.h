/*
 *  L3G4200D.h
 *  Gyroscope library
 *
 *  Created by Samwell Freeman on 10/05/14.
 *  Copyright 2014 LucidTronix.
 *
 */

#ifndef L3G4200D_h
#define L3G4200D_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

#include <Wire.h>

class L3G4200D{
  public:
    L3G4200D();
    void initialize(int scale);
    int getX();
    int getY();
    int getZ();
  private:
    void writeRegister(int deviceAddress, byte address, byte val);
    int readRegister(int deviceAddress, byte address);  
    int L3G4200D_Address;
};

#endif
