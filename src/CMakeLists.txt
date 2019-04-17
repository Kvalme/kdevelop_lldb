set(kdevelop_lldb_SRCS
    kdevelop_lldb.cpp
)

ecm_qt_declare_logging_category(kdevelop_lldb_SRCS
    HEADER debug.h
    IDENTIFIER PLUGIN_KDEVELOP_LLDB
    CATEGORY_NAME "kdevelop.plugin.kdevelop_lldb"
)

kdevplatform_add_plugin(kdevelop_lldb
    JSON kdevelop_lldb.json
    SOURCES ${kdevelop_lldb_SRCS}
)

target_link_libraries(kdevelop_lldb
    KDev::Interfaces
)
