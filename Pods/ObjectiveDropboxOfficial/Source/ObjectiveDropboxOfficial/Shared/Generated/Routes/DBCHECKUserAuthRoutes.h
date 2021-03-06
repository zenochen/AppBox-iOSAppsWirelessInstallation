///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBTasks.h"

@class DBCHECKEchoResult;
@class DBNilObject;

@protocol DBTransportClient;

///
/// Routes for the `Check` namespace
///

NS_ASSUME_NONNULL_BEGIN

@interface DBCHECKUserAuthRoutes : NSObject

/// An instance of the networking client that each route will use to submit a
/// request.
@property (nonatomic, readonly) id<DBTransportClient> client;

/// Initializes the `DBCHECKUserAuthRoutes` namespace container object with a
/// networking client.
- (instancetype)init:(id<DBTransportClient>)client;

///
/// This endpoint performs User Authentication, validating the supplied access token, and returns the supplied string,
/// to allow you to test your code and connection to the Dropbox API. It has no other effect. If you receive an HTTP 200
/// response with the supplied query, it indicates at least part of the Dropbox API infrastructure is working and that
/// the access token is valid.
///
///
/// @return Through the response callback, the caller will receive a `DBCHECKEchoResult` object on success or a `void`
/// object on failure.
///
- (DBRpcTask<DBCHECKEchoResult *, DBNilObject *> *)user;

///
/// This endpoint performs User Authentication, validating the supplied access token, and returns the supplied string,
/// to allow you to test your code and connection to the Dropbox API. It has no other effect. If you receive an HTTP 200
/// response with the supplied query, it indicates at least part of the Dropbox API infrastructure is working and that
/// the access token is valid.
///
/// @param query The string that you'd like to be echoed back to you.
///
/// @return Through the response callback, the caller will receive a `DBCHECKEchoResult` object on success or a `void`
/// object on failure.
///
- (DBRpcTask<DBCHECKEchoResult *, DBNilObject *> *)user:(nullable NSString *)query;

@end

NS_ASSUME_NONNULL_END
