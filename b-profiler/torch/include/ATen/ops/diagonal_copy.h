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



#include <ATen/ops/diagonal_copy_ops.h>

namespace at {


// aten::diagonal_copy(Tensor self, int offset=0, int dim1=0, int dim2=1) -> Tensor
inline at::Tensor diagonal_copy(const at::Tensor & self, int64_t offset=0, int64_t dim1=0, int64_t dim2=1) {
    return at::_ops::diagonal_copy::call(self, offset, dim1, dim2);
}

// aten::diagonal_copy.out(Tensor self, int offset=0, int dim1=0, int dim2=1, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & diagonal_copy_out(at::Tensor & out, const at::Tensor & self, int64_t offset=0, int64_t dim1=0, int64_t dim2=1) {
    return at::_ops::diagonal_copy_out::call(self, offset, dim1, dim2, out);
}
// aten::diagonal_copy.out(Tensor self, int offset=0, int dim1=0, int dim2=1, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & diagonal_copy_outf(const at::Tensor & self, int64_t offset, int64_t dim1, int64_t dim2, at::Tensor & out) {
    return at::_ops::diagonal_copy_out::call(self, offset, dim1, dim2, out);
}

}
