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
TORCH_API at::Tensor fft_hfft2_symint(const at::Tensor & self, at::OptionalSymIntArrayRef s=::std::nullopt, at::IntArrayRef dim={-2,-1}, ::std::optional<c10::string_view> norm=::std::nullopt);
TORCH_API const at::Tensor & fft_hfft2_symint_out(const at::Tensor & self, at::OptionalSymIntArrayRef s, at::IntArrayRef dim, ::std::optional<c10::string_view> norm, const at::Tensor & out);
} // namespace native
} // namespace at
