#pragma once

#include <gzip/decompress.hpp>
#include "buffer.h"

namespace mtproto::gzip {

	mtproto::data::binary_buffer inflate(const mtproto::data::binary_buffer& compressed);
}