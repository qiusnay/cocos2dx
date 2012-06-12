//
//  qiusnay.h
//  cocod2dx
//
//  Created by qiusnay on 12-6-12.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#ifndef cocod2dx_qiusnay_h
#define cocod2dx_qiusnay_h

#define kTagForLabel 13

#include "cocos2d.h"

class qiusnay : public cocos2d::CCLayer
{
    public:
        // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
        virtual bool init();  
    
        // there's no 'id' in cpp, so we recommand to return the exactly class pointer
        static cocos2d::CCScene* scene();
    
        // implement the "static node()" method manually
        LAYER_NODE_FUNC(qiusnay); 
};


#endif
