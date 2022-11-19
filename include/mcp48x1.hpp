#include <Arduino.h>
#include <SPI.h>


class mcp48x1 
{
    public: 
        void begin( uint8_t select ); // Version for Hardware SPI Pins
        void begin( uint8_t select, uint8_t mosi, uint8_t sck ); // Version when using different pins 
    private: 

    protected:

    uint8_t _select;  


};