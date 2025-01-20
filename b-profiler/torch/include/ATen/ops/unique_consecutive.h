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



#include <ATen/ops/unique_consecutive_ops.h>

namespace at {


// aten::unique_consecutive(Tensor self, bool return_inverse=False, bool return_counts=False, int? dim=None) -> (Tensor, Tensor, Tensor)
inline ::std::tuple<at::Tensor,at::Tensor,at::Tensor> unique_consecutive(const at::Tensor & self, bool return_inverse=false, bool return_counts=false, ::std::optional<int64_t> dim=::std::nullopt) {
    return at::_ops::unique_consecutive::call(self, return_inverse, return_counts, dim);
}

// aten::unique_consecutive.out(Tensor self, bool return_inverse=False, bool return_counts=False, int? dim=None, *, Tensor(a!) out0, Tensor(b!) out1, Tensor(c!) out2) -> (Tensor(a!), Tensor(b!), Tensor(c!))
inline ::std::tuple<at::Tensor &,at::Tensor &,at::Tensor &> unique_consecutive_out(at::Tensor & out0, at::Tensor & out1, at::Tensor & out2, const at::Tensor & self, bool return_inverse=false, bool return_counts=false, ::std::optional<int64_t> dim=::std::nullopt) {
    return at::_ops::unique_consecutive_out::call(self, return_inverse, return_counts, dim, out0, out1, out2);
}
// aten::unique_consecutive.out(Tensor self, bool return_inverse=False, bool return_counts=False, int? dim=None, *, Tensor(a!) out0, Tensor(b!) out1, Tensor(c!) out2) -> (Tensor(a!), Tensor(b!), Tensor(c!))
inline ::std::tuple<at::Tensor &,at::Tensor &,at::Tensor &> unique_consecutive_outf(const at::Tensor & self, bool return_inverse, bool return_counts, ::std::optional<int64_t> dim, at::Tensor & out0, at::Tensor & out1, at::Tensor & out2) {
    return at::_ops::unique_consecutive_out::call(self, return_inverse, return_counts, dim, out0, out1, out2);
}

}
