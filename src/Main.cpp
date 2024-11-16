#include "api/Logger.hpp"

Logger logger{};

// 此处写插件加载时执行的操作
void onEnable() {
    // 运行插件
    logger.info("原生插件模板已加载！");
}

// 此处写插件卸载载时执行的操作
void onDisable() {
    // 卸载插件需要释放全部资源（全部线程需要join，全部资源需要销毁）
    // 注册的监听器和命令以及Service可以不显式清理，会自动销毁
    // 使用Schedule类创建的定时任务可以不不显式清理，会自动销毁
    logger.info("原生插件模板已卸载！");
}