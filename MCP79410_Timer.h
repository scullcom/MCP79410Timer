#ifndef MCP79410_Timer_h
#define MCP79410_Timer_h

#include <Arduino.h>
#include <Wire.h>

class MCP79410_Timer {
  public:
    MCP79410_Timer(byte rtcAddress);
    uint32_t getTotalSeconds();
    void startRtc();
    void stopRtc();
    uint8_t hours();
    uint8_t minutes();
    uint8_t seconds();
    String getTime();

  private:
    // private methods
    unsigned char _readRtcByte(const unsigned char adr);
    void _writeRtcByte(const unsigned char adr, const unsigned char data);
    uint8_t _makeDec(uint8_t num);
    uint8_t _makeHex(uint8_t num);
    unsigned char _getRtcData(const unsigned char adr, const unsigned char validbits);
    String _format2digit(unsigned char data);
    // private variables
    byte _rtcAddress;

};

#endif
