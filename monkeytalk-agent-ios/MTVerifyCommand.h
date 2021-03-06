/*  MonkeyTalk - a cross-platform functional testing tool
 Copyright (C) 2012 Gorilla Logic, Inc.
 
 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU Affero General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU Affero General Public License for more details.
 
 You should have received a copy of the GNU Affero General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>. */

#import <Foundation/Foundation.h>
#import "MTCommandEvent.h"

@interface MTVerifyCommand : MTCommandEvent {

    
}

+ (void) handleVerify:(MTCommandEvent*) ev;
+ (NSString *) valueFromProp:(NSString *)prop forView:(UIView *)source;
+ (NSString *) execute:(MTCommandEvent *)ev isVerifyNot:(BOOL)isVerifyNot isRegEx:(BOOL)isRegEx
            isWildCard:(BOOL)isWildCard;

+(void) setMonkeyArgumentsForVerify:(MTCommandEvent *)event isWildCard:(BOOL) isWildCard;
+(NSString *) getPropertyValueForComponent :(MTCommandEvent *) event
                               forInternal :(NSString *) internal
                                   forProp :(NSString *) prop
                                    forView:(UIView *) source;


+(void) verificationOfPropValues:(NSString *) expected
                       propValue:(NSString *) propValue
                     isVerifyNot:(BOOL) isVerifyNot
                          event :(MTCommandEvent *)event;

+(void) verifyRegexWithPropValue:(NSRegularExpression *)regex
                       propValue:(NSString *)propValue
                     isVerifyNot:(BOOL)isVerifyNot
                           event:(MTCommandEvent *)event;

+(void) verifyWildCardWithPropValue:(NSRegularExpression *)regex
                          propValue:(NSString *)propValue
                        isVerifyNot:(BOOL)isVerifyNot
                              event:(MTCommandEvent *)event;





@end
