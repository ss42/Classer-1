// Generated by Apple Swift version 2.3 (swiftlang-800.10.13 clang-800.0.42.1)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import CoreGraphics;
@import ObjectiveC;
@import Foundation;
@import Dispatch;
#endif

#import <H2HSDK/H2HSDK.h>

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC6H2HSDK27H2HCustomMenuViewController")
@interface H2HCustomMenuViewController : UIViewController
- (void)viewDidLoad;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end



/// Protocol to inform the positive and neagative button actions for the dialog
SWIFT_PROTOCOL("_TtP6H2HSDK22H2HDialogActionHandler_")
@protocol H2HDialogActionHandler

/// Function that informs regarding negative button clicked
- (void)negativeActionHandler;

/// Function that informs regarding positive button clicked
- (void)positiveActionHandler:(NSString * _Nonnull)reason;
@end

@class UITableView;
@class NSIndexPath;
@class UITableViewCell;

SWIFT_CLASS("_TtC6H2HSDK28H2HDialogTableViewController")
@interface H2HDialogTableViewController : UITableViewController
@property (nonatomic, weak) id <H2HDialogActionHandler> _Nullable delegate;
- (void)viewDidLoad;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)tableView:(UITableView * _Nonnull)tableView willDisplayCell:(UITableViewCell * _Nonnull)cell forRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (nonnull instancetype)initWithStyle:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIWebView;
@class NSURLRequest;

SWIFT_CLASS("_TtC6H2HSDK39H2HFabricJSWhiteboardItemViewController")
@interface H2HFabricJSWhiteboardItemViewController : UIViewController <UIWebViewDelegate>
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (void)viewDidAppear:(BOOL)animated;
- (void)replaceContentViewWithViewController:(UIViewController * _Nonnull)vc;
- (void)webViewDidFinishLoad:(UIWebView * _Nonnull)webView;
- (BOOL)webView:(UIWebView * _Nonnull)webView shouldStartLoadWithRequest:(NSURLRequest * _Nonnull)request navigationType:(UIWebViewNavigationType)navigationType;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC6H2HSDK33H2HFabricJSWhiteboardManagerModel")
@interface H2HFabricJSWhiteboardManagerModel : NSObject <NSURLSessionDelegate>
+ (H2HFabricJSWhiteboardManagerModel * _Nonnull)sharedInstance;
- (void)turnOffSocket;
- (void)createWbManagerSocket;
- (void)checkPolls;
- (H2HFabricJSWhiteboardItemViewController * _Nonnull)createPollingLiveboard:(UIViewController * _Nonnull)vcPieChart withPollID:(NSString * _Nonnull)strPollId;
- (H2HFabricJSWhiteboardItemViewController * _Nonnull)createPollingLiveboard:(UIViewController * _Nonnull)vcPieChart shouldSwitchToWhitebordTab:(BOOL)shouldSwitchToWhitebordTab withPollID:(NSString * _Nonnull)strPollId;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UIView;
@class UIPresentationController;

SWIFT_CLASS("_TtC6H2HSDK35H2HFabricJSWhiteboardViewController")
@interface H2HFabricJSWhiteboardViewController : UIViewController <UIAdaptivePresentationControllerDelegate, UIPopoverPresentationControllerDelegate>
@property (nonatomic) NSInteger currentStrokeWidth;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (void)showWhiteboardSelectionView:(UIView * _Nonnull)sourceView;
- (UIModalPresentationStyle)adaptivePresentationStyleForPresentationController:(UIPresentationController * _Nonnull)controller;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC6H2HSDK17H2HLoadingSubview")
@interface H2HLoadingSubview : UIView
- (nonnull instancetype)initWithSuperView:(UIView * _Nullable)superView OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)show;
- (void)hide;
@end


SWIFT_CLASS("_TtC6H2HSDK19H2HMousePointerView")
@interface H2HMousePointerView : UIView
- (nonnull instancetype)initWithUserName:(NSString * _Nonnull)name OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)updateWithPoint:(CGPoint)newPoint name:(NSString * _Nonnull)newName;
- (void)hideUserName;
@end

@class H2HChartOptionModel;
@protocol PieChartToPollsManagerDelegate;

SWIFT_CLASS("_TtC6H2HSDK25H2HPieChartViewController")
@interface H2HPieChartViewController : UIViewController
@property (nonatomic, copy) NSArray<H2HChartOptionModel *> * _Nullable arrayChartOptionModel;
@property (nonatomic, copy) NSString * _Nullable stringChartTitle;
@property (nonatomic, copy) NSString * _Nullable stringPollQuestion;
@property (nonatomic) NSTimeInterval refreshPieChartAfterInterval;
@property (nonatomic, strong) id <PieChartToPollsManagerDelegate> _Nullable delegate;
- (void)viewDidLoad;
- (void)refreshChartWithData:(NSArray<H2HChartOptionModel *> * _Nullable)arrayChartModel;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_PROTOCOL("_TtP6H2HSDK30PieChartToPollsManagerDelegate_")
@protocol PieChartToPollsManagerDelegate
- (void)refreshChart;
@end

@class NSDictionary;
@class H2HWebService;
@class H2HErrorObject;

SWIFT_CLASS("_TtC6H2HSDK14H2HPollManager")
@interface H2HPollManager : NSObject <H2HWebServiceDelegate, PieChartToPollsManagerDelegate, PollResultDelegate>
- (void)alertForPollRequestWithJson:(NSDictionary * _Nonnull)json;
- (void)pollResultReturnedWithModel:(NSArray * _Nonnull)chartOptionsModel;
- (void)requestSucceed:(H2HWebService * _Null_unspecified)webService response:(id _Null_unspecified)responseModel;
- (void)requestFailed:(H2HWebService * _Null_unspecified)webService error:(H2HErrorObject * _Null_unspecified)error;
- (void)submitPollWithSelectedOptions:(NSArray * _Nonnull)optionsArray andRemainingTime:(NSTimeInterval)timeRemaining;
- (void)loadPollSummary;
- (void)refreshChart;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC6H2HSDK12H2HPollModel")
@interface H2HPollModel : NSObject <H2HWebServiceDelegate>
+ (H2HPollModel * _Nonnull)sharedInstance;
- (void)fetchPollList;
- (void)requestSucceed:(H2HWebService * _Null_unspecified)webService response:(id _Null_unspecified)responseModel;
- (void)requestFailed:(H2HWebService * _Null_unspecified)webService error:(H2HErrorObject * _Null_unspecified)error;
- (void)displayPollingRequestWithJson:(NSDictionary * _Nonnull)json;
- (void)handleCreatePoll:(id _Nonnull)data;
@end


SWIFT_CLASS("_TtC6H2HSDK14H2HRoundButton")
@interface H2HRoundButton : UIButton
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@end

@class UserInfo;
@class NSArray;
@class NSDate;

SWIFT_CLASS("_TtC6H2HSDK17H2HSDKHttpRequest")
@interface H2HSDKHttpRequest : NSObject
+ (H2HSDKHttpRequest * _Nonnull)sharedInstance;
- (void)signUpH2HUser:(NSString * _Nonnull)userName firstName:(NSString * _Nonnull)firstName lastName:(NSString * _Nonnull)lastName email:(NSString * _Nonnull)email password:(NSString * _Nonnull)password locale:(NSString * _Nonnull)locale success:(void (^ _Nonnull)(NSString * _Nonnull successMessage))success failure:(void (^ _Nonnull)(NSString * _Nonnull errorMessage))failure;
- (void)loginWith:(NSString * _Nonnull)email password:(NSString * _Nonnull)password success:(void (^ _Nonnull)(UserInfo * _Nonnull userInfo))success failure:(void (^ _Nonnull)(NSString * _Nonnull errorMessage))failure;
- (void)startMeetingWith:(NSString * _Nonnull)description isGroupMeeting:(BOOL)isGroupMeeting shouldRecordMeeting:(BOOL)shouldRecordMeeting subject:(NSString * _Nonnull)subject attendeesEmailList:(NSArray * _Nonnull)attendeesEmailList translatorList:(NSArray * _Nonnull)translatorList success:(void (^ _Nonnull)(NSString * _Nonnull serverURL, NSString * _Nonnull meetingUri, NSString * _Nonnull referrer, NSString * _Nonnull origin))success failure:(void (^ _Nonnull)(NSString * _Nonnull errorMessage))failure;
- (void)startInstantMeetingWith:(NSString * _Nonnull)displayName email:(NSString * _Nullable)email locale:(NSString * _Nonnull)locale success:(void (^ _Nonnull)(NSString * _Nonnull serverURL, NSString * _Nonnull meetingUri, NSString * _Nonnull referrer, NSString * _Nonnull origin))success failure:(void (^ _Nonnull)(NSString * _Nonnull errorMessage))failure;
- (void)joinMeetingWithEmail:(NSString * _Nonnull)meetingId email:(NSString * _Nonnull)email success:(void (^ _Nonnull)(NSString * _Nonnull serverURL, NSString * _Nonnull meetingUri, NSString * _Nonnull referrer, NSString * _Nonnull origin))success failure:(void (^ _Nonnull)(NSString * _Nonnull errorMessage))failure;
- (void)joinMeetingByMeetingID:(NSString * _Nonnull)meetingId success:(void (^ _Nonnull)(NSString * _Nonnull serverURL, NSString * _Nonnull meetingUri, NSString * _Nonnull referrer, NSString * _Nonnull origin))success failure:(void (^ _Nonnull)(NSString * _Nonnull errorMessage))failure;
- (void)scheduleMeetingWith:(NSString * _Nonnull)description isGroupMeeting:(BOOL)isGroupMeeting shouldRecordMeeting:(BOOL)shouldRecordMeeting subject:(NSString * _Nonnull)subject attendeesEmailList:(NSArray * _Nonnull)attendeesEmailList translatorList:(NSArray * _Nonnull)translatorList startDateTime:(NSDate * _Nonnull)startDateTime endDateTime:(NSDate * _Nonnull)endDateTime success:(void (^ _Nonnull)(NSString * _Nonnull meetingID))success failure:(void (^ _Nonnull)(NSString * _Nonnull errorMessage))failure;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC6H2HSDK27H2HVBPieChartViewController")
@interface H2HVBPieChartViewController : UIViewController
@property (nonatomic, copy) NSArray<H2HChartOptionModel *> * _Nullable arrayChartOptionModel;
@property (nonatomic, copy) NSString * _Nullable stringChartTitle;
@property (nonatomic, strong) id <PieChartToPollsManagerDelegate> _Nullable delegate;
- (void)viewDidLoad;
- (void)refreshChartWithData:(NSArray<H2HChartOptionModel *> * _Nullable)arrayChartModel;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class NSURLSession;
@class NSURLAuthenticationChallenge;
@class NSURLCredential;
@class UITouch;
@class UIEvent;

SWIFT_CLASS("_TtC6H2HSDK27H2HWhiteBoardViewController")
@interface H2HWhiteBoardViewController : UIViewController <NSURLSessionDelegate, UIAdaptivePresentationControllerDelegate, UIPopoverPresentationControllerDelegate>
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)animated;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)URLSession:(NSURLSession * _Nonnull)session didReceiveChallenge:(NSURLAuthenticationChallenge * _Nonnull)challenge completionHandler:(void (^ _Nonnull)(NSURLSessionAuthChallengeDisposition, NSURLCredential * _Nullable))completionHandler;
- (UIModalPresentationStyle)adaptivePresentationStyleForPresentationController:(UIPresentationController * _Nonnull)controller;
- (void)touchesBegan:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesMoved:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesEnded:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC6H2HSDK31H2HWhiteboardHintViewController")
@interface H2HWhiteboardHintViewController : UIViewController
- (void)viewDidLoad;
+ (void)showHint:(NSString * _Nonnull)text parentView:(UIView * _Nonnull)parentView frame:(CGRect)frame duration:(NSTimeInterval)duration;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC6H2HSDK20H2HWhiteboardManager")
@interface H2HWhiteboardManager : NSObject <NSURLSessionDelegate>
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC6H2HSDK34H2HWhiteboardManagerViewController")
@interface H2HWhiteboardManagerViewController : UIViewController <NSURLSessionDelegate, UIAdaptivePresentationControllerDelegate, UIPopoverPresentationControllerDelegate>
- (void)viewDidLoad;
- (UIModalPresentationStyle)adaptivePresentationStyleForPresentationController:(UIPresentationController * _Nonnull)controller;
- (void)didReceiveMemoryWarning;
- (void)disconnect;
- (void)touchesBegan:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesEnded:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesMoved:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)URLSession:(NSURLSession * _Nonnull)session didReceiveChallenge:(NSURLAuthenticationChallenge * _Nonnull)challenge completionHandler:(void (^ _Nonnull)(NSURLSessionAuthChallengeDisposition, NSURLCredential * _Nullable))completionHandler;
- (void)hidePageSwitchView;
- (void)showPageSwitchView;
- (void)keyboardDidShowWithHeight:(CGFloat)keyboardHeight;
- (void)keyboardWillHide;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface NSDictionary (SWIFT_EXTENSION(H2HSDK))
@end



SWIFT_CLASS("_TtC6H2HSDK16SocketAckEmitter")
@interface SocketAckEmitter : NSObject
- (void)with:(NSArray * _Nonnull)items;
@end


SWIFT_CLASS("_TtC6H2HSDK14SocketAnyEvent")
@interface SocketAnyEvent : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull event;
@property (nonatomic, readonly, strong) NSArray * _Nullable items;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
@end

@protocol SocketEngineClient;
@class NSHTTPCookie;
@class NSTimer;
@class NSURL;
@class NSData;
enum SocketEnginePacketType : NSInteger;

SWIFT_PROTOCOL("_TtP6H2HSDK16SocketEngineSpec_")
@protocol SocketEngineSpec
@property (nonatomic, weak) id <SocketEngineClient> _Nullable client;
@property (nonatomic, readonly) BOOL closed;
@property (nonatomic, readonly) BOOL connected;
@property (nonatomic, copy) NSDictionary<NSString *, id> * _Nullable connectParams;
@property (nonatomic, readonly) BOOL doubleEncodeUTF8;
@property (nonatomic, readonly, copy) NSArray<NSHTTPCookie *> * _Nullable cookies;
@property (nonatomic, readonly, copy) NSDictionary<NSString *, NSString *> * _Nullable extraHeaders;
@property (nonatomic, readonly) BOOL fastUpgrade;
@property (nonatomic, readonly) BOOL forcePolling;
@property (nonatomic, readonly) BOOL forceWebsockets;
@property (nonatomic, readonly, strong) dispatch_queue_t _Null_unspecified parseQueue;
@property (nonatomic, readonly, strong) NSTimer * _Nullable pingTimer;
@property (nonatomic, readonly) BOOL polling;
@property (nonatomic, readonly) BOOL probing;
@property (nonatomic, readonly, strong) dispatch_queue_t _Null_unspecified emitQueue;
@property (nonatomic, readonly, strong) dispatch_queue_t _Null_unspecified handleQueue;
@property (nonatomic, readonly, copy) NSString * _Nonnull sid;
@property (nonatomic, readonly, copy) NSString * _Nonnull socketPath;
@property (nonatomic, readonly, strong) NSURL * _Nonnull urlPolling;
@property (nonatomic, readonly, strong) NSURL * _Nonnull urlWebSocket;
@property (nonatomic, readonly) BOOL websocket;
- (nonnull instancetype)initWithClient:(id <SocketEngineClient> _Nonnull)client url:(NSURL * _Nonnull)url options:(NSDictionary * _Nullable)options;
- (void)close:(NSString * _Nonnull)reason;
- (void)connect;
- (void)didError:(NSString * _Nonnull)error;
- (void)disconnect:(NSString * _Nonnull)reason;
- (void)doFastUpgrade;
- (void)flushWaitingForPostToWebSocket;
- (void)open;
- (void)parseEngineData:(NSData * _Nonnull)data;
- (void)parseEngineMessage:(NSString * _Nonnull)message fromPolling:(BOOL)fromPolling;
- (void)write:(NSString * _Nonnull)msg withType:(enum SocketEnginePacketType)type withData:(NSArray<NSData *> * _Nonnull)data;
@end

@class WebSocket;
@class NSError;

SWIFT_CLASS("_TtC6H2HSDK12SocketEngine")
@interface SocketEngine : NSObject <SocketEngineSpec>
@property (nonatomic, readonly, strong) dispatch_queue_t _Nonnull emitQueue;
@property (nonatomic, readonly, strong) dispatch_queue_t _Nonnull handleQueue;
@property (nonatomic, readonly, strong) dispatch_queue_t _Nonnull parseQueue;
@property (nonatomic, copy) NSDictionary<NSString *, id> * _Nullable connectParams;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull postWait;
@property (nonatomic) BOOL waitingForPoll;
@property (nonatomic) BOOL waitingForPost;
@property (nonatomic, readonly) BOOL closed;
@property (nonatomic, readonly) BOOL connected;
@property (nonatomic, readonly, copy) NSArray<NSHTTPCookie *> * _Nullable cookies;
@property (nonatomic, readonly) BOOL doubleEncodeUTF8;
@property (nonatomic, readonly, copy) NSDictionary<NSString *, NSString *> * _Nullable extraHeaders;
@property (nonatomic, readonly) BOOL fastUpgrade;
@property (nonatomic, readonly) BOOL forcePolling;
@property (nonatomic, readonly) BOOL forceWebsockets;
@property (nonatomic, readonly) BOOL invalidated;
@property (nonatomic, readonly, strong) NSTimer * _Nullable pingTimer;
@property (nonatomic, readonly) BOOL polling;
@property (nonatomic, readonly) BOOL probing;
@property (nonatomic, readonly, strong) NSURLSession * _Nullable session;
@property (nonatomic, readonly, copy) NSString * _Nonnull sid;
@property (nonatomic, readonly, copy) NSString * _Nonnull socketPath;
@property (nonatomic, readonly, strong) NSURL * _Nonnull urlPolling;
@property (nonatomic, readonly, strong) NSURL * _Nonnull urlWebSocket;
@property (nonatomic, readonly) BOOL websocket;
@property (nonatomic, readonly, strong) WebSocket * _Nullable ws;
@property (nonatomic, weak) id <SocketEngineClient> _Nullable client;
- (nonnull instancetype)initWithClient:(id <SocketEngineClient> _Nonnull)client url:(NSURL * _Nonnull)url options:(NSDictionary * _Nullable)options;
- (nonnull instancetype)initWithClient:(id <SocketEngineClient> _Nonnull)client urlString:(NSString * _Nonnull)urlString options:(NSDictionary * _Nullable)options;
- (void)close:(NSString * _Nonnull)reason;

/// Starts the connection to the server
- (void)connect;
- (void)didError:(NSString * _Nonnull)error;
- (void)disconnect:(NSString * _Nonnull)reason;
- (void)doFastUpgrade;
- (void)flushWaitingForPostToWebSocket;
- (void)open;
- (void)parseEngineData:(NSData * _Nonnull)data;
- (void)parseEngineMessage:(NSString * _Nonnull)message fromPolling:(BOOL)fromPolling;

/// Write a message, independent of transport.
- (void)write:(NSString * _Nonnull)msg withType:(enum SocketEnginePacketType)type withData:(NSArray<NSData *> * _Nonnull)data;
- (void)websocketDidConnect:(WebSocket * _Nonnull)socket;
- (void)websocketDidDisconnect:(WebSocket * _Nonnull)socket error:(NSError * _Nullable)error;
@end


SWIFT_PROTOCOL("_TtP6H2HSDK18SocketEngineClient_")
@protocol SocketEngineClient
- (void)engineDidError:(NSString * _Nonnull)reason;
- (void)engineDidClose:(NSString * _Nonnull)reason;
@optional
- (void)engineDidOpen:(NSString * _Nonnull)reason;
@required
- (void)parseEngineMessage:(NSString * _Nonnull)msg;
- (void)parseEngineBinaryData:(NSData * _Nonnull)data;
@end

typedef SWIFT_ENUM(NSInteger, SocketEnginePacketType) {
  SocketEnginePacketTypeOpen = 0,
  SocketEnginePacketTypeClose = 1,
  SocketEnginePacketTypePing = 2,
  SocketEnginePacketTypePong = 3,
  SocketEnginePacketTypeMessage = 4,
  SocketEnginePacketTypeUpgrade = 5,
  SocketEnginePacketTypeNoop = 6,
};


enum SocketIOClientStatus : NSInteger;
@class NSUUID;

SWIFT_CLASS("_TtC6H2HSDK14SocketIOClient")
@interface SocketIOClient : NSObject <SocketEngineClient>
@property (nonatomic, readonly, strong) NSURL * _Nonnull socketURL;
@property (nonatomic, readonly, strong) id <SocketEngineSpec> _Nullable engine;
@property (nonatomic, readonly) enum SocketIOClientStatus status;
@property (nonatomic) BOOL forceNew;
@property (nonatomic, copy) NSString * _Nonnull nsp;
@property (nonatomic) BOOL reconnects;
@property (nonatomic) NSInteger reconnectWait;
@property (nonatomic, readonly, copy) NSString * _Nullable sid;

/// Not so type safe way to create a SocketIOClient, meant for Objective-C compatiblity. If using Swift it's recommended to use init(socketURL: NSURL, options: Set<SocketIOClientOption>)
- (nonnull instancetype)initWithSocketURL:(NSURL * _Nonnull)socketURL options:(NSDictionary * _Nullable)options;
- (nonnull instancetype)initWithSocketURLString:(NSString * _Nonnull)socketURLString options:(NSDictionary * _Nullable)options;
- (void)close;

/// Connect to the server.
- (void)connect;

/// Connect to the server. If we aren't connected after timeoutAfter, call handler
- (void)connectWithTimeoutAfter:(NSInteger)timeoutAfter withTimeoutHandler:(void (^ _Nullable)(void))handler;

/// Disconnects the socket. Only reconnect the same socket if you know what you're doing. Will turn off automatic reconnects.
- (void)disconnect;

/// Same as emit, but meant for Objective-C
- (void)emit:(NSString * _Nonnull)event withItems:(NSArray * _Nonnull)items;

/// Same as emitWithAck, but for Objective-C
- (void (^ _Nonnull)(uint64_t timeoutAfter, void (^ _Nonnull callback)(NSArray * _Nonnull)))emitWithAck:(NSString * _Nonnull)event withItems:(NSArray * _Nonnull)items;
- (void)engineDidClose:(NSString * _Nonnull)reason;

/// error
- (void)engineDidError:(NSString * _Nonnull)reason;

/// Causes an event to be handled. Only use if you know what you're doing.
- (void)handleEvent:(NSString * _Nonnull)event data:(NSArray * _Nonnull)data isInternalMessage:(BOOL)isInternalMessage withAck:(NSInteger)ack;

/// Leaves nsp and goes back to /
- (void)leaveNamespace;

/// Joins namespace
- (void)joinNamespace:(NSString * _Nonnull)namespace_;

/// Removes handler(s) based on name
- (void)off:(NSString * _Nonnull)event;

/// Removes a handler with the specified UUID gotten from an on or once
- (void)offWithId:(NSUUID * _Nonnull)id;

/// Adds a handler for an event. Returns: A unique id for the handler
- (NSUUID * _Nonnull)on:(NSString * _Nonnull)event callback:(void (^ _Nonnull)(NSArray * _Nonnull, SocketAckEmitter * _Nonnull))callback;

/// Adds a single-use handler for an event. Returns: A unique id for the handler
- (NSUUID * _Nonnull)once:(NSString * _Nonnull)event callback:(void (^ _Nonnull)(NSArray * _Nonnull, SocketAckEmitter * _Nonnull))callback;

/// Adds a handler that will be called on every event.
- (void)onAny:(void (^ _Nonnull)(SocketAnyEvent * _Nonnull))handler;
- (void)open;
- (void)parseEngineMessage:(NSString * _Nonnull)msg;
- (void)parseEngineBinaryData:(NSData * _Nonnull)data;

/// Tries to reconnect to the server.
- (void)reconnect;

/// Removes all handlers. Can be used after disconnecting to break any potential remaining retain cycles.
- (void)removeAllHandlers;
@end


@interface SocketIOClient (SWIFT_EXTENSION(H2HSDK))
@end

typedef SWIFT_ENUM(NSInteger, SocketIOClientStatus) {
  SocketIOClientStatusNotConnected = 0,
  SocketIOClientStatusClosed = 1,
  SocketIOClientStatusConnecting = 2,
  SocketIOClientStatusConnected = 3,
};


@interface UIColor (SWIFT_EXTENSION(H2HSDK))
@end

@class NSNumber;

SWIFT_CLASS("_TtC6H2HSDK8UserInfo")
@interface UserInfo : NSObject
@property (nonatomic, strong) NSNumber * _Nonnull recordingDefault;
@property (nonatomic, strong) NSNumber * _Nonnull isCtAdmin;
@property (nonatomic, strong) NSNumber * _Nonnull isAdmin;
@property (nonatomic, copy) NSString * _Nonnull apiToken;
@property (nonatomic, strong) NSNumber * _Nonnull uploadLimit;
@property (nonatomic, copy) NSString * _Nonnull screenName;
@property (nonatomic, strong) NSNumber * _Nonnull attendeesLimit;
@property (nonatomic, copy) NSString * _Nonnull countryCode;
@property (nonatomic, strong) NSNumber * _Nonnull accountType;
@property (nonatomic, copy) NSString * _Nonnull avatar;
@property (nonatomic, strong) NSNumber * _Nonnull returnCode;
@property (nonatomic, strong) NSNumber * _Nonnull logo;
@property (nonatomic, copy) NSString * _Nonnull timeZone;
@property (nonatomic, copy) NSString * _Nonnull token;
@property (nonatomic, strong) NSNumber * _Nonnull userId;
@property (nonatomic, strong) NSNumber * _Nonnull accountSn;
@property (nonatomic, copy) NSString * _Nonnull email;
@property (nonatomic, copy) NSString * _Nonnull name;
@property (nonatomic, strong) NSNumber * _Nonnull isSystemChecked;
@property (nonatomic, copy) NSString * _Nonnull phone;
- (nonnull instancetype)initWithRecordingDefault:(NSNumber * _Nonnull)recordingDefault isCtAdmin:(NSNumber * _Nonnull)isCtAdmin isAdmin:(NSNumber * _Nonnull)isAdmin apiToken:(NSString * _Nonnull)apiToken uploadLimit:(NSNumber * _Nonnull)uploadLimit screenName:(NSString * _Nonnull)screenName attendeesLimit:(NSNumber * _Nonnull)attendeesLimit countryCode:(NSString * _Nonnull)countryCode accountType:(NSNumber * _Nonnull)accountType avatar:(NSString * _Nonnull)avatar returnCode:(NSNumber * _Nonnull)returnCode logo:(NSNumber * _Nonnull)logo timeZone:(NSString * _Nonnull)timeZone token:(NSString * _Nonnull)token userId:(NSNumber * _Nonnull)userId accountSn:(NSNumber * _Nonnull)accountSn email:(NSString * _Nonnull)email name:(NSString * _Nonnull)name isSystemChecked:(NSNumber * _Nonnull)isSystemChecked phone:(NSString * _Nonnull)phone OBJC_DESIGNATED_INITIALIZER;
@end

@class NSStream;

SWIFT_CLASS("_TtC6H2HSDK9WebSocket")
@interface WebSocket : NSObject <NSStreamDelegate>
+ (NSString * _Nonnull)ErrorDomain;
@property (nonatomic, strong) dispatch_queue_t _Nonnull queue;
@property (nonatomic, copy) void (^ _Nullable onConnect)(void);
@property (nonatomic, copy) void (^ _Nullable onDisconnect)(NSError * _Nullable);
@property (nonatomic, copy) void (^ _Nullable onText)(NSString * _Nonnull);
@property (nonatomic, copy) void (^ _Nullable onData)(NSData * _Nonnull);
@property (nonatomic, copy) void (^ _Nullable onPong)(void);
@property (nonatomic, copy) NSDictionary<NSString *, NSString *> * _Nonnull headers;
@property (nonatomic) BOOL voipEnabled;
@property (nonatomic) BOOL selfSignedSSL;
@property (nonatomic, copy) NSString * _Nullable origin;
@property (nonatomic, readonly) BOOL isConnected;
@property (nonatomic, readonly, strong) NSURL * _Nonnull currentURL;
- (nonnull instancetype)initWithUrl:(NSURL * _Nonnull)url protocols:(NSArray<NSString *> * _Nullable)protocols OBJC_DESIGNATED_INITIALIZER;

/// Connect to the websocket server on a background thread
- (void)connect;

/// write a string to the websocket. This sends it as a text frame.
- (void)writeString:(NSString * _Nonnull)str;

/// write binary data to the websocket. This sends it as a binary frame.
- (void)writeData:(NSData * _Nonnull)data;
- (void)writePing:(NSData * _Nonnull)data;
- (void)stream:(NSStream * _Nonnull)aStream handleEvent:(NSStreamEvent)eventCode;
@end

#pragma clang diagnostic pop