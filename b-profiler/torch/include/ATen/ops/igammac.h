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



#include <ATen/ops/igammac_ops.h>

namespace at {


// aten::igammac.out(Tensor self, Tensor other, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & igammac_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & other) {
    return at::_ops::igammac_out::call(self, other, out);
}
// aten::igammac.out(Tensor self, Tensor other, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & igammac_outf(const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
    return at::_ops::igammac_out::call(self, other, out);
}

// aten::igammac(Tensor self, Tensor other) -> Tensor
inline at::Tensor igammac(const at::Tensor & self, const at::Tensor & other) {
    return at::_ops::igammac::call(self, other);
}

}
