在matlab和C语言混合编程中有很多注意事项，其中mexfunction()的输入输出就是一个非常容易踩坑的地方
有两点需要注意：
1. 即使输出的是标量，也要用指针
   1. ——对应point_or_not.m
   2. 测试的.c文件有
      1. output_aa = point_yes(a);
      2. output_aa = point_no(a);
2. 输出参数只能设置为double，不允许设置为其他数据类型（如int、float）（仅限数字）
   1. 对应int_float_double_demo.m
   2. 测试的.c文件有
      1. int_int_demo();// 输入int, 输出int
      2. double_int_demo();// 输入double, 输出int
      3. double_float_demo();// 输入double, 输出float
      4. int_double_demo();// 输入int, 输出double
      5. double_double_demo();// 输入double, 输出double
