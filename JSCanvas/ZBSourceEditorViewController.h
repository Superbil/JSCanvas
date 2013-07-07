/*!
 * The controller to help editing JavaScript source code.
 */
@import CoreImage;
#import "ZBJavaScriptDocument.h"

@interface ZBSourceEditorViewController : UIViewController

- (instancetype)initWithDocoment:(ZBJavaScriptDocument *)document;
- (IBAction)run:(id)sender;
- (IBAction)showMoreOptions:(id)sender;
- (IBAction)showAPIReference:(id)sender;

@property (readonly, nonatomic) ZBJavaScriptDocument *document;
@property (retain, nonatomic) IBOutlet UITextView *textView;
@property (retain, nonatomic) NSString *currentScript;
@end
