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



#include <ATen/ops/_convolution_mode_ops.h>

namespace at {


// aten::_convolution_mode(Tensor input, Tensor weight, Tensor? bias, SymInt[] stride, str padding, SymInt[] dilation, SymInt groups) -> Tensor
inline at::Tensor _convolution_mode(const at::Tensor & input, const at::Tensor & weight, const ::std::optional<at::Tensor> & bias, at::IntArrayRef stride, c10::string_view padding, at::IntArrayRef dilation, int64_t groups) {
    return at::_ops::_convolution_mode::call(input, weight, bias, c10::fromIntArrayRefSlow(stride), padding, c10::fromIntArrayRefSlow(dilation), groups);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor _convolution_mode(const at::Tensor & input, const at::Tensor & weight, const ::std::optional<at::Tensor> & bias, at::IntArrayRef stride, c10::string_view padding, at::IntArrayRef dilation, int64_t groups) {
    return at::_ops::_convolution_mode::call(input, weight, bias, c10::fromIntArrayRefSlow(stride), padding, c10::fromIntArrayRefSlow(dilation), groups);
  }
}

// aten::_convolution_mode(Tensor input, Tensor weight, Tensor? bias, SymInt[] stride, str padding, SymInt[] dilation, SymInt groups) -> Tensor
inline at::Tensor _convolution_mode_symint(const at::Tensor & input, const at::Tensor & weight, const ::std::optional<at::Tensor> & bias, c10::SymIntArrayRef stride, c10::string_view padding, c10::SymIntArrayRef dilation, c10::SymInt groups) {
    return at::_ops::_convolution_mode::call(input, weight, bias, stride, padding, dilation, groups);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor _convolution_mode(const at::Tensor & input, const at::Tensor & weight, const ::std::optional<at::Tensor> & bias, c10::SymIntArrayRef stride, c10::string_view padding, c10::SymIntArrayRef dilation, c10::SymInt groups) {
    return at::_ops::_convolution_mode::call(input, weight, bias, stride, padding, dilation, groups);
  }
}

}
