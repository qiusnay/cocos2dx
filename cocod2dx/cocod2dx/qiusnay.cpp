//
//  qiusnay.cpp
//  cocod2dx
//
//  Created by qiusnay on 12-6-12.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "qiusnay.h"
#include "SimpleAudioEngine.h"

using namespace cocos2d;
using namespace CocosDenshion;

CCScene* qiusnay::scene()
{
    // 'scene' is an autorelease object
    CCScene *scene = CCScene::node();
    
    // 'layer' is an autorelease object
    qiusnay *layer = qiusnay::node();
    
    // add layer as a child to scene
    scene->addChild(layer);
    
    // return the scene
    return scene;
}


// on "init" you need to initialize your instance
bool qiusnay::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !CCLayer::init() )
    {
        return false;
    }
    
    
    /////////////////////////////
    // 3. add your codes below...
    
    // add a label shows "Hello World"
    // create and initialize a label
    CCLabelTTF* pLabel = CCLabelTTF::labelWithString("测试程序", "Thonburi", 34);
    
    // ask director the window size
    CCSize size = CCDirector::sharedDirector()->getWinSize();
    
    // position the label on the center of the screen
    pLabel->setPosition( ccp(size.width / 2, size.height / 2) );
    
    // add the label as a child to this layer
    this->addChild(pLabel, 1, kTagForLabel);

    this->setIsTouchEnabled(true);
    
    return true;
}