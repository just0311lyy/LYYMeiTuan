
//分类模型

#import "HomeDropdownModel.h"

@interface CategoryModel : HomeDropdownModel

@property(nonatomic,copy)NSString *name;
@property(nonatomic,strong)NSArray *subcategories;

//显示在导航栏顶部的大图标
@property(nonatomic,copy)NSString *highlighted_icon;
@property(nonatomic,copy)NSString *icon;

//显示在下拉菜单中的小图标
@property(nonatomic,copy)NSString *small_highlighted_icon;
@property(nonatomic,copy)NSString *small_icon;

//显示在地图上的图标
@property(nonatomic,copy)NSString *map_icon;

@end
