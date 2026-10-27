#pragma once

#define CLP_WIDEN2(value) L##value
#define CLP_WIDEN(value) CLP_WIDEN2(value)
#define CLP_W(value) CLP_WIDEN(value)

#ifdef __OBJC__
#define CLP_NS2(value) @value
#define CLP_NS(value) CLP_NS2(value)
#endif

#define CLP_UI_APP_NAME "Clipp"
#define CLP_UI_NETWORK "设备连接"
#define CLP_UI_SETTINGS "设置"
#define CLP_UI_LOGS "日志"
#define CLP_UI_DIAGNOSTICS "诊断信息"
#define CLP_UI_ABOUT "关于"
#define CLP_UI_OPEN_CLIPP "打开 Clipp"
#define CLP_UI_ABOUT_CLIPP "关于 Clipp"
#define CLP_UI_EXIT_CLIPP "退出 Clipp"
#define CLP_UI_STATUS_TOOLTIP "Clipp"
#define CLP_UI_HOME_STATUS_WAITING "等待另一台设备"
#define CLP_UI_HOME_STATUS_CONNECTING "正在连接设备"
#define CLP_UI_HOME_STATUS_PAIR "尚未完成设备配对"
#define CLP_UI_HOME_STATUS_PARTIAL "连接不完整"
#define CLP_UI_HOME_STATUS_CONNECTED_PREFIX "已连接到 "
#define CLP_UI_HOME_STATUS_CONNECTED_COUNT " 台设备已连接"
#define CLP_UI_HOME_HELP_PAIR "在两台电脑上输入相同的配对名称和密码。"
#define CLP_UI_HOME_HELP_WAITING "请确认两台电脑连接同一局域网，且 Clipp 正在运行。"
#define CLP_UI_HOME_HELP_CONNECTING "已发现设备，正在建立连接。"
#define CLP_UI_HOME_HELP_PARTIAL "双向同步可能失败，请检查两台电脑的防火墙。"
#define CLP_UI_HOME_HELP_CONNECTED "文字和图片正在双向自动同步。"
#define CLP_UI_HOME_CONNECTION_SETTINGS "查看设备连接"

#define CLP_UI_NAME "配对名称"
#define CLP_UI_SECRET "配对密码"
#define CLP_UI_NETWORK_KEY "设备配对"
#define CLP_UI_NETWORK_KEY_FINGERPRINT "请核对两台设备上的指纹是否相同。指纹本身不是密码。"
#define CLP_UI_ENTER_NETWORK_SECRET "在两台设备上输入相同的配对名称和密码。"
#define CLP_UI_SECRET_TOO_SHORT "配对密码至少需要 8 个字符。"
#define CLP_UI_WORKING "正在处理…"

// Explorer "Send To -> Clipp" helper (Windows). Fixed phrases only; per-file
// error lines are assembled as "<filename>: <phrase>" in SendTo.cpp.
#define CLP_UI_SENDTO_DESCRIPTION "发送到 Clipp 剪贴板"
#define CLP_UI_SENDTO_ERR_NO_FILES "没有可发送的内容。"
#define CLP_UI_SENDTO_ERR_STARTUP "Clipp 启动失败，无法发送。"
#define CLP_UI_SENDTO_ERR_NOT_PAIRED "此设备尚未配对。请打开 Clipp 完成设备配对。"
#define CLP_UI_SENDTO_ERR_NO_GATEWAY "无法连接到接收内容的 Clipp 设备。"
#define CLP_UI_SENDTO_ERR_UNREADABLE "无法读取。"
#define CLP_UI_SENDTO_ERR_TOO_LARGE "过大，无法共享。"
#define CLP_UI_SENDTO_ERR_EMPTY "为空。"
#define CLP_UI_SENDTO_ERR_NOT_TEXT "不是 PNG、JPEG 或文本文件。"
#define CLP_UI_SENDTO_ERR_ENCODE "无法编码。"

#define CLP_UI_CLIPBOARD "最近记录"
#define CLP_UI_CLIPBOARD_EMPTY "复制的文字和图片会自动同步，最近记录将在这里显示。"
#define CLP_UI_NO_NETWORK_KEY_CONFIGURED "尚未配对"
#define CLP_UI_THIS_DEVICE "这台设备"
#define CLP_UI_COPY "复制"
#define CLP_UI_PASTE "粘贴"
#define CLP_UI_DELETE "删除"
#define CLP_UI_TRAY_POPUP "剪贴板历史"
#define CLP_UI_POPUP_FILTER_HINT "输入文字筛选…"
#define CLP_UI_POPUP_TOAST "方向键选择，回车键粘贴"
#define CLP_UI_POPUP_MORE "继续输入以缩小范围…"
#define CLP_UI_POPUP_EMPTY "没有可显示的记录。"
#define CLP_UI_POPUP_REGISTERS "收藏项"
#define CLP_UI_POPUP_RENAME "重命名"
#define CLP_UI_POPUP_SAVE_TIP "保存为收藏项 (Ctrl+S)"
#define CLP_UI_POPUP_RENAME_TIP "重命名 (F2)"
#define CLP_UI_POPUP_DELETE_TIP "从所有设备删除 (Del)"
// "Mark", not "make", and never "public": private is a MARKER (masks the
// preview, gates paste-to-terminal) — "make public" read like publishing.
#define CLP_UI_POPUP_MAKE_PRIVATE "标记为私密"
#define CLP_UI_POPUP_MAKE_PUBLIC "取消私密标记"
#define CLP_UI_POPUP_UNDO_TIP "撤销上次删除 (Ctrl+Z)"
// "Type it out": deliver the item as keystrokes for windows that can't take a
// paste (iKVM/BMC consoles, virt-manager/SPICE/VNC viewers, RDP without
// clipboard redirection). Confirm bubble is anchored under the toolbar button.
#define CLP_UI_POPUP_TYPE_TIP "逐字键入 (Ctrl+T)"
#define CLP_UI_POPUP_TYPE_TIP_MAC "逐字键入 (⌘T)"
#define CLP_UI_POPUP_TYPE_TIP_TYPING "正在键入…（按任意键或点击可停止）"
#define CLP_UI_POPUP_TYPE_CONFIRM_SUFFIX " — 再次点击开始键入"
#define CLP_UI_POPUP_TYPE_ENTER_PREFIX "将按回车键 "
#define CLP_UI_POPUP_TYPE_KEYSTROKES_PREFIX ""
#define CLP_UI_POPUP_TYPE_KEYSTROKES_MIDDLE " 次按键，约 "
#define CLP_UI_POPUP_TYPE_KEYSTROKES_SUFFIX " 秒"
#define CLP_UI_POPUP_TYPE_NO_TEXT "此记录不是文字，无法逐字键入。"
#define CLP_UI_POPUP_TYPE_IME "逐字键入需要英文键盘布局，请先关闭输入法。"
#define CLP_UI_POPUP_TYPE_CANT_PREFIX "无法键入 "
#define CLP_UI_POPUP_TYPE_CANT_LINE "，第 "
#define CLP_UI_POPUP_TYPE_CANT_COLUMN " 行，第 "
#define CLP_UI_POPUP_TYPE_CANT_COLUMN_SUFFIX " 列"
// Progress pill parked above the tray while a run is in flight.
#define CLP_UI_TYPING_PROGRESS_PREFIX "正在键入…剩余 "
#define CLP_UI_TYPING_PROGRESS_MIDDLE " 次按键（约 "
#define CLP_UI_TYPING_PROGRESS_SUFFIX " 秒），按任意键或点击可停止"
#define CLP_UI_POPUP_UNDO_OF_PREFIX "撤销删除："
// macOS flavors of the popup shortcut hints (same actions, native key names).
#define CLP_UI_POPUP_TOAST_MAC "方向键选择，回车键粘贴"
#define CLP_UI_POPUP_SAVE_TIP_MAC "保存为收藏项 (⌘S)"
#define CLP_UI_POPUP_RENAME_TIP_MAC "重命名 (F2)"
#define CLP_UI_POPUP_DELETE_TIP_MAC "从所有设备删除 (⌦)"
#define CLP_UI_POPUP_UNDO_TIP_MAC "撤销上次删除 (⌘Z)"
// macOS Accessibility onboarding toast: the popup's paste keystroke needs a
// switch flipped in System Settings; this walks the user there.
#define CLP_UI_POPUP_AX_TITLE_MAC "允许 Clipp 帮你粘贴"
#define CLP_UI_POPUP_AX_BODY_MAC "要粘贴到其他应用，Clipp 需要辅助功能权限。macOS 会请你确认。"
#define CLP_UI_POPUP_AX_BUTTON_MAC "打开系统设置…"
#define CLP_UI_POPUP_AX_GRANTED_MAC "✓ 设置完成，Clipp 现在可以粘贴"
#define CLP_UI_POPUP_AX_CLOSE_TIP "关闭"

// Settings: the popup's configurable summon shortcuts.
#define CLP_UI_POPUP_HOTKEYS "剪贴板历史快捷键"
#define CLP_UI_POPUP_HOTKEY_PRIMARY "主要快捷键"
#define CLP_UI_POPUP_HOTKEY_SECONDARY "备用快捷键"
#define CLP_UI_POPUP_HOTKEY_CAPTURE "请按新快捷键…"
#define CLP_UI_POPUP_HOTKEY_NONE "未设置"
#define CLP_UI_POPUP_HOTKEY_HELP "可在任何位置打开剪贴板历史。点击快捷键可修改；录入时按 Esc 取消，按 Delete 清除。两个快捷键都清除后，仍可从托盘或菜单栏打开。"
#define CLP_UI_POPUP_HOTKEY_NEEDS_MODIFIER "快捷键需包含 Ctrl、Alt 或 Win。"
#define CLP_UI_POPUP_HOTKEY_NEEDS_MODIFIER_MAC "快捷键需包含 ⌘、⌃ 或 ⌥。"
#define CLP_UI_POPUP_HOTKEY_IN_USE "此快捷键已被其他应用占用。"
#define CLP_UI_POPUP_HOTKEY_APPLIED "快捷键已更新。"
// Clipboard-page hotkey nudge (dismissible forever). The chord names are
// formatted at the use site so the banner follows the live settings.
#define CLP_UI_POPUP_TEACH_PREFIX "按 "
#define CLP_UI_POPUP_TEACH_OR " 或 "
#define CLP_UI_POPUP_TEACH_SUFFIX " 打开剪贴板历史，选择旧记录后粘贴。"
#define CLP_UI_POPUP_TEACH_DISMISS "关闭"
#define CLP_UI_LINK "链接"
#define CLP_UI_TEXT "文字"
#define CLP_UI_IMAGE "图片"
#define CLP_UI_PRIVATE_TEXT "私密文字"
#define CLP_UI_PRIVATE_BADGE "私密"
#define CLP_UI_PEEK "显示"
#define CLP_UI_PEEK_HIDE "隐藏"
#define CLP_UI_PRIVATE_PLACEHOLDER_TITLE "已标记为私密"
#define CLP_UI_PRIVATE_PLACEHOLDER_DETAIL "来源应用要求 Clipp 不同步此剪贴板内容。"
#define CLP_UI_UNSUPPORTED_CLIPBOARD_ITEM "不支持的剪贴板内容"

// Command-line helper banner (macOS GUI). Shown once a network key exists and the
// `clipp` CLI is not yet on a common PATH location, nudging the user to symlink it.
// Dismissible permanently. The command itself is built at the use site; on MAS we
// cannot create the symlink for the user (sandbox), so we only show the command.
#define CLP_UI_CLI_BANNER_TITLE "在命令行中使用 Clipp"
#define CLP_UI_CLI_BANNER_BODY "在终端中运行以下命令，即可在脚本或 SSH 中使用 clipp copy 和 clipp paste。"
#define CLP_UI_CLI_BANNER_COPY "复制命令"
#define CLP_UI_CLI_BANNER_COPIED "已复制"
#define CLP_UI_CLI_BANNER_DISMISS "关闭"

#define CLP_UI_PEERS "已发现的设备"
#define CLP_UI_NO_PEERS_HELP "未发现其他设备。请确认两台电脑连接同一局域网、Clipp 正在运行，并输入完全相同的配对名称和密码；大小写也必须一致。"
#define CLP_UI_UNKNOWN_HOST "（未知设备）"
#define CLP_UI_CONNECTED "已连接"
#define CLP_UI_NOT_CONNECTED "未连接"
#define CLP_UI_CONNECTED_FOR "已连接 "
#define CLP_UI_DAY_SUFFIX " 天 "
#define CLP_UI_DAYS_SUFFIX " 天 "
#define CLP_UI_BYTES_SENT "已发送："
#define CLP_UI_BYTES_RECEIVED "已接收："
#define CLP_UI_INCOMING "接收连接："
#define CLP_UI_OUTGOING "发送连接："

#define CLP_UI_TCP_PORT "TCP 端口"
#define CLP_UI_LISTENER_IP "监听 IP"
#define CLP_UI_APPLY_NETWORK_SETTINGS "应用网络设置"
#define CLP_UI_HOST_ID "设备 ID"
#define CLP_UI_CURRENT_HOST_ID "当前设备 ID"
#define CLP_UI_RESET "重置"
#define CLP_UI_HOST_ID_COLLISION_WARNING "检测到设备 ID 可能重复。如果这台设备由备份恢复或克隆，请重置设备 ID。"
#define CLP_UI_NETWORK_SETTINGS_APPLIED "网络设置已应用。"
#define CLP_UI_UNAVAILABLE "不可用"
#define CLP_UI_UNABLE_TO_RESET_HOST_ID "无法重置设备 ID。"
#define CLP_UI_HOST_ID_RESET "设备 ID 已重置。"
#define CLP_UI_CLIPBOARD_HISTORY "剪贴板历史"
#define CLP_UI_HISTORY_MEMORY_LIMIT "内存"
#define CLP_UI_HISTORY_TIME_LIMIT "保存时间"
#define CLP_UI_HISTORY_ITEM_LIMIT "记录数量"
#define CLP_UI_UNLIMITED "不限"
#define CLP_UI_CLIPBOARD_HISTORY_SETTINGS_APPLIED "剪贴板历史设置已应用。"

#define CLP_UI_PRIVACY "隐私"
#define CLP_UI_MASK_SHORT_TEXT_PREVIEWS "隐藏短文本预览"
#define CLP_UI_MASK_SHORT_TEXT_PREVIEWS_HELP "没有空格的短文本可能是密码。开启后仅隐藏历史记录中的预览；内容仍会同步，可点击眼睛图标查看。"
#define CLP_UI_HONOR_PRIVACY_MARKERS "遵循其他应用的“不要同步”标记"
#define CLP_UI_HONOR_PRIVACY_MARKERS_HELP "如果来源应用将剪贴板内容标记为私密（如浏览器或密码管理器），Clipp 不会将该内容同步到其他设备。"
#define CLP_UI_PRIVACY_SETTINGS_APPLIED "隐私设置已应用。"

#define CLP_UI_FEEDBACK "同步反馈"
#define CLP_UI_ANIMATE_FLOW_FEEDBACK "发送或接收时显示图标动效"
#define CLP_UI_ANIMATE_FLOW_FEEDBACK_HELP "复制内容发往其他设备或从其他设备收到内容时，状态图标会短暂变化。"
#define CLP_UI_FEEDBACK_SETTINGS_APPLIED "同步反馈设置已应用。"

// Mac App Store flavor only (guideline 2.4.5(iii)): login items there require
// explicit consent, so the MAS build swaps autostart-by-default for this toggle.
#define CLP_UI_STARTUP "开机启动"
#define CLP_UI_LAUNCH_AT_LOGIN "登录后启动 Clipp"

#define CLP_UI_LIVE_DIAGNOSTIC_OUTPUT "Clipp 的实时诊断信息。"
#define CLP_UI_COPY_LOG_LINES_FORMAT "复制 %d 行"

// Just the product name; About screens compose "<title> v<version>" at the use
// site using the platform's version source (CLIPP_VERSION_STRING_3PART from
// version.h for Windows/macOS, Bundle.main for iOS).
#define CLP_UI_ABOUT_TITLE "Clipp"
#define CLP_UI_TAGLINE "在可信设备之间同步剪贴板。"
#define CLP_UI_PROJECT "项目"
#define CLP_UI_COPYRIGHT "Copyright (C) 2026 Marton Anka"
#define CLP_UI_MIT_LICENSE "基于 MIT 许可证发布。"
#define CLP_UI_REPOSITORY_LABEL "github.com/martona/clipp"
#define CLP_UI_REPOSITORY_URL "https://github.com/martona/clipp"
#define CLP_UI_OPEN_SOURCE_ACKNOWLEDGEMENTS "开源组件声明"
#define CLP_UI_ACK_LIBSODIUM "libsodium — ISC 许可证加密库"
#define CLP_UI_ACK_XXHASH "xxHash — BSD-2-Clause 许可证哈希库"
#define CLP_UI_ACK_ZSTD "Zstandard (zstd) — BSD 许可证压缩库"
#define CLP_UI_THIRD_PARTY_LICENSE_NOTE "第三方组件各自遵循其许可证条款。"
