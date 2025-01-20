#pragma once

// @generated by torchgen/gen.py from Function.h

#include <ATen/Context.h>
#include <ATen/DeviceGuard.h>
#include <ATen/TensorUtils.h>
#include <ATen/TracerMode.h>
#include <ATen/core/Generator.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <optional>



#include <ATen/ops/sum_ops.h>

namespace at {


// aten::sum(Tensor self, *, ScalarType? dtype=None) -> Tensor
inline at::Tensor sum(const at::Tensor & self, ::std::optional<at::ScalarType> dtype=::std::nullopt) {
    return at::_ops::sum::call(self, dtype);
}

// aten::sum.dim_IntList(Tensor self, int[1]? dim, bool keepdim=False, *, ScalarType? dtype=None) -> Tensor
inline at::Tensor sum(const at::Tensor & self, at::OptionalIntArrayRef dim, bool keepdim=false, ::std::optional<at::ScalarType> dtype=::std::nullopt) {
    return at::_ops::sum_dim_IntList::call(self, dim, keepdim, dtype);
}

// aten::sum.dim_DimnameList(Tensor self, Dimname[1] dim, bool keepdim=False, *, ScalarType? dtype=None) -> Tensor
inline at::Tensor sum(const at::Tensor & self, at::DimnameList dim, bool keepdim=false, ::std::optional<at::ScalarType> dtype=::std::nullopt) {
    return at::_ops::sum_dim_DimnameList::call(self, dim, keepdim, dtype);
}

// aten::sum.IntList_out(Tensor self, int[1]? dim, bool keepdim=False, *, ScalarType? dtype=None, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & sum_out(at::Tensor & out, const at::Tensor & self, at::OptionalIntArrayRef dim, bool keepdim=false, ::std::optional<at::ScalarType> dtype=::std::nullopt) {
    return at::_ops::sum_IntList_out::call(self, dim, keepdim, dtype, out);
}
// aten::sum.IntList_out(Tensor self, int[1]? dim, bool keepdim=False, *, ScalarType? dtype=None, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & sum_outf(const at::Tensor & self, at::OptionalIntArrayRef dim, bool keepdim, ::std::optional<at::ScalarType> dtype, at::Tensor & out) {
    return at::_ops::sum_IntList_out::call(self, dim, keepdim, dtype, out);
}

// aten::sum.DimnameList_out(Tensor self, Dimname[1] dim, bool keepdim=False, *, ScalarType? dtype=None, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & sum_out(at::Tensor & out, const at::Tensor & self, at::DimnameList dim, bool keepdim=false, ::std::optional<at::ScalarType> dtype=::std::nullopt) {
    return at::_ops::sum_DimnameList_out::call(self, dim, keepdim, dtype, out);
}
// aten::sum.DimnameList_out(Tensor self, Dimname[1] dim, bool keepdim=False, *, ScalarType? dtype=None, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & sum_outf(const at::Tensor & self, at::DimnameList dim, bool keepdim, ::std::optional<at::ScalarType> dtype, at::Tensor & out) {
    return at::_ops::sum_DimnameList_out::call(self, dim, keepdim, dtype, out);
}

// aten::sum.out(Tensor self, *, ScalarType? dtype=None, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & sum_out(at::Tensor & out, const at::Tensor & self, ::std::optional<at::ScalarType> dtype=::std::nullopt) {
    return at::_ops::sum_out::call(self, dtype, out);
}
// aten::sum.out(Tensor self, *, ScalarType? dtype=None, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & sum_outf(const at::Tensor & self, ::std::optional<at::ScalarType> dtype, at::Tensor & out) {
    return at::_ops::sum_out::call(self, dtype, out);
}

}
