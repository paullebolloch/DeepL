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
#include <ATen/ops/aminmax_meta.h>

namespace at {
namespace native {
struct TORCH_API structured_aminmax_out : public at::meta::structured_aminmax {
void impl(const at::Tensor & self, ::std::optional<int64_t> dim, bool keepdim, const at::Tensor & min, const at::Tensor & max);
};
struct TORCH_API structured_aminmax_out_mps : public at::meta::structured_aminmax {
void impl(const at::Tensor & self, ::std::optional<int64_t> dim, bool keepdim, const at::Tensor & min, const at::Tensor & max);
};
} // namespace native
} // namespace at
