/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@class ICSDateValue, NSString;

@interface ICSUserAddress : ICSProperty {
}

@property(retain) NSString * cn;
@property int cutype;
@property(retain) NSString * dir;
@property(retain) NSString * email;
@property int partstat;
@property(retain) ICSDateValue * partstatModified;
@property int role;
@property BOOL rsvp;
@property int scheduleagent;
@property int scheduleforcesend;
@property int schedulestatus;
@property BOOL x_apple_self_invited;

+ (id)ICSStringFromCalendarUser:(int)arg1;
+ (id)ICSStringFromParticipationStatus:(int)arg1;
+ (id)ICSStringFromRole:(int)arg1;
+ (id)ICSStringFromScheduleAgent:(int)arg1;
+ (id)ICSStringFromScheduleForceSend:(int)arg1;
+ (id)ICSStringFromScheduleStatus:(int)arg1;
+ (id)URLForNoMail;
+ (int)calendarUserFromICSString:(id)arg1;
+ (int)participationStatusFromICSString:(id)arg1;
+ (int)roleFromICSString:(id)arg1;
+ (int)scheduleAgentFromICSString:(id)arg1;
+ (int)scheduleForceSendFromICSString:(id)arg1;
+ (int)scheduleStatusFromICSString:(id)arg1;

- (id)cn;
- (int)cutype;
- (id)dir;
- (id)displayName;
- (id)email;
- (id)emailAddress;
- (void)fixAddress;
- (BOOL)hasEmailAddress;
- (id)initWithEmailAddress:(id)arg1;
- (id)initWithURL:(id)arg1;
- (BOOL)isEmailAddress;
- (BOOL)isHTTPAddress;
- (BOOL)isHTTPSAddress;
- (id)parametersToObscure;
- (int)partstat;
- (id)partstatModified;
- (id)propertiesToObscure;
- (int)role;
- (BOOL)rsvp;
- (int)scheduleagent;
- (int)scheduleforcesend;
- (int)schedulestatus;
- (void)setCn:(id)arg1;
- (void)setCutype:(int)arg1;
- (void)setDir:(id)arg1;
- (void)setEmail:(id)arg1;
- (void)setPartstat:(int)arg1;
- (void)setPartstatModified:(id)arg1;
- (void)setRole:(int)arg1;
- (void)setRsvp:(BOOL)arg1;
- (void)setScheduleagent:(int)arg1;
- (void)setScheduleforcesend:(int)arg1;
- (void)setSchedulestatus:(int)arg1;
- (void)setURL:(id)arg1;
- (void)setX_apple_self_invited:(BOOL)arg1;
- (void)setX_calendarserver_email:(id)arg1;
- (BOOL)shouldObscureValue;
- (BOOL)x_apple_self_invited;
- (id)x_calendarserver_email;

@end
