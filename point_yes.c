#include "mex.h"
#include <stdio.h>

void point_yes(double a, double* output_aa) {

    printf("In C, a = %.2f\n", a);
    *output_aa = a*2;
    printf("In C, output_aa = %.2f\n\n", *output_aa);
    
}

void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]) {
    // 获取输入参数
    double a = mxGetScalar(prhs[0]);
    
    // 分配输出参数内存
    plhs[0] = mxCreateDoubleScalar(0);
   
    // 获取输出参数指针!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    double* output_aa = mxGetPr(plhs[0]);
    
    // 调用函数计算结果
    point_yes(a, output_aa);
}
