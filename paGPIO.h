#ifndef __PAGPIO_H__
#define __PAGPIO_H__
#include "paBase/_ForCore.h"
//inline 函数所需头文件
#include "paCoreSrc/_paGPIO.inline.inc.h"
class paGPIO
{
private:
    /* data */
public:
// void write(int port, int pin, int state);
// void write(int gpio, int state);
// char read(int port, int pin);
// char read(int gpio);

//具体inline函数实现
#include "paCoreSrc/_paGPIO.inline.h"
};
extern paGPIO _G_paGPIO;

#endif // __PAGPIO_H__