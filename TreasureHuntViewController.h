#import <UIKit/UIKit.h>
#import <OpenEars/OEEventsObserver.h>
#import <SpeechKit/SpeechKit.h>

@interface TreasureHuntViewController : UIViewController <OEEventsObserverDelegate>


- (void)transaction:(SKTransaction *)transaction didReceiveRecognition:(SKRecognition *)recognition;

@end


