//
//  RestrictionsModel.h
//  美团HD
//
//  Created by tarena on .
//  Copyright (c) 2015年 hare. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RestrictionsModel : NSObject

/** int	是否需要预约，0：不是，1：是 */
@property (nonatomic, assign) int  is_reservation_required;
/** int	是否支持随时退款，0：不是，1：是*/
@property (nonatomic, assign) int  is_refundable;
/** string	附加信息(一般为团购信息的特别提示)*/
@property (nonatomic, copy) NSString *special_tips;

@end
