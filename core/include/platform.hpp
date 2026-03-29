#pragma once 
#include <cstddef>
#include <cstdint>
#include <string>
#include <string_view>

namespace core {

    enum class OperatingSystems : std::uint8_t {
        Unknown,
        Windows, 
        Linux, 
        MacOS,
        FreeBsd,
        Unix
    };

    enum class Architecture : std::uint8_t {
        Unknown,
        x86,
        x64,
        Arm,
        Arm64,
        RiscV64
    };

    struct PlatformInfo {
        OperatingSystems os {OperatingSystems::Unknown};
        Architecture arch {Architecture::Unknown};
        std::size_t cache_line_size = {64};
        std::size_t page_size = {4096};
    };
    
    [[nodiscard]] PlatformInfo DetectPlatform () noexcept;
    [[nodiscard]] std::string_view SelectOS (OperatingSystems _os_) noexcept;
    [[nodiscard]] std::string_view SelectArch (Architecture _arch_) noexcept;

} // namespace core 