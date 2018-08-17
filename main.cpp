#include <mkl.h>

#include <chrono>
#include <iostream>

const int32_t N = 20000;

int main() {
  float *a = new float[N * N];
  float *b = new float[N * N];
  float *c = new float[N * N];
  for (int32_t i = 0; i < N; ++i) {
    for (int32_t j = 0; j < N; ++j) {
      a[i * N + j] = i + 1.0f;
      b[i * N + j] = j + 1.0f;
    }
  }
  float alpha = 1.0;
  float beta = 0.0;
  cblas_sgemm(CblasRowMajor, CblasNoTrans, CblasNoTrans, N, N, N, alpha, a, N, b, N, beta, c, N);
  std::cout << c[0] << std::endl;
  delete[] a;
  delete[] b;
  delete[] c;
}
