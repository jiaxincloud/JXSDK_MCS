//
//  IMCSManager.h
//  JXSDK
//
//  Copyright (c) jiaxincloud.com All rights reserved.
//

#import "IBaseManager.h"
#import "JXMcsEvaluation.h"
#import "JXWorkgroup.h"

@protocol IMCSManager<IBaseManager>

- (JXWorkgroup *)activeService;

- (void)fetchQuickQuestionsWithCallback:(void (^)(id responseObject, JXError *error))callback;

- (NSArray *)fetchQuickQuestionsSync;

- (void)fetchCustomServicesWithCallback:(void (^)(id responseObject, JXError *error))callback;

- (NSArray *)fetchCustomServicesSync;

- (void)fetchEvaluationConfigWithCallback:(void (^)(id res, JXError *error))callback;

- (void)fetchChatLogForConversation:(JXConversation *)conversation
                          withLimit:(NSInteger)limit
                        fromMessage:(JXMessage *)message
                       withCallBack:(void (^)(NSArray *historyMessages, JXError *error))callBack;

- (JXMcsEvaluation *)fetchEvaluationConfigSync;

- (void)requestCustomerService:(JXWorkgroup *)service;

- (void)requestCustomerService:(JXWorkgroup *)service andExtendData:(NSString *)extendData;

- (void)transferCustomerService;

- (void)transferCustomerServiceWithExtendData:(NSString *)extendData;

- (void)cancelWait;

- (void)leaveService;

- (void)leaveMessage;

- (void)evaluateService:(JXWorkgroup *)service
               andScore:(NSInteger)score
            andCallback:(void (^)(JXError *error))callback;

- (NSURL *)leaveMessageURL:(JXWorkgroup *)workgroup;

@end
