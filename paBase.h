#ifndef __PABASE_H__
#define __PABASE_H__
#include "paBase/_ForUser.h"

#include "paCoreSrc/_paBase.Inline_inc.h"

class paBase
{
private:
    /* data */
public:
// inline void delayMs(uint32_t ms){}
#include "paCoreSrc/_paBase.Inline.h"
    // inline
    void output(const char *data);
};

extern paBase _G_paBase;

#endif // __PABASE_H__