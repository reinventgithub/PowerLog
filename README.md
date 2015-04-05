# PowerLog
比NSLog更好的log


## 如何使用PowerLog
    * 将`PowerLog/PowerLog/PowerLog`文件夹拽入项目中
    * .pch中`#import "PowerLog.h"`


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
11:31:18 line:22 function:-[ViewController viewDidLoad] str = NSLog&PowerLog
 ```
11:31:18 时间        
line:22    所在行
function:-[ViewController viewDidLoad] powerLog被哪个类和方法调用
str 指针(powerLog()括号中变量名，属性名，类名，字面量等会形式化的输出)


## 期待
* 如果使用中有问题或BUG，你可以Issue我
