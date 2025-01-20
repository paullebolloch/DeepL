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



#include <ATen/ops/hspmm_ops.h>

namespace at {


// aten::hspmm.out(Tensor mat1, Tensor mat2, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & hspmm_out(at::Tensor & out, const at::Tensor & mat1, const at::Tensor & mat2) {
    return at::_ops::hspmm_out::call(mat1, mat2, out);
}
// aten::hspmm.out(Tensor mat1, Tensor mat2, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & hspmm_outf(const at::Tensor & mat1, const at::Tensor & mat2, at::Tensor & out) {
    return at::_ops::hspmm_out::call(mat1, mat2, out);
}

// aten::hspmm(Tensor mat1, Tensor mat2) -> Tensor
inline at::Tensor hspmm(const at::Tensor & mat1, const at::Tensor & mat2) {
    return at::_ops::hspmm::call(mat1, mat2);
}

}
