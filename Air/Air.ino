// Device.h contains configuration of device
#include <Device.h>

// setup runs once
void setup()
{
    // ctos.sensing.interval = 5;
    // ring.listen = "air aqi range";
    // ring.debug  = true;

    ctos.debug.errors = true;
    // ctos.debug.wifi     = true;
    ctos.debug.api    = true;
    ctos.debug.senses = true;
    // ctos.debug.controls = true;
    // ctos.debug.schema   = true;
}

// runs over and over again
void loop()
{
    ctos.loop();
}
