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


namespace at {
namespace native {
TORCH_API at::Tensor take_along_dim(const at::Tensor & self, const at::Tensor & indices, ::std::optional<int64_t> dim=::std::nullopt);
TORCH_API at::Tensor & take_along_dim_out(const at::Tensor & self, const at::Tensor & indices, ::std::optional<int64_t> dim, at::Tensor & out);
} // namespace native
} // namespace at
