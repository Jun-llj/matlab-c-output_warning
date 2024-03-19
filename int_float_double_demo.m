n = 9;

disp('n in matlab:');
disp(n);

% 错误的
% output_n = int_int_demo(n);% 输入int, 输出int
% output_n = double_int_demo(n);% 输入double, 输出int
% output_n = double_float_demo(n);% 输入double, 输出float

% 正确的
% output_n = int_double_demo(n);% 输入int, 输出double
% output_n = double_double_demo(n);% 输入double, 输出double



disp('output_n in matlab:');
disp(output_n);