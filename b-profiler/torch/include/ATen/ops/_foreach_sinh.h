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



#include <ATen/ops/_foreach_sinh_ops.h>

namespace at {


// aten::_foreach_sinh(Tensor[] self) -> Tensor[]
inline ::std::vector<at::Tensor> _foreach_sinh(at::TensorList self) {
    return at::_ops::_foreach_sinh::call(self);
}

// aten::_foreach_sinh_(Tensor(a!)[] self) -> ()
inline void _foreach_sinh_(at::TensorList self) {
    return at::_ops::_foreach_sinh_::call(self);
}

// aten::_foreach_sinh.out(Tensor[] self, *, Tensor(a!)[] out) -> ()
inline void _foreach_sinh_out(at::TensorList out, at::TensorList self) {
    return at::_ops::_foreach_sinh_out::call(self, out);
}
// aten::_foreach_sinh.out(Tensor[] self, *, Tensor(a!)[] out) -> ()
inline void _foreach_sinh_outf(at::TensorList self, at::TensorList out) {
    return at::_ops::_foreach_sinh_out::call(self, out);
}

}
