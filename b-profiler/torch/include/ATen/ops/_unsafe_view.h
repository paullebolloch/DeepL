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



#include <ATen/ops/_unsafe_view_ops.h>

namespace at {


// aten::_unsafe_view(Tensor self, SymInt[] size) -> Tensor
inline at::Tensor _unsafe_view(const at::Tensor & self, at::IntArrayRef size) {
    return at::_ops::_unsafe_view::call(self, c10::fromIntArrayRefSlow(size));
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor _unsafe_view(const at::Tensor & self, at::IntArrayRef size) {
    return at::_ops::_unsafe_view::call(self, c10::fromIntArrayRefSlow(size));
  }
}

// aten::_unsafe_view(Tensor self, SymInt[] size) -> Tensor
inline at::Tensor _unsafe_view_symint(const at::Tensor & self, c10::SymIntArrayRef size) {
    return at::_ops::_unsafe_view::call(self, size);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor _unsafe_view(const at::Tensor & self, c10::SymIntArrayRef size) {
    return at::_ops::_unsafe_view::call(self, size);
  }
}

// aten::_unsafe_view.out(Tensor self, SymInt[] size, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & _unsafe_view_out(at::Tensor & out, const at::Tensor & self, at::IntArrayRef size) {
    return at::_ops::_unsafe_view_out::call(self, c10::fromIntArrayRefSlow(size), out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor & _unsafe_view_out(at::Tensor & out, const at::Tensor & self, at::IntArrayRef size) {
    return at::_ops::_unsafe_view_out::call(self, c10::fromIntArrayRefSlow(size), out);
  }
}

// aten::_unsafe_view.out(Tensor self, SymInt[] size, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & _unsafe_view_outf(const at::Tensor & self, at::IntArrayRef size, at::Tensor & out) {
    return at::_ops::_unsafe_view_out::call(self, c10::fromIntArrayRefSlow(size), out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor & _unsafe_view_outf(const at::Tensor & self, at::IntArrayRef size, at::Tensor & out) {
    return at::_ops::_unsafe_view_out::call(self, c10::fromIntArrayRefSlow(size), out);
  }
}

// aten::_unsafe_view.out(Tensor self, SymInt[] size, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & _unsafe_view_symint_out(at::Tensor & out, const at::Tensor & self, c10::SymIntArrayRef size) {
    return at::_ops::_unsafe_view_out::call(self, size, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor & _unsafe_view_out(at::Tensor & out, const at::Tensor & self, c10::SymIntArrayRef size) {
    return at::_ops::_unsafe_view_out::call(self, size, out);
  }
}

// aten::_unsafe_view.out(Tensor self, SymInt[] size, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & _unsafe_view_symint_outf(const at::Tensor & self, c10::SymIntArrayRef size, at::Tensor & out) {
    return at::_ops::_unsafe_view_out::call(self, size, out);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor & _unsafe_view_outf(const at::Tensor & self, c10::SymIntArrayRef size, at::Tensor & out) {
    return at::_ops::_unsafe_view_out::call(self, size, out);
  }
}

}
