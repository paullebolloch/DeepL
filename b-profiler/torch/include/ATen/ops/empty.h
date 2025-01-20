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



#include <ATen/ops/empty_ops.h>

namespace at {


// aten::empty.names(int[] size, *, Dimname[]? names, ScalarType? dtype=None, Layout? layout=None, Device? device=None, bool? pin_memory=None, MemoryFormat? memory_format=None) -> Tensor
inline at::Tensor empty(at::IntArrayRef size, ::std::optional<at::DimnameList> names, at::TensorOptions options={}, ::std::optional<at::MemoryFormat> memory_format=::std::nullopt) {
    return at::_ops::empty_names::call(size, names, c10::optTypeMetaToScalarType(options.dtype_opt()), options.layout_opt(), options.device_opt(), options.pinned_memory_opt(), c10::impl::check_tensor_options_and_extract_memory_format(options, memory_format));
}
// aten::empty.names(int[] size, *, Dimname[]? names, ScalarType? dtype=None, Layout? layout=None, Device? device=None, bool? pin_memory=None, MemoryFormat? memory_format=None) -> Tensor
inline at::Tensor empty(at::IntArrayRef size, ::std::optional<at::DimnameList> names, ::std::optional<at::ScalarType> dtype, ::std::optional<at::Layout> layout, ::std::optional<at::Device> device, ::std::optional<bool> pin_memory, ::std::optional<at::MemoryFormat> memory_format) {
    return at::_ops::empty_names::call(size, names, dtype, layout, device, pin_memory, memory_format);
}

// aten::empty.memory_format(SymInt[] size, *, ScalarType? dtype=None, Layout? layout=None, Device? device=None, bool? pin_memory=None, MemoryFormat? memory_format=None) -> Tensor
inline at::Tensor empty(at::IntArrayRef size, at::TensorOptions options={}, ::std::optional<at::MemoryFormat> memory_format=::std::nullopt) {
    return at::_ops::empty_memory_format::call(c10::fromIntArrayRefSlow(size), c10::optTypeMetaToScalarType(options.dtype_opt()), options.layout_opt(), options.device_opt(), options.pinned_memory_opt(), c10::impl::check_tensor_options_and_extract_memory_format(options, memory_format));
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor empty(at::IntArrayRef size, at::TensorOptions options={}, ::std::optional<at::MemoryFormat> memory_format=::std::nullopt) {
    return at::_ops::empty_memory_format::call(c10::fromIntArrayRefSlow(size), c10::optTypeMetaToScalarType(options.dtype_opt()), options.layout_opt(), options.device_opt(), options.pinned_memory_opt(), c10::impl::check_tensor_options_and_extract_memory_format(options, memory_format));
  }
}

// aten::empty.memory_format(SymInt[] size, *, ScalarType? dtype=None, Layout? layout=None, Device? device=None, bool? pin_memory=None, MemoryFormat? memory_format=None) -> Tensor
inline at::Tensor empty(at::IntArrayRef size, ::std::optional<at::ScalarType> dtype, ::std::optional<at::Layout> layout, ::std::optional<at::Device> device, ::std::optional<bool> pin_memory, ::std::optional<at::MemoryFormat> memory_format) {
    return at::_ops::empty_memory_format::call(c10::fromIntArrayRefSlow(size), dtype, layout, device, pin_memory, memory_format);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor empty(at::IntArrayRef size, ::std::optional<at::ScalarType> dtype, ::std::optional<at::Layout> layout, ::std::optional<at::Device> device, ::std::optional<bool> pin_memory, ::std::optional<at::MemoryFormat> memory_format) {
    return at::_ops::empty_memory_format::call(c10::fromIntArrayRefSlow(size), dtype, layout, device, pin_memory, memory_format);
  }
}

// aten::empty.memory_format(SymInt[] size, *, ScalarType? dtype=None, Layout? layout=None, Device? device=None, bool? pin_memory=None, MemoryFormat? memory_format=None) -> Tensor
inline at::Tensor empty_symint(c10::SymIntArrayRef size, at::TensorOptions options={}, ::std::optional<at::MemoryFormat> memory_format=::std::nullopt) {
    return at::_ops::empty_memory_format::call(size, c10::optTypeMetaToScalarType(options.dtype_opt()), options.layout_opt(), options.device_opt(), options.pinned_memory_opt(), c10::impl::check_tensor_options_and_extract_memory_format(options, memory_format));
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor empty(c10::SymIntArrayRef size, at::TensorOptions options={}, ::std::optional<at::MemoryFormat> memory_format=::std::nullopt) {
    return at::_ops::empty_memory_format::call(size, c10::optTypeMetaToScalarType(options.dtype_opt()), options.layout_opt(), options.device_opt(), options.pinned_memory_opt(), c10::impl::check_tensor_options_and_extract_memory_format(options, memory_format));
  }
}

// aten::empty.memory_format(SymInt[] size, *, ScalarType? dtype=None, Layout? layout=None, Device? device=None, bool? pin_memory=None, MemoryFormat? memory_format=None) -> Tensor
inline at::Tensor empty_symint(c10::SymIntArrayRef size, ::std::optional<at::ScalarType> dtype, ::std::optional<at::Layout> layout, ::std::optional<at::Device> device, ::std::optional<bool> pin_memory, ::std::optional<at::MemoryFormat> memory_format) {
    return at::_ops::empty_memory_format::call(size, dtype, layout, device, pin_memory, memory_format);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor empty(c10::SymIntArrayRef size, ::std::optional<at::ScalarType> dtype, ::std::optional<at::Layout> layout, ::std::optional<at::Device> device, ::std::optional<bool> pin_memory, ::std::optional<at::MemoryFormat> memory_format) {
    return at::_ops::empty_memory_format::call(size, dtype, layout, device, pin_memory, memory_format);
  }
}

// aten::empty.out(SymInt[] size, *, MemoryFormat? memory_format=None, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & empty_out(at::Tensor & out, at::IntArrayRef size, ::std::optional<at::MemoryFormat> memory_format=::std::nullopt) {
    return at::_ops::empty_out::call(c10::fromIntArrayRefSlow(size), memory_format, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor & empty_out(at::Tensor & out, at::IntArrayRef size, ::std::optional<at::MemoryFormat> memory_format=::std::nullopt) {
    return at::_ops::empty_out::call(c10::fromIntArrayRefSlow(size), memory_format, out);
  }
}

// aten::empty.out(SymInt[] size, *, MemoryFormat? memory_format=None, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & empty_outf(at::IntArrayRef size, ::std::optional<at::MemoryFormat> memory_format, at::Tensor & out) {
    return at::_ops::empty_out::call(c10::fromIntArrayRefSlow(size), memory_format, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor & empty_outf(at::IntArrayRef size, ::std::optional<at::MemoryFormat> memory_format, at::Tensor & out) {
    return at::_ops::empty_out::call(c10::fromIntArrayRefSlow(size), memory_format, out);
  }
}

// aten::empty.out(SymInt[] size, *, MemoryFormat? memory_format=None, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & empty_symint_out(at::Tensor & out, c10::SymIntArrayRef size, ::std::optional<at::MemoryFormat> memory_format=::std::nullopt) {
    return at::_ops::empty_out::call(size, memory_format, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor & empty_out(at::Tensor & out, c10::SymIntArrayRef size, ::std::optional<at::MemoryFormat> memory_format=::std::nullopt) {
    return at::_ops::empty_out::call(size, memory_format, out);
  }
}

// aten::empty.out(SymInt[] size, *, MemoryFormat? memory_format=None, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & empty_symint_outf(c10::SymIntArrayRef size, ::std::optional<at::MemoryFormat> memory_format, at::Tensor & out) {
    return at::_ops::empty_out::call(size, memory_format, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor & empty_outf(c10::SymIntArrayRef size, ::std::optional<at::MemoryFormat> memory_format, at::Tensor & out) {
    return at::_ops::empty_out::call(size, memory_format, out);
  }
}

// aten::empty.names_out(int[] size, *, Dimname[]? names, MemoryFormat? memory_format=None, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & empty_out(at::Tensor & out, at::IntArrayRef size, ::std::optional<at::DimnameList> names, ::std::optional<at::MemoryFormat> memory_format=::std::nullopt) {
    return at::_ops::empty_names_out::call(size, names, memory_format, out);
}
// aten::empty.names_out(int[] size, *, Dimname[]? names, MemoryFormat? memory_format=None, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & empty_outf(at::IntArrayRef size, ::std::optional<at::DimnameList> names, ::std::optional<at::MemoryFormat> memory_format, at::Tensor & out) {
    return at::_ops::empty_names_out::call(size, names, memory_format, out);
}

}
