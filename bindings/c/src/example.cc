// Copyright (c) by respective owners including Yahoo!, Microsoft, and
// individual contributors. All rights reserved. Released under a BSD (revised)
// license as described in the file LICENSE.
#include "vw/experimental/example.h"

#include "example.h"

// VW_DLL_PUBLIC VWStatus example_get_feature_space_indices(
//     const VWExample* c_example, const unsigned char** indices, int* length)
// {
//   const auto* ex = reinterpret_cast<const example*>(c_example);
//   *indices = &ex->indices[0];
//   *length = ex->indices.size();
//   return vw_success;
// }

// VW_DLL_PUBLIC VWStatus example_push_feature_space_index(VWExample* c_example, int value)
// {
//   auto* ex = reinterpret_cast<example*>(c_example);
//   ex->indices.push_back(value);
//   return vw_success;
// }

// VW_DLL_PUBLIC VWStatus example_remove_feature_space_index(VWExample*, int index)
// {
//   // Can't remove at index for v_array...
//   return vw_not_implemented;
// }

// VW_DLL_PUBLIC VWStatus example_get_feature_space_copy(
//     const VWExample* c_example, int index, VWFeatureSpace* c_features)
// {
//   const auto* ex = reinterpret_cast<const example*>(c_example);
//   auto* fs = reinterpret_cast<features*>(c_features);
//   fs->deep_copy_from(ex->feature_space[index]);
//   return vw_success;
// }

// // VWStatus example_get_feature_space_reference(VWExample* ex, int index, VWFeatureSpace_ref** fs)
// // {
// //   auto* e = reinterpret_cast<example*>(ex);
// //   *fs = reinterpret_cast<VWFeatureSpace_ref*>(&e->feature_space[index]);
// //   return vw_success;
// // }

// VW_DLL_PUBLIC VWStatus example_assign_feature_space(
//     VWExample* c_example, int index, const VWFeatureSpace* c_features)
// {
//   auto* ex = reinterpret_cast<example*>(c_example);
//   auto* fs = reinterpret_cast<const features*>(c_features);
//   ex->feature_space[index].deep_copy_from(*fs);
//   return vw_success;
// }

// // VW_DLL_PUBLIC VWStatus feature_space_copy_from_ref(VWFeatureSpace_ref*, VWFeatureSpace**)
// // {
// //   return vw_not_implemented;
// // }

// VW_DLL_PUBLIC VWStatus feature_space_copy(const VWFeatureSpace* c_features_source, VWFeatureSpace* c_features_dest)
// {
//   const auto* fs_source = reinterpret_cast<const features*>(c_features_source);
//   auto* fs_dest = reinterpret_cast<features*>(c_features_dest);
//   fs_dest->deep_copy_from(*fs_source);
//   return vw_success;
// }

// VW_DLL_PUBLIC VWStatus allocate_feature_space(VWFeatureSpace** c_features)
// {
//   *c_features = reinterpret_cast<VWFeatureSpace*>(new features);
//   return vw_success;
// }

// VW_DLL_PUBLIC VWStatus deallocate_feature_space(VWFeatureSpace* c_features)
// {
//   delete reinterpret_cast<features*>(c_features);
//   return vw_success;
// }

// VW_DLL_PUBLIC VWStatus feature_space_get_features(
//     VWFeatureSpace* c_features, uint64_t** ft_indices, float** ft_values, int* length)
// {
//   auto* fs = reinterpret_cast<features*>(c_features);
//   *ft_indices = &fs->indicies[0];
//   *ft_values = &fs->values[0];
//   *length = fs->indicies.size();
//   return vw_success;
// }

// // invalidates pointers
// VW_DLL_PUBLIC VWStatus feature_space_push_feature(VWFeatureSpace* c_features, uint64_t ft_index, float ft_value)
// {
//   auto* fs = reinterpret_cast<features*>(c_features);
//   fs->indicies.push_back(ft_index);
//   fs->values.push_back(ft_value);
//   return vw_success;
// }

// // invalidates pointers
// VW_DLL_PUBLIC VWStatus feature_space_remove_feature(VWFeatureSpace*, int index)
// {
//   // Can't remove at an index...
//   return vw_not_implemented;
// }

// VW_DLL_PUBLIC VWStatus example_get_feature_offset(const VWExample* c_example, int* feature_offset)
// {
//   const auto* ex = reinterpret_cast<const example*>(c_example);
//   *feature_offset = ex->ft_offset;
//   return vw_success;
// }

// VW_DLL_PUBLIC VWStatus example_set_feature_offset(VWExample* c_example, int feature_offset)
// {
//   auto* ex = reinterpret_cast<example*>(c_example);
//   ex->ft_offset = feature_offset;
//   return vw_success;
// }

// VW_DLL_PUBLIC VWStatus example_get_tag(const VWExample* c_example, const char** tag)
// {
//   const auto* ex = reinterpret_cast<const example*>(c_example);
//   *tag = &ex->tag[0];
//   return vw_success;
// }

// VW_DLL_PUBLIC VWStatus example_set_tag(VWExample* c_example, const char* tag, int length)
// {
//   auto* ex = reinterpret_cast<example*>(c_example);
//   ex->tag.clear();
//   push_many(ex->tag, tag, length);
//   return vw_success;
// }

// VW_DLL_PUBLIC VWStatus example_get_weight(const VWExample* c_example, float* weight)
// {
//   const auto* ex = reinterpret_cast<const example*>(c_example);
//   *weight = ex->weight;
//   return vw_success;
// }

// VW_DLL_PUBLIC VWStatus example_set_weight(VWExample* c_example, float weight)
// {
//   auto* ex = reinterpret_cast<example*>(c_example);
//   ex->weight = weight;
//   return vw_success;
// }
