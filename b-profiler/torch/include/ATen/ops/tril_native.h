#pragma once

// @generated by torchgen/gen.py from NativeFunction.h

#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <optional>
#include <c10/core/QScheme.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <tuple>
#include <vector>
#include <ATen/ops/tril_meta.h>

namespace at {
namespace native {
struct TORCH_API structured_tril_cpu : public at::meta::structured_tril {
void impl(const at::Tensor & self, int64_t diagonal, const at::Tensor & out);
};
struct TORCH_API structured_tril_cuda : public at::meta::structured_tril {
void impl(const at::Tensor & self, int64_t diagonal, const at::Tensor & out);
};
struct TORCH_API structured_tril_mps_out : public at::meta::structured_tril {
void impl(const at::Tensor & self, int64_t diagonal, const at::Tensor & out);
};
} // namespace native
} // namespace at
