#include "mex.h"
#include <stdio.h>

void point_no(double a, double output_aa) {

    printf("In C, a = %.2f\n", a);
    output_aa = a*2;
    printf("In C, output_aa = %.2f\n", output_aa);
    
}

void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]) {
    // 获取输入参数
    double a = mxGetScalar(prhs[0]);
    
    // 分配输出参数内存
    plhs[0] = mxCreateDoubleScalar(0);
   
    // 获取输出参数指针, 但是声明为普通double变量
    // double output_aa = mxGetPr(plhs[0]);//直接编译无法通过

    // 获取输出参数指针, 但是声明为double *
    // double* output_aa = mxGetPr(plhs[0]);//直接编译无法通过
    
    // 调用函数计算结果
    point_no(a, output_aa);
}
