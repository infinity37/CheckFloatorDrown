## 使用方式
将插件添加到项目中，之后将BP_CheckFloatorDrown拖拽到需要检测的场景中。

在details面板中配置检测方式，地形的collision type，需要检测的物品类名，输出文件的绝对路径以及允许的误差范围。

运行后即可在details面板中的abnormal item中看到可能存在浮空或陷地情况的物品，同时输出所有abnormal item中的物品情况（包括路径名、位置、具体状态和大概偏差值）到文件Floating_or_Drowning_Actors.csv中。

### 检测方式
检测方式包括三种

linetrace:仅检查某固定(x,y)对应地形高度和物品高度的差距

boxtrace:检查actor边界框x,y范围内物品最低点与地面最高点的高度差距

boundcheck:检查actor边界框是否高于地面

运行时每执行一次tick检查一次，可以通过调整tick频率调整检查频率

### 其他
可以选择只检查浮空或者只检查陷地，在details面板中设置即可

可以使用Ignore Actor配置一些想要忽略的物品，这样物品不会被检测。