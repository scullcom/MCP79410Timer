// example useage
#include <Arduino.h>
#include <MCP79410_Timer.h>

const byte MCP79410_ADDRESS = 0x6f;

MCP79410_Timer timer = MCP79410_Timer(MCP79410_ADDRESS);

void setup()
{
   Serial.begin(9600);
   timer.startRtc();
}

void loop(){
    uint32_t dateAsSeconds = timer.getTotalSeconds();
    Serial.println(dateAsSeconds);
    Serial.println(timer.getTime());
    delay(1000);
}
