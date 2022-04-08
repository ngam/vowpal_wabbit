// Copyright (c) by respective owners including Yahoo!, Microsoft, and
// individual contributors. All rights reserved. Released under a BSD (revised)
// license as described in the file LICENSE.

#pragma once
#include "vw_fwd.h"

namespace VW
{
namespace reductions
{
VW::LEARNER::base_learner* gd_mf_setup(VW::setup_base_i& stack_builder);
}
}  // namespace VW