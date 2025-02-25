// =============================================================================
//
// ztd.platform
// Copyright © 2022 JeanHeyd "ThePhD" Meneide and Shepherd's Oasis, LLC
// Contact: opensource@soasis.org
//
// Commercial License Usage
// Licensees holding valid commercial ztd.platform licenses may use this file in
// accordance with the commercial license agreement provided with the
// Software or, alternatively, in accordance with the terms contained in
// a written agreement between you and Shepherd's Oasis, LLC.
// For licensing terms and conditions see your agreement. For
// further information contact opensource@soasis.org.
//
// Apache License Version 2 Usage
// Alternatively, this file may be used under the terms of Apache License
// Version 2.0 (the "License") for non-commercial use; you may not use this
// file except in compliance with the License. You may obtain a copy of the
// License at
//
//		http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// ============================================================================ //

#pragma once

#ifndef ZTD_PLATFORM_ICONV_NAMES_HPP
#define ZTD_PLATFORM_ICONV_NAMES_HPP

#include <ztd/platform/version.hpp>

#include <ztd/idk/c_string_view.hpp>
#include <ztd/idk/endian.hpp>

#include <ztd/prologue.hpp>

namespace ztd { namespace plat {
	ZTD_PLATFORM_INLINE_ABI_NAMESPACE_OPEN_I_

	inline constexpr c_string_view iconv_locale_name      = "";
	inline constexpr c_string_view iconv_wide_locale_name = "wchar_t";
	inline constexpr c_string_view iconv_utf8_name        = "UTF-8";
	inline constexpr c_string_view iconv_utf16_name       = (endian::native == endian::big ? "UTF-16BE" : "UTF-16LE");
	inline constexpr c_string_view iconv_utf32_name       = (endian::native == endian::big ? "UTF-32BE" : "UTF-32LE");

	ZTD_PLATFORM_INLINE_ABI_NAMESPACE_CLOSE_I_
}} // namespace ztd::plat

#include <ztd/epilogue.hpp>

#endif // ZTD_PLATFORM_ICONV_NAMES_HPP
