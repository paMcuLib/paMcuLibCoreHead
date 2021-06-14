#ifndef __PAGPIO_H__
#define __PAGPIO_H__
#include "paBase/_ForCore.h"
class paGPIO
{
private:
    /* data */
public:
    void write(int port, int pin, int state);
    void write(int gpio, int state);
    char read(int port, int pin);
    char read(int gpio);
};
extern paGPIO _G_paGPIO;

#endif // __PAGPIO_H__