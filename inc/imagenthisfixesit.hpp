#include <fmt/core.h>
#include <optional>
#include <Geode/Geode.hpp>
#include <matjson.hpp>
#include <Geode/utils/file.hpp>
using namespace geode::prelude;
// hopefully this silly workaround builds on github (idk what the heck this is it's so dumb)
template <>
struct fmt::formatter<std::optional<matjson::Value>> {
  constexpr auto parse(format_parse_context& ctx) { return ctx.begin(); }

  template <typename FormatContext>
  auto format(const std::optional<matjson::Value>& opt, FormatContext& ctx) {
    if (opt.has_value()) {
      return fmt::format_to(ctx.out(), "{}", opt.value());
    } else {
      return fmt::format_to(ctx.out(), "(nullopt)");
    }
  }
};
