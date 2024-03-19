#include "mex.h"

//输入double, 输出double
void double_float_demo(double n, float *output_n) {
    
    printf("int n in C = %.2f\n", n);
    
    *output_n = n;

    printf("int output_n in C = %.2f\n\n", *output_n);

}

void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]) {

    // 获取输入参数
    double n = mxGetScalar(prhs[0]);

    // 分配输出参数内存
    plhs[0] = mxCreateDoubleScalar(0);

    // 获取输出参数指针

    float *output_n = (float *)mxGetPr(plhs[0]);


    // 调用函数计算结果
    double_float_demo(n, output_n);
}
