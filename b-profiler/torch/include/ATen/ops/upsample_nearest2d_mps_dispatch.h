#pragma once
// @generated by torchgen/gen.py from DispatchKeyFunction.h

// NB: The implementing C++ file is RegisterDispatchKey.cpp

// The only #includes we need are for custom classes that have defaults in the C++ API
#include <c10/core/MemoryFormat.h>
#include <c10/core/Scalar.h>
#include <ATen/core/Reduction.h>

// Forward declarations of any types needed in the operator signatures.
// We can't directly include these classes because it will cause circular include dependencies.
// This file is included by TensorBody.h, which defines the Tensor class.
#include <ATen/core/ATen_fwd.h>

namespace at {

namespace mps {

TORCH_API at::Tensor upsample_nearest2d(const at::Tensor & self, at::IntArrayRef output_size, ::std::optional<double> scales_h=::std::nullopt, ::std::optional<double> scales_w=::std::nullopt);
TORCH_API at::Tensor upsample_nearest2d_symint(const at::Tensor & self, c10::SymIntArrayRef output_size, ::std::optional<double> scales_h=::std::nullopt, ::std::optional<double> scales_w=::std::nullopt);
TORCH_API at::Tensor & upsample_nearest2d_out(at::Tensor & out, const at::Tensor & self, at::IntArrayRef output_size, ::std::optional<double> scales_h=::std::nullopt, ::std::optional<double> scales_w=::std::nullopt);
TORCH_API at::Tensor & upsample_nearest2d_outf(const at::Tensor & self, at::IntArrayRef output_size, ::std::optional<double> scales_h, ::std::optional<double> scales_w, at::Tensor & out);
TORCH_API at::Tensor & upsample_nearest2d_symint_out(at::Tensor & out, const at::Tensor & self, c10::SymIntArrayRef output_size, ::std::optional<double> scales_h=::std::nullopt, ::std::optional<double> scales_w=::std::nullopt);
TORCH_API at::Tensor & upsample_nearest2d_symint_outf(const at::Tensor & self, c10::SymIntArrayRef output_size, ::std::optional<double> scales_h, ::std::optional<double> scales_w, at::Tensor & out);

} // namespace mps
} // namespace at
