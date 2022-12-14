//
//  AGEarthQuakeEffect.h
//  HiHigh
//
//  Created by Insanity on 2014. 10. 1..
//
//

#ifndef __HiHigh__AGEarthQuakeEffect__
#define __HiHigh__AGEarthQuakeEffect__

#include "../common/HiHighCommon.h"
using namespace cocos2d;

class AGEarthQuakeEffect : public CCActionInterval
{
    // Code by Francois Guibert
    // Contact: www.frozax.com - http://twitter.com/frozax - www.facebook.com/frozax
public:
    AGEarthQuakeEffect();
    
    // Create the action with a time and a strength (same in x and y)
    static AGEarthQuakeEffect* actionWithDuration(float d, float strength );
    // Create the action with a time and strengths (different in x and y)
    static AGEarthQuakeEffect* actionWithDuration(float d, float strength_x, float strength_y );
    bool initWithDuration(float d, float strength_x, float strength_y );
    
    virtual void startWithTarget(CCNode *pTarget);
    virtual void update(float time);
    virtual void stop(void);
    
protected:
    // Initial position of the shaked node
    float _initial_x, _initial_y;
    // Strength of the action
    float _strength_x, _strength_y;
};


#endif /* defined(__HiHigh__AGEarthQuakeEffect__) */
