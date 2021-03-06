/*
* Copyright 2018 University of Illinois Board of Trustees and Stanford University. All Rights Reserved.
* Licensed under the “Non-exclusive Research Use License for SPRING Software” license (the "License");
* You may not use this file except in compliance with the License.
* The License is included in the distribution as license.pdf file.
 
* Software distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and limitations under the License.
*/

#ifndef SPRING_REORDER_COMPRESS_QUALITY_ID_H_
#define SPRING_REORDER_COMPRESS_QUALITY_ID_H_

#include <string>
#include "util.h"

namespace spring {

void reorder_compress_quality_id(const std::string &temp_dir,
                                 const compression_params &cp);

void generate_order_pe(const std::string &file_order, uint32_t *order_array,
                       const uint32_t &numreads);

void generate_order_se(const std::string &file_order, uint32_t *order_array,
                       const uint32_t &numreads);

void reorder_compress(const std::string &file_name,
                      const uint32_t &num_reads_per_file, const int &num_thr,
                      const uint32_t &num_reads_per_block,
                      std::string *str_array, const uint32_t &str_array_size,
                      uint32_t *order_array, const std::string &mode, const compression_params &cp);
// mode can be "quality" or "id"

}  // namespace spring

#endif  // SPRING_REORDER_COMPRESS_QUALITY_ID_H_
