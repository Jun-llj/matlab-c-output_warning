#include "mex.h"

//输入double, 输出int
void double_int_demo(double n, int *output_n) {
    
    printf("int n in C = %.2f\n", n);
    
    *output_n = n;

    printf("int output_n in C = %d\n\n", *output_n);

}

void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]) {

    // 获取输入参数
    double n = mxGetScalar(prhs[0]);

    // 分配输出参数内存
    plhs[0] = mxCreateDoubleScalar(0);

    // 获取输出参数指针
    int *output_n = (int *)mxGetPr(plhs[0]);

    // 调用函数计算结果
    double_int_demo(n, output_n);
}
