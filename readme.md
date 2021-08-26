## 使用方式
将插件添加到项目中，之后将BP_CheckFloatorDrown拖拽到需要检测的场景中。

在details面板中配置检测方式，地形的collision type，需要检测的物品类名，输出文件的绝对路径以及允许的误差范围。

运行后即可在details面板中的abnormal item中看到可能存在浮空或陷地情况的物品，同时输出所有abnormal item中的物品情况到文件Floating_or_Drowning_Actors.csv中。

### 检测方式
检测方式包括三种

linetrace:仅检查某固定(x,y)对应地形高度和物品高度的差距

boxtrace:检查物品包围盒底部是否与地面有重叠（无法获得偏差值）

boundcheck:检查物品包围盒底部是否高于地面对应x,y范围内的高度

运行时每执行一次tick检查一次，可以通过调整tick频率调整检查频率

### 其他
可以选择只检查浮空或者只检查陷地，在details面板中设置即可

可以使用Ignore Actor配置一些想要忽略的物品，这样物品不会被检测。