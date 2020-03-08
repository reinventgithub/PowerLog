# PowerLog
比NSLog更好的log

## 如何使用PowerLog
* 把代码clone或download到本地
* 将 `PowerLog/PowerLog/PowerLog` 文件夹拽入项目中
* 在.pch中 `#import "PowerLog.h"`
* 接下来就可以在整个项目中使用PowerLog了


## 示例
```objc
- (void)viewDidLoad 
{
    [super viewDidLoad];
    NSString *str = @"NSLog&PowerLog";
    NSLog(@"str = %@", str);
    powerLog(str);
}
```
```
2015-04-05 11:31:24.333 PowerLog[8081:46235] str = NSLog&PowerLog
22 -[ViewController viewDidLoad] %@ str = NSLog&PowerLog
 ```        
* `22` 所在行
* `-[ViewController viewDidLoad]` powerLog被哪个类和方法调用
* `%@` 格式控制符
* `str` 变量名（powerLog()括号中的变量名，属性名，类名，字面量等会形式化的输出）


## 期待
* 如果使用中遇到问题或BUG，你可以Issue我
