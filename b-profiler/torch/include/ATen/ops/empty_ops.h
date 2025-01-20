#pragma once

// @generated by torchgen/gen.py from Operator.h

#include <tuple>
#include <vector>

// Forward declarations of any types needed in the operator signatures.
// We can't directly include these classes because it will cause circular include dependencies.
// This file is included by TensorBody.h, which defines the Tensor class.
#include <ATen/core/ATen_fwd.h>

namespace at {
namespace _ops {


struct TORCH_API empty_names {
  using schema = at::Tensor (at::IntArrayRef, ::std::optional<at::DimnameList>, ::std::optional<at::ScalarType>, ::std::optional<at::Layout>, ::std::optional<at::Device>, ::std::optional<bool>, ::std::optional<at::MemoryFormat>);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::empty")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "names")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "empty.names(int[] size, *, Dimname[]? names, ScalarType? dtype=None, Layout? layout=None, Device? device=None, bool? pin_memory=None, MemoryFormat? memory_format=None) -> Tensor")
  static at::Tensor call(at::IntArrayRef size, ::std::optional<at::DimnameList> names, ::std::optional<at::ScalarType> dtype, ::std::optional<at::Layout> layout, ::std::optional<at::Device> device, ::std::optional<bool> pin_memory, ::std::optional<at::MemoryFormat> memory_format);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, at::IntArrayRef size, ::std::optional<at::DimnameList> names, ::std::optional<at::ScalarType> dtype, ::std::optional<at::Layout> layout, ::std::optional<at::Device> device, ::std::optional<bool> pin_memory, ::std::optional<at::MemoryFormat> memory_format);
};

struct TORCH_API empty_memory_format {
  using schema = at::Tensor (c10::SymIntArrayRef, ::std::optional<at::ScalarType>, ::std::optional<at::Layout>, ::std::optional<at::Device>, ::std::optional<bool>, ::std::optional<at::MemoryFormat>);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::empty")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "memory_format")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "empty.memory_format(SymInt[] size, *, ScalarType? dtype=None, Layout? layout=None, Device? device=None, bool? pin_memory=None, MemoryFormat? memory_format=None) -> Tensor")
  static at::Tensor call(c10::SymIntArrayRef size, ::std::optional<at::ScalarType> dtype, ::std::optional<at::Layout> layout, ::std::optional<at::Device> device, ::std::optional<bool> pin_memory, ::std::optional<at::MemoryFormat> memory_format);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, c10::SymIntArrayRef size, ::std::optional<at::ScalarType> dtype, ::std::optional<at::Layout> layout, ::std::optional<at::Device> device, ::std::optional<bool> pin_memory, ::std::optional<at::MemoryFormat> memory_format);
};

struct TORCH_API empty_out {
  using schema = at::Tensor & (c10::SymIntArrayRef, ::std::optional<at::MemoryFormat>, at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::empty")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "empty.out(SymInt[] size, *, MemoryFormat? memory_format=None, Tensor(a!) out) -> Tensor(a!)")
  static at::Tensor & call(c10::SymIntArrayRef size, ::std::optional<at::MemoryFormat> memory_format, at::Tensor & out);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, c10::SymIntArrayRef size, ::std::optional<at::MemoryFormat> memory_format, at::Tensor & out);
};

struct TORCH_API empty_names_out {
  using schema = at::Tensor & (at::IntArrayRef, ::std::optional<at::DimnameList>, ::std::optional<at::MemoryFormat>, at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::empty")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "names_out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "empty.names_out(int[] size, *, Dimname[]? names, MemoryFormat? memory_format=None, Tensor(a!) out) -> Tensor(a!)")
  static at::Tensor & call(at::IntArrayRef size, ::std::optional<at::DimnameList> names, ::std::optional<at::MemoryFormat> memory_format, at::Tensor & out);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, at::IntArrayRef size, ::std::optional<at::DimnameList> names, ::std::optional<at::MemoryFormat> memory_format, at::Tensor & out);
};

}} // namespace at::_ops
