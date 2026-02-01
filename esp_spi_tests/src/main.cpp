#include <Arduino.h>

#define STATUS_DROGUE_FIRED     (1 << 0) // 00000001
#define STATUS_MAIN_FIRED       (1 << 1) // 00000010
#define STATUS_DROGUE_FAIL      (1 << 2) // 00000100
#define STATUS_MAIN_FAIL        (1 << 3) // 00001000
#define STATUS_DROGUE_CONT_OK   (1 << 4) // 00010000
#define STATUS_MAIN_CONT_OK     (1 << 5) // 00100000
#define STATUS_DROGUE_FIRE_ACK  (1 << 6) // 01000000
#define STATUS_MAIN_FIRE_ACK    (1 << 7) // 10000000

void setup() {
    Serial.begin(9600);

}

void loop() { 
    
}