#include "mcp48x1.hpp"





void mcp48x1::begin( uint8_t select )
{
    _select = select; 
    pinMode( _select, OUTPUT );
    digitalWrite( _select, HIGH );
    
}

void mcp48x1::begin( uint8_t select, uint8_t mosi, uint8_t sck )
{

}