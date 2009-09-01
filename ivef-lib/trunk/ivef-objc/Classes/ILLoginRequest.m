
#import "ILLoginRequest.h"


@implementation ILLoginRequest

- (id) init {
    self = [super init];
    if (self != nil) {
    }
    return self;
}

- (void) dealloc {

    [m_name release];
    [m_password release];
    [super dealloc];
}

- (NSString*) stringFromDate:(NSDate *)date {

     // new date strings can be in Zulu time
     static NSDateFormatter *formatterWithMillies = nil;
     if (date == nil) {
         return @""; // illigal date
     }
     if (formatterWithMillies == nil) {
         formatterWithMillies = [[NSDateFormatter alloc] init];
         [formatterWithMillies setDateFormat:@"yyyy-MM-dd'T'HH:mm:ss.SSS"];
     }
     return [[formatterWithMillies stringFromDate:date] stringByAppendingString:@"Z"]; // always zulu time
}

- (NSDate*) dateFromString:(NSString *)str {

     // new date strings can be in Zulu time
     str = [str stringByReplacingOccurrencesOfString:@"Z" withString:@""];

     static NSDateFormatter *formatterWithMillies = nil;
     if (formatterWithMillies == nil) {
         formatterWithMillies = [[NSDateFormatter alloc] init];
         [formatterWithMillies setDateFormat:@"yyyy-MM-dd'T'HH:mm:ss.SSS"];
     }
     static NSDateFormatter *formatterWithSeconds = nil;
     if (formatterWithSeconds == nil) {
         formatterWithSeconds = [[NSDateFormatter alloc] init];
         [formatterWithSeconds setDateFormat:@"yyyy-MM-dd'T'HH:mm:ss"];
     }
     static NSDateFormatter *formatterWithMinutes = nil;
     if (formatterWithMinutes == nil) {
         formatterWithMinutes = [[NSDateFormatter alloc] init];
         [formatterWithMinutes setDateFormat:@"yyyy-MM-dd'T'HH:mm"];
     }
     NSDate *val = [formatterWithMillies dateFromString:str];
     if (val) {
         return val;
     }
     val = [formatterWithSeconds dateFromString:str];
     if (val) {
         return val;
     }
     val = [formatterWithMinutes dateFromString:str];
     if (val) {
         return val;
     }
     return nil; // invalid date
}

-(void) setName:(NSString *) val {

    [m_name release];
    m_name = val;
    [m_name retain];
}

- (NSString *) name {

    return m_name;
}

-(void) setPassword:(NSString *) val {

    [m_password release];
    m_password = val;
    [m_password retain];
}

- (NSString *) password {

    return m_password;
}

-(void) setEncryption:(int) val {

    if ( ( val != 1 ) &&
         ( val != 2 ) )
        return;
    m_encryption = val;
}

- (int) encryption {

    return m_encryption;
}

-(void) setAttributes:(NSDictionary *)attributeDict {

        for (NSString *key in attributeDict) {
            if ([key isEqualToString: @"Name"]) {
                NSString *val = [attributeDict objectForKey: key];
                [self setName: val];
            }
            else if ([key isEqualToString:@"Password"]) {
                NSString *val = [attributeDict objectForKey: key];
                [self setPassword: val];
            }
            else if ([key isEqualToString:@"Encryption"]) {
                NSString *value = [attributeDict objectForKey: key];
                int val = [value intValue];
                [self setEncryption: val];
            }
        }
}

-(NSString *) XML {

    NSMutableString *xml = [NSMutableString stringWithString:@"<LoginRequest"];
    [xml appendString: @" Name=\""];
    [xml appendString: [self encode: m_name]];
    [xml appendString: @"\""];
    [xml appendString: @" Password=\""];
    [xml appendString: [self encode: m_password]];
    [xml appendString: @"\""];
    [xml appendString: @" Encryption=\""];
    [xml appendString: [NSString stringWithFormat:@"%d", m_encryption]];
    [xml appendString: @"\""];
    [xml appendString:@">\n"];
    [xml appendString: @"</LoginRequest>\n"];
    return xml;
}

-(NSString *) encode: (NSString *) input {

    NSMutableString *str = [[[NSMutableString alloc] initWithString: input] autorelease];

    [str replaceOccurrencesOfString: @"&" withString: @"&amp;" options: NSCaseInsensitiveSearch range: NSMakeRange(0, [str length])];
    [str replaceOccurrencesOfString: @"<" withString: @"&lt;" options: NSCaseInsensitiveSearch range: NSMakeRange(0, [str length])];
    [str replaceOccurrencesOfString: @">" withString: @"&gt;" options: NSCaseInsensitiveSearch range: NSMakeRange(0, [str length])];
    [str replaceOccurrencesOfString: @"\"" withString: @"&quot;" options: NSCaseInsensitiveSearch range: NSMakeRange(0, [str length])];

    return str;
}

-(NSString *) stringValue {

    return [self stringValueWithLead:@""];
}

-(NSString *) stringValueWithLead: (NSString *) lead {

    NSMutableString *str = [[[NSMutableString alloc] init] autorelease];
    [str setString: [lead stringByAppendingString:@"LoginRequest\n"]];
    [str appendString: [lead stringByAppendingString: @" "]];
    [str appendString: @"Name=\""];
    [str appendString: m_name];
    [str appendString: @"\"\n"];

    [str appendString: [lead stringByAppendingString: @" "]];
    [str appendString: @"Password=\""];
    [str appendString: m_password];
    [str appendString: @"\"\n"];

    [str appendString: [lead stringByAppendingString: @" "]];
    [str appendString: @"Encryption=\""];
    [str appendString: [NSString stringWithFormat:@"%d", m_encryption]];
    [str appendString: @"\"\n"];

    return str;
}

-(NSDictionary *) attributes {

    NSMutableDictionary *attr = [[[NSMutableDictionary alloc] init] autorelease];
    [attr setObject: m_name forKey: @"Name"];
    [attr setObject: m_password forKey: @"Password"];
    [attr setObject: [NSString stringWithFormat:@"%d", m_encryption] forKey: @"Encryption"];

    return attr;
}


@end


