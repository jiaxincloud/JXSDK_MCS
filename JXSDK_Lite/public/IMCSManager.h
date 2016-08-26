//
//  IMCSManager.h
//  JXSDK
//
//  Copyright (c) jiaxincloud.com All rights reserved.
//

#import "IBaseManager.h"
#import "JXWorkgroup.h"
#import "JXMcsEvaluation.h"

@protocol IMCSManager<IBaseManager>

- (JXWorkgroup *)activeService;

- (void)fetchQuickQuestionsWithCallback:(void (^)(id responseObject, JXError *error))callback;

- (NSArray *)fetchQuickQuestionsSync;

- (void)fetchCustomServicesWithCallback:(void (^)(id responseObject, JXError *error))callback;

- (NSArray *)fetchCustomServicesSync;

- (void)fetchEvaluationConfigWithCallback:(void (^)(id res, JXError *error))callback;

- (JXMcsEvaluation *)fetchEvaluationConfigSync;

- (void)requestCustomerService:(JXWorkgroup *)service;

- (void)transferCustomerService;

- (void)cancelWait;

- (void)leaveService;

- (void)leaveMessage;

- (void)evaluateService:(JXWorkgroup *)service
                   andScore:(NSInteger)score
                andCallback:(void (^)(JXError *error))callback;

- (NSURL *)leaveMessageURL:(JXWorkgroup *)workgroup;

@end
