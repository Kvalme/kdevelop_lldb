#ifndef KDEVELOP_LLDB_H
#define KDEVELOP_LLDB_H

#include <interfaces/iplugin.h>

class kdevelop_lldb : public KDevelop::IPlugin
{
    Q_OBJECT

public:
    // KPluginFactory-based plugin wants constructor with this signature
    kdevelop_lldb(QObject* parent, const QVariantList& args);
};

#endif // KDEVELOP_LLDB_H
