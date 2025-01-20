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

namespace compositeexplicitautograd {

TORCH_API at::Tensor & slice_scatter_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & src, int64_t dim=0, ::std::optional<int64_t> start=::std::nullopt, ::std::optional<int64_t> end=::std::nullopt, int64_t step=1);
TORCH_API at::Tensor & slice_scatter_outf(const at::Tensor & self, const at::Tensor & src, int64_t dim, ::std::optional<int64_t> start, ::std::optional<int64_t> end, int64_t step, at::Tensor & out);
TORCH_API at::Tensor & slice_scatter_symint_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & src, int64_t dim=0, ::std::optional<c10::SymInt> start=::std::nullopt, ::std::optional<c10::SymInt> end=::std::nullopt, c10::SymInt step=1);
TORCH_API at::Tensor & slice_scatter_symint_outf(const at::Tensor & self, const at::Tensor & src, int64_t dim, ::std::optional<c10::SymInt> start, ::std::optional<c10::SymInt> end, c10::SymInt step, at::Tensor & out);

} // namespace compositeexplicitautograd
} // namespace at
