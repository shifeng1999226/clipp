#include "ClipboardFlowUi.h"

#include <atomic>

namespace clipp {

namespace {
std::atomic<ClipboardFlowHandler> g_clipboardFlowHandler{ nullptr };
}  // namespace

void SetClipboardFlowHandler(ClipboardFlowHandler handler) {
    g_clipboardFlowHandler.store(handler, std::memory_order_release);
}

void NotifyClipboardFlow(ClipboardFlowDirection direction, const std::string& peerNameUtf8) {
    if (ClipboardFlowHandler handler = g_clipboardFlowHandler.load(std::memory_order_acquire)) {
        handler(direction, peerNameUtf8);
    }
}

std::string FormatRelativeAgeUtf8(uint64_t ageSeconds) {
    if (ageSeconds < 5)      return "刚刚";
    if (ageSeconds < 60)     return std::to_string(ageSeconds) + " 秒前";
    if (ageSeconds < 3600)   return std::to_string(ageSeconds / 60) + " 分钟前";
    if (ageSeconds < 86400)  return std::to_string(ageSeconds / 3600) + " 小时前";
    return std::to_string(ageSeconds / 86400) + " 天前";
}

}  // namespace clipp
