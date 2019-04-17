#include "kdevelop_lldb.h"

#include <debug.h>

#include <KPluginFactory>

K_PLUGIN_FACTORY_WITH_JSON(kdevelop_lldbFactory, "kdevelop_lldb.json", registerPlugin<kdevelop_lldb>(); )

kdevelop_lldb::kdevelop_lldb(QObject *parent, const QVariantList& args)
    : KDevelop::IPlugin(QStringLiteral("kdevelop_lldb"), parent)
{
    Q_UNUSED(args);

    qCDebug(PLUGIN_KDEVELOP_LLDB) << "Hello world, my plugin is loaded!";
}

// needed for QObject class created from K_PLUGIN_FACTORY_WITH_JSON
#include "kdevelop_lldb.moc"
