//
//  PowerLog.h
//  PowerLog
//
//  Created by wxl on 15/3/30.
//  Copyright (c) 2015年 wxl. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#ifdef DEBUG
#define powerLog(value) fprintf(stderr,"line:%d function:%s %s = %s\n", __LINE__, __FUNCTION__, (#value), [_powerLog(@encode(__typeof__((value))), (value)) UTF8String])
#else
#define powerLog(value)
#endif

static inline NSString* _powerLog(const char *type, ...)
{
    va_list v;
    va_start(v, type);
    NSNumber *number;
    NSString *obj = nil;
    if (strcmp(type, @encode(id)) == 0) {
        id actual = va_arg(v, id);
        obj = [NSString stringWithFormat:@"%@", actual];
    } else if (strcmp(type, @encode(CGPoint)) == 0) {
        CGPoint actual = (CGPoint)va_arg(v, CGPoint);
        obj = NSStringFromCGPoint(actual);
    } else if (strcmp(type, @encode(CGSize)) == 0) {
        CGSize actual = (CGSize)va_arg(v, CGSize);
        obj = NSStringFromCGSize(actual);
    } else if (strcmp(type, @encode(UIEdgeInsets)) == 0) {
        UIEdgeInsets actual = (UIEdgeInsets)va_arg(v, UIEdgeInsets);
        obj = NSStringFromUIEdgeInsets(actual);
    } else if (strcmp(type, @encode(double)) == 0) {
        double actual = (double)va_arg(v, double);
        number = [NSNumber numberWithDouble:actual];
        obj = [number stringValue];
    } else if (strcmp(type, @encode(float)) == 0) {
        float actual = (float)va_arg(v, double);
        number = [NSNumber numberWithFloat:actual];
        obj = [number stringValue];
    } else if (strcmp(type, @encode(int)) == 0) {
        int actual = (int)va_arg(v, int);
        number = [NSNumber numberWithInt:actual];
        obj = [number stringValue];
    } else if (strcmp(type, @encode(long)) == 0) {
        long actual = (long)va_arg(v, long);
        number = [NSNumber numberWithLong:actual];
        obj = [number stringValue];
    } else if (strcmp(type, @encode(long long)) == 0) {
        long long actual = (long long)va_arg(v, long long);
        number = [NSNumber numberWithLongLong:actual];
        obj = [number stringValue];
    } else if (strcmp(type, @encode(short)) == 0) {
        short actual = (short)va_arg(v, int);
        number = [NSNumber numberWithShort:actual];
        obj = [number stringValue];
    } else if (strcmp(type, @encode(char)) == 0) {
        char actual = (char)va_arg(v, int);
        number = [NSNumber numberWithChar:actual];
        obj = [number stringValue];
    } else if (strcmp(type, @encode(bool)) == 0) {
        bool actual = (bool)va_arg(v, int);
        number = [NSNumber numberWithBool:actual];
        obj = [number stringValue];
    } else if (strcmp(type, @encode(unsigned char)) == 0) {
        unsigned char actual = (unsigned char)va_arg(v, unsigned int);
        number = [NSNumber numberWithUnsignedChar:actual];
        obj = [number stringValue];
    } else if (strcmp(type, @encode(unsigned int)) == 0) {
        unsigned int actual = (unsigned int)va_arg(v, unsigned int);
        number = [NSNumber numberWithUnsignedInt:actual];
        obj = [number stringValue];
    } else if (strcmp(type, @encode(unsigned long)) == 0) {
        unsigned long actual = (unsigned long)va_arg(v, unsigned long);
        number = [NSNumber numberWithUnsignedLong:actual];
        obj = [number stringValue];
    } else if (strcmp(type, @encode(unsigned long long)) == 0) {
        unsigned long long actual = (unsigned long long)va_arg(v, unsigned long long);
        number = [NSNumber numberWithUnsignedLongLong:actual];
        obj = [number stringValue];
    } else if (strcmp(type, @encode(unsigned short)) == 0) {
        unsigned short actual = (unsigned short)va_arg(v, unsigned int);
        number =  [NSNumber numberWithUnsignedShort:actual];
        obj = [number stringValue];
    }
    va_end(v);
    return obj;
}