/* DO NOT EDIT!
** This file is automatically generated by the script at
** ../tool/mkpragmatab.tcl.  To update the set of pragmas, edit
** that script and rerun it.
*/

/* The various pragma types */
#define PragTyp_KEY                          255 
#define PragTyp_ACTIVATE_EXTENSIONS            0
#define PragTyp_ANALYSIS_LIMIT                 1
#define PragTyp_HEADER_VALUE                   2
#define PragTyp_AUTO_VACUUM                    3
#define PragTyp_FLAG                           4
#define PragTyp_BUSY_TIMEOUT                   5
#define PragTyp_CACHE_SIZE                     6
#define PragTyp_CACHE_SPILL                    7
#define PragTyp_CASE_SENSITIVE_LIKE            8
#define PragTyp_COLLATION_LIST                 9
#define PragTyp_COMPILE_OPTIONS               10
#define PragTyp_DATA_STORE_DIRECTORY          11
#define PragTyp_DATABASE_LIST                 12
#define PragTyp_DEFAULT_CACHE_SIZE            13
#define PragTyp_ENCODING                      14
#define PragTyp_FOREIGN_KEY_CHECK             15
#define PragTyp_FOREIGN_KEY_LIST              16
#define PragTyp_FUNCTION_LIST                 17
#define PragTyp_HARD_HEAP_LIMIT               18
#define PragTyp_INCREMENTAL_VACUUM            19
#define PragTyp_INDEX_INFO                    20
#define PragTyp_INDEX_LIST                    21
#define PragTyp_INTEGRITY_CHECK               22
#define PragTyp_JOURNAL_MODE                  23
#define PragTyp_JOURNAL_SIZE_LIMIT            24
#define PragTyp_LOCK_PROXY_FILE               25
#define PragTyp_LOCKING_MODE                  26
#define PragTyp_PAGE_COUNT                    27
#define PragTyp_MMAP_SIZE                     28
#define PragTyp_MODULE_LIST                   29
#define PragTyp_OPTIMIZE                      30
#define PragTyp_PAGE_SIZE                     31
#define PragTyp_PRAGMA_LIST                   32
#define PragTyp_SECURE_DELETE                 33
#define PragTyp_SHRINK_MEMORY                 34
#define PragTyp_SOFT_HEAP_LIMIT               35
#define PragTyp_SYNCHRONOUS                   36
#define PragTyp_TABLE_INFO                    37
#define PragTyp_TABLE_LIST                    38
#define PragTyp_TEMP_STORE                    39
#define PragTyp_TEMP_STORE_DIRECTORY          40
#define PragTyp_THREADS                       41
#define PragTyp_WAL_AUTOCHECKPOINT            42
#define PragTyp_WAL_CHECKPOINT                43
#define PragTyp_LOCK_STATUS                   44
#define PragTyp_STATS                         45

/* Property flags associated with various pragma. */
#define PragFlg_NeedSchema 0x01 /* Force schema load before running */
#define PragFlg_NoColumns  0x02 /* OP_ResultRow called with zero columns */
#define PragFlg_NoColumns1 0x04 /* zero columns if RHS argument is present */
#define PragFlg_ReadOnly   0x08 /* Read-only HEADER_VALUE */
#define PragFlg_Result0    0x10 /* Acts as query when no argument */
#define PragFlg_Result1    0x20 /* Acts as query when has one argument */
#define PragFlg_SchemaOpt  0x40 /* Schema restricts name search if present */
#define PragFlg_SchemaReq  0x80 /* Schema required - "main" is default */

/* Names of columns for pragmas that return multi-column result
** or that return single-column results where the name of the
** result column is different from the name of the pragma
*/
static const char *const pragCName[] = {
  /*   0 */ "id",          /* Used by: foreign_key_list */
  /*   1 */ "seq",        
  /*   2 */ "table",      
  /*   3 */ "from",       
  /*   4 */ "to",         
  /*   5 */ "on_update",  
  /*   6 */ "on_delete",  
  /*   7 */ "match",      
  /*   8 */ "cid",         /* Used by: table_xinfo */
  /*   9 */ "name",       
  /*  10 */ "type",       
  /*  11 */ "notnull",    
  /*  12 */ "dflt_value", 
  /*  13 */ "pk",         
  /*  14 */ "hidden",     
                           /* table_info reuses 8 */
  /*  15 */ "schema",      /* Used by: table_list */
  /*  16 */ "name",       
  /*  17 */ "type",       
  /*  18 */ "ncol",       
  /*  19 */ "wr",         
  /*  20 */ "strict",     
  /*  21 */ "seqno",       /* Used by: index_xinfo */
  /*  22 */ "cid",        
  /*  23 */ "name",       
  /*  24 */ "desc",       
  /*  25 */ "coll",       
  /*  26 */ "key",        
  /*  27 */ "name",        /* Used by: function_list */
  /*  28 */ "builtin",    
  /*  29 */ "type",       
  /*  30 */ "enc",        
  /*  31 */ "narg",       
  /*  32 */ "flags",      
  /*  33 */ "tbl",         /* Used by: stats */
  /*  34 */ "idx",        
  /*  35 */ "wdth",       
  /*  36 */ "hght",       
  /*  37 */ "flgs",       
  /*  38 */ "seq",         /* Used by: index_list */
  /*  39 */ "name",       
  /*  40 */ "unique",     
  /*  41 */ "origin",     
  /*  42 */ "partial",    
  /*  43 */ "table",       /* Used by: foreign_key_check */
  /*  44 */ "rowid",      
  /*  45 */ "parent",     
  /*  46 */ "fkid",       
                           /* index_info reuses 21 */
  /*  47 */ "seq",         /* Used by: database_list */
  /*  48 */ "name",       
  /*  49 */ "file",       
  /*  50 */ "busy",        /* Used by: wal_checkpoint */
  /*  51 */ "log",        
  /*  52 */ "checkpointed",
                           /* collation_list reuses 38 */
  /*  53 */ "database",    /* Used by: lock_status */
  /*  54 */ "status",     
  /*  55 */ "cache_size",  /* Used by: default_cache_size */
                           /* module_list pragma_list reuses 9 */
  /*  56 */ "timeout",     /* Used by: busy_timeout */
};

/* Definitions of all built-in pragmas */
typedef struct PragmaName {
  const char *const zName; /* Name of pragma */
  u8 ePragTyp;             /* PragTyp_XXX value */
  u8 mPragFlg;             /* Zero or more PragFlg_XXX values */
  u8 iPragCName;           /* Start of column names in pragCName[] */
  u8 nPragCName;           /* Num of col names. 0 means use pragma name */
  u64 iArg;                /* Extra argument */
} PragmaName;
static const PragmaName aPragmaName[] = {
#if defined(SQLITE_ENABLE_CEROD)
 {/* zName:     */ "activate_extensions",
  /* ePragTyp:  */ PragTyp_ACTIVATE_EXTENSIONS,
  /* ePragFlg:  */ 0,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ 0 },
#endif
 {/* zName:     */ "analysis_limit",
  /* ePragTyp:  */ PragTyp_ANALYSIS_LIMIT,
  /* ePragFlg:  */ PragFlg_Result0,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ 0 },
#if !defined(SQLITE_OMIT_SCHEMA_VERSION_PRAGMAS)
 {/* zName:     */ "application_id",
  /* ePragTyp:  */ PragTyp_HEADER_VALUE,
  /* ePragFlg:  */ PragFlg_NoColumns1|PragFlg_Result0,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ BTREE_APPLICATION_ID },
#endif
#if !defined(SQLITE_OMIT_AUTOVACUUM)
 {/* zName:     */ "auto_vacuum",
  /* ePragTyp:  */ PragTyp_AUTO_VACUUM,
  /* ePragFlg:  */ PragFlg_NeedSchema|PragFlg_Result0|PragFlg_SchemaReq|PragFlg_NoColumns1,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ 0 },
#endif
#if !defined(SQLITE_OMIT_FLAG_PRAGMAS)
#if !defined(SQLITE_OMIT_AUTOMATIC_INDEX)
 {/* zName:     */ "automatic_index",
  /* ePragTyp:  */ PragTyp_FLAG,
  /* ePragFlg:  */ PragFlg_Result0|PragFlg_NoColumns1,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ SQLITE_AutoIndex },
#endif
#endif
 {/* zName:     */ "busy_timeout",
  /* ePragTyp:  */ PragTyp_BUSY_TIMEOUT,
  /* ePragFlg:  */ PragFlg_Result0,
  /* ColNames:  */ 56, 1,
  /* iArg:      */ 0 },
#if !defined(SQLITE_OMIT_PAGER_PRAGMAS)
 {/* zName:     */ "cache_size",
  /* ePragTyp:  */ PragTyp_CACHE_SIZE,
  /* ePragFlg:  */ PragFlg_NeedSchema|PragFlg_Result0|PragFlg_SchemaReq|PragFlg_NoColumns1,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ 0 },
#endif
#if !defined(SQLITE_OMIT_FLAG_PRAGMAS)
 {/* zName:     */ "cache_spill",
  /* ePragTyp:  */ PragTyp_CACHE_SPILL,
  /* ePragFlg:  */ PragFlg_Result0|PragFlg_SchemaReq|PragFlg_NoColumns1,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ 0 },
#endif
#if !defined(SQLITE_OMIT_CASE_SENSITIVE_LIKE_PRAGMA)
 {/* zName:     */ "case_sensitive_like",
  /* ePragTyp:  */ PragTyp_CASE_SENSITIVE_LIKE,
  /* ePragFlg:  */ PragFlg_NoColumns,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ 0 },
#endif
 {/* zName:     */ "cell_size_check",
  /* ePragTyp:  */ PragTyp_FLAG,
  /* ePragFlg:  */ PragFlg_Result0|PragFlg_NoColumns1,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ SQLITE_CellSizeCk },
#if !defined(SQLITE_OMIT_FLAG_PRAGMAS)
 {/* zName:     */ "checkpoint_fullfsync",
  /* ePragTyp:  */ PragTyp_FLAG,
  /* ePragFlg:  */ PragFlg_Result0|PragFlg_NoColumns1,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ SQLITE_CkptFullFSync },
#endif
#if !defined(SQLITE_OMIT_SCHEMA_PRAGMAS)
 {/* zName:     */ "collation_list",
  /* ePragTyp:  */ PragTyp_COLLATION_LIST,
  /* ePragFlg:  */ PragFlg_Result0,
  /* ColNames:  */ 38, 2,
  /* iArg:      */ 0 },
#endif
#if !defined(SQLITE_OMIT_COMPILEOPTION_DIAGS)
 {/* zName:     */ "compile_options",
  /* ePragTyp:  */ PragTyp_COMPILE_OPTIONS,
  /* ePragFlg:  */ PragFlg_Result0,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ 0 },
#endif
#if !defined(SQLITE_OMIT_FLAG_PRAGMAS)
 {/* zName:     */ "count_changes",
  /* ePragTyp:  */ PragTyp_FLAG,
  /* ePragFlg:  */ PragFlg_Result0|PragFlg_NoColumns1,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ SQLITE_CountRows },
#endif
#if !defined(SQLITE_OMIT_PAGER_PRAGMAS) && SQLITE_OS_WIN
 {/* zName:     */ "data_store_directory",
  /* ePragTyp:  */ PragTyp_DATA_STORE_DIRECTORY,
  /* ePragFlg:  */ PragFlg_NoColumns1,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ 0 },
#endif
#if !defined(SQLITE_OMIT_SCHEMA_VERSION_PRAGMAS)
 {/* zName:     */ "data_version",
  /* ePragTyp:  */ PragTyp_HEADER_VALUE,
  /* ePragFlg:  */ PragFlg_ReadOnly|PragFlg_Result0,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ BTREE_DATA_VERSION },
#endif
#if !defined(SQLITE_OMIT_SCHEMA_PRAGMAS)
 {/* zName:     */ "database_list",
  /* ePragTyp:  */ PragTyp_DATABASE_LIST,
  /* ePragFlg:  */ PragFlg_Result0,
  /* ColNames:  */ 47, 3,
  /* iArg:      */ 0 },
#endif
#if !defined(SQLITE_OMIT_PAGER_PRAGMAS) && !defined(SQLITE_OMIT_DEPRECATED)
 {/* zName:     */ "default_cache_size",
  /* ePragTyp:  */ PragTyp_DEFAULT_CACHE_SIZE,
  /* ePragFlg:  */ PragFlg_NeedSchema|PragFlg_Result0|PragFlg_SchemaReq|PragFlg_NoColumns1,
  /* ColNames:  */ 55, 1,
  /* iArg:      */ 0 },
#endif
#if !defined(SQLITE_OMIT_FLAG_PRAGMAS)
#if !defined(SQLITE_OMIT_FOREIGN_KEY) && !defined(SQLITE_OMIT_TRIGGER)
 {/* zName:     */ "defer_foreign_keys",
  /* ePragTyp:  */ PragTyp_FLAG,
  /* ePragFlg:  */ PragFlg_Result0|PragFlg_NoColumns1,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ SQLITE_DeferFKs },
#endif
#endif
#if !defined(SQLITE_OMIT_FLAG_PRAGMAS)
 {/* zName:     */ "empty_result_callbacks",
  /* ePragTyp:  */ PragTyp_FLAG,
  /* ePragFlg:  */ PragFlg_Result0|PragFlg_NoColumns1,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ SQLITE_NullCallback },
#endif
#if !defined(SQLITE_OMIT_UTF16)
 {/* zName:     */ "encoding",
  /* ePragTyp:  */ PragTyp_ENCODING,
  /* ePragFlg:  */ PragFlg_Result0|PragFlg_NoColumns1,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ 0 },
#endif
#if !defined(SQLITE_OMIT_FOREIGN_KEY) && !defined(SQLITE_OMIT_TRIGGER)
 {/* zName:     */ "foreign_key_check",
  /* ePragTyp:  */ PragTyp_FOREIGN_KEY_CHECK,
  /* ePragFlg:  */ PragFlg_NeedSchema|PragFlg_Result0|PragFlg_Result1|PragFlg_SchemaOpt,
  /* ColNames:  */ 43, 4,
  /* iArg:      */ 0 },
#endif
#if !defined(SQLITE_OMIT_FOREIGN_KEY)
 {/* zName:     */ "foreign_key_list",
  /* ePragTyp:  */ PragTyp_FOREIGN_KEY_LIST,
  /* ePragFlg:  */ PragFlg_NeedSchema|PragFlg_Result1|PragFlg_SchemaOpt,
  /* ColNames:  */ 0, 8,
  /* iArg:      */ 0 },
#endif
#if !defined(SQLITE_OMIT_FLAG_PRAGMAS)
#if !defined(SQLITE_OMIT_FOREIGN_KEY) && !defined(SQLITE_OMIT_TRIGGER)
 {/* zName:     */ "foreign_keys",
  /* ePragTyp:  */ PragTyp_FLAG,
  /* ePragFlg:  */ PragFlg_Result0|PragFlg_NoColumns1,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ SQLITE_ForeignKeys },
#endif
#endif
#if !defined(SQLITE_OMIT_SCHEMA_VERSION_PRAGMAS)
 {/* zName:     */ "freelist_count",
  /* ePragTyp:  */ PragTyp_HEADER_VALUE,
  /* ePragFlg:  */ PragFlg_ReadOnly|PragFlg_Result0,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ BTREE_FREE_PAGE_COUNT },
#endif
#if !defined(SQLITE_OMIT_FLAG_PRAGMAS)
 {/* zName:     */ "full_column_names",
  /* ePragTyp:  */ PragTyp_FLAG,
  /* ePragFlg:  */ PragFlg_Result0|PragFlg_NoColumns1,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ SQLITE_FullColNames },
 {/* zName:     */ "fullfsync",
  /* ePragTyp:  */ PragTyp_FLAG,
  /* ePragFlg:  */ PragFlg_Result0|PragFlg_NoColumns1,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ SQLITE_FullFSync },
#endif
#if !defined(SQLITE_OMIT_SCHEMA_PRAGMAS)
#if !defined(SQLITE_OMIT_INTROSPECTION_PRAGMAS)
 {/* zName:     */ "function_list",
  /* ePragTyp:  */ PragTyp_FUNCTION_LIST,
  /* ePragFlg:  */ PragFlg_Result0,
  /* ColNames:  */ 27, 6,
  /* iArg:      */ 0 },
#endif
#endif
 {/* zName:     */ "hard_heap_limit",
  /* ePragTyp:  */ PragTyp_HARD_HEAP_LIMIT,
  /* ePragFlg:  */ PragFlg_Result0,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ 0 },
/* BEGIN SQLCIPHER */
#if defined(SQLITE_HAS_CODEC)
 {/* zName:     */ "hexkey",
  /* ePragTyp:  */ PragTyp_KEY,
  /* ePragFlg:  */ 0,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ 2 },
 {/* zName:     */ "hexrekey",
  /* ePragTyp:  */ PragTyp_KEY,
  /* ePragFlg:  */ 0,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ 3 },
#endif
/* END SQLCIPHER */
#if !defined(SQLITE_OMIT_FLAG_PRAGMAS)
#if !defined(SQLITE_OMIT_CHECK)
 {/* zName:     */ "ignore_check_constraints",
  /* ePragTyp:  */ PragTyp_FLAG,
  /* ePragFlg:  */ PragFlg_Result0|PragFlg_NoColumns1,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ SQLITE_IgnoreChecks },
#endif
#endif
#if !defined(SQLITE_OMIT_AUTOVACUUM)
 {/* zName:     */ "incremental_vacuum",
  /* ePragTyp:  */ PragTyp_INCREMENTAL_VACUUM,
  /* ePragFlg:  */ PragFlg_NeedSchema|PragFlg_NoColumns,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ 0 },
#endif
#if !defined(SQLITE_OMIT_SCHEMA_PRAGMAS)
 {/* zName:     */ "index_info",
  /* ePragTyp:  */ PragTyp_INDEX_INFO,
  /* ePragFlg:  */ PragFlg_NeedSchema|PragFlg_Result1|PragFlg_SchemaOpt,
  /* ColNames:  */ 21, 3,
  /* iArg:      */ 0 },
 {/* zName:     */ "index_list",
  /* ePragTyp:  */ PragTyp_INDEX_LIST,
  /* ePragFlg:  */ PragFlg_NeedSchema|PragFlg_Result1|PragFlg_SchemaOpt,
  /* ColNames:  */ 38, 5,
  /* iArg:      */ 0 },
 {/* zName:     */ "index_xinfo",
  /* ePragTyp:  */ PragTyp_INDEX_INFO,
  /* ePragFlg:  */ PragFlg_NeedSchema|PragFlg_Result1|PragFlg_SchemaOpt,
  /* ColNames:  */ 21, 6,
  /* iArg:      */ 1 },
#endif
#if !defined(SQLITE_OMIT_INTEGRITY_CHECK)
 {/* zName:     */ "integrity_check",
  /* ePragTyp:  */ PragTyp_INTEGRITY_CHECK,
  /* ePragFlg:  */ PragFlg_NeedSchema|PragFlg_Result0|PragFlg_Result1|PragFlg_SchemaOpt,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ 0 },
#endif
#if !defined(SQLITE_OMIT_PAGER_PRAGMAS)
 {/* zName:     */ "journal_mode",
  /* ePragTyp:  */ PragTyp_JOURNAL_MODE,
  /* ePragFlg:  */ PragFlg_NeedSchema|PragFlg_Result0|PragFlg_SchemaReq,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ 0 },
 {/* zName:     */ "journal_size_limit",
  /* ePragTyp:  */ PragTyp_JOURNAL_SIZE_LIMIT,
  /* ePragFlg:  */ PragFlg_Result0|PragFlg_SchemaReq,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ 0 },
#endif
/* BEGIN SQLCIPHER */
#if defined(SQLITE_HAS_CODEC)
 {/* zName:     */ "key",
  /* ePragTyp:  */ PragTyp_KEY,
  /* ePragFlg:  */ 0,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ 0 },
#endif
/* END SQLCIPHER */
#if !defined(SQLITE_OMIT_FLAG_PRAGMAS)
 {/* zName:     */ "legacy_alter_table",
  /* ePragTyp:  */ PragTyp_FLAG,
  /* ePragFlg:  */ PragFlg_Result0|PragFlg_NoColumns1,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ SQLITE_LegacyAlter },
#endif
#if !defined(SQLITE_OMIT_PAGER_PRAGMAS) && SQLITE_ENABLE_LOCKING_STYLE
 {/* zName:     */ "lock_proxy_file",
  /* ePragTyp:  */ PragTyp_LOCK_PROXY_FILE,
  /* ePragFlg:  */ PragFlg_NoColumns1,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ 0 },
#endif
#if defined(SQLITE_DEBUG) || defined(SQLITE_TEST)
 {/* zName:     */ "lock_status",
  /* ePragTyp:  */ PragTyp_LOCK_STATUS,
  /* ePragFlg:  */ PragFlg_Result0,
  /* ColNames:  */ 53, 2,
  /* iArg:      */ 0 },
#endif
#if !defined(SQLITE_OMIT_PAGER_PRAGMAS)
 {/* zName:     */ "locking_mode",
  /* ePragTyp:  */ PragTyp_LOCKING_MODE,
  /* ePragFlg:  */ PragFlg_Result0|PragFlg_SchemaReq,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ 0 },
 {/* zName:     */ "max_page_count",
  /* ePragTyp:  */ PragTyp_PAGE_COUNT,
  /* ePragFlg:  */ PragFlg_NeedSchema|PragFlg_Result0|PragFlg_SchemaReq,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ 0 },
 {/* zName:     */ "mmap_size",
  /* ePragTyp:  */ PragTyp_MMAP_SIZE,
  /* ePragFlg:  */ 0,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ 0 },
#endif
#if !defined(SQLITE_OMIT_SCHEMA_PRAGMAS)
#if !defined(SQLITE_OMIT_VIRTUALTABLE)
#if !defined(SQLITE_OMIT_INTROSPECTION_PRAGMAS)
 {/* zName:     */ "module_list",
  /* ePragTyp:  */ PragTyp_MODULE_LIST,
  /* ePragFlg:  */ PragFlg_Result0,
  /* ColNames:  */ 9, 1,
  /* iArg:      */ 0 },
#endif
#endif
#endif
 {/* zName:     */ "optimize",
  /* ePragTyp:  */ PragTyp_OPTIMIZE,
  /* ePragFlg:  */ PragFlg_Result1|PragFlg_NeedSchema,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ 0 },
#if !defined(SQLITE_OMIT_PAGER_PRAGMAS)
 {/* zName:     */ "page_count",
  /* ePragTyp:  */ PragTyp_PAGE_COUNT,
  /* ePragFlg:  */ PragFlg_NeedSchema|PragFlg_Result0|PragFlg_SchemaReq,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ 0 },
 {/* zName:     */ "page_size",
  /* ePragTyp:  */ PragTyp_PAGE_SIZE,
  /* ePragFlg:  */ PragFlg_Result0|PragFlg_SchemaReq|PragFlg_NoColumns1,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ 0 },
#endif
#if !defined(SQLITE_OMIT_FLAG_PRAGMAS)
#if defined(SQLITE_DEBUG)
 {/* zName:     */ "parser_trace",
  /* ePragTyp:  */ PragTyp_FLAG,
  /* ePragFlg:  */ PragFlg_Result0|PragFlg_NoColumns1,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ SQLITE_ParserTrace },
#endif
#endif
#if !defined(SQLITE_OMIT_INTROSPECTION_PRAGMAS)
 {/* zName:     */ "pragma_list",
  /* ePragTyp:  */ PragTyp_PRAGMA_LIST,
  /* ePragFlg:  */ PragFlg_Result0,
  /* ColNames:  */ 9, 1,
  /* iArg:      */ 0 },
#endif
#if !defined(SQLITE_OMIT_FLAG_PRAGMAS)
 {/* zName:     */ "query_only",
  /* ePragTyp:  */ PragTyp_FLAG,
  /* ePragFlg:  */ PragFlg_Result0|PragFlg_NoColumns1,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ SQLITE_QueryOnly },
#endif
#if !defined(SQLITE_OMIT_INTEGRITY_CHECK)
 {/* zName:     */ "quick_check",
  /* ePragTyp:  */ PragTyp_INTEGRITY_CHECK,
  /* ePragFlg:  */ PragFlg_NeedSchema|PragFlg_Result0|PragFlg_Result1|PragFlg_SchemaOpt,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ 0 },
#endif
#if !defined(SQLITE_OMIT_FLAG_PRAGMAS)
 {/* zName:     */ "read_uncommitted",
  /* ePragTyp:  */ PragTyp_FLAG,
  /* ePragFlg:  */ PragFlg_Result0|PragFlg_NoColumns1,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ SQLITE_ReadUncommit },
 {/* zName:     */ "recursive_triggers",
  /* ePragTyp:  */ PragTyp_FLAG,
  /* ePragFlg:  */ PragFlg_Result0|PragFlg_NoColumns1,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ SQLITE_RecTriggers },
#endif
/* BEGIN SQLCIPHER */
#if defined(SQLITE_HAS_CODEC)
 {/* zName:     */ "rekey",
  /* ePragTyp:  */ PragTyp_KEY,
  /* ePragFlg:  */ 0,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ 1 },
#endif
/* END SQLCIPHER */
#if !defined(SQLITE_OMIT_FLAG_PRAGMAS)
 {/* zName:     */ "reverse_unordered_selects",
  /* ePragTyp:  */ PragTyp_FLAG,
  /* ePragFlg:  */ PragFlg_Result0|PragFlg_NoColumns1,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ SQLITE_ReverseOrder },
#endif
#if !defined(SQLITE_OMIT_SCHEMA_VERSION_PRAGMAS)
 {/* zName:     */ "schema_version",
  /* ePragTyp:  */ PragTyp_HEADER_VALUE,
  /* ePragFlg:  */ PragFlg_NoColumns1|PragFlg_Result0,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ BTREE_SCHEMA_VERSION },
#endif
#if !defined(SQLITE_OMIT_PAGER_PRAGMAS)
 {/* zName:     */ "secure_delete",
  /* ePragTyp:  */ PragTyp_SECURE_DELETE,
  /* ePragFlg:  */ PragFlg_Result0,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ 0 },
#endif
#if !defined(SQLITE_OMIT_FLAG_PRAGMAS)
 {/* zName:     */ "short_column_names",
  /* ePragTyp:  */ PragTyp_FLAG,
  /* ePragFlg:  */ PragFlg_Result0|PragFlg_NoColumns1,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ SQLITE_ShortColNames },
#endif
 {/* zName:     */ "shrink_memory",
  /* ePragTyp:  */ PragTyp_SHRINK_MEMORY,
  /* ePragFlg:  */ PragFlg_NoColumns,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ 0 },
 {/* zName:     */ "soft_heap_limit",
  /* ePragTyp:  */ PragTyp_SOFT_HEAP_LIMIT,
  /* ePragFlg:  */ PragFlg_Result0,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ 0 },
#if !defined(SQLITE_OMIT_FLAG_PRAGMAS)
#if defined(SQLITE_DEBUG)
 {/* zName:     */ "sql_trace",
  /* ePragTyp:  */ PragTyp_FLAG,
  /* ePragFlg:  */ PragFlg_Result0|PragFlg_NoColumns1,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ SQLITE_SqlTrace },
#endif
#endif
#if !defined(SQLITE_OMIT_SCHEMA_PRAGMAS) && defined(SQLITE_DEBUG)
 {/* zName:     */ "stats",
  /* ePragTyp:  */ PragTyp_STATS,
  /* ePragFlg:  */ PragFlg_NeedSchema|PragFlg_Result0|PragFlg_SchemaReq,
  /* ColNames:  */ 33, 5,
  /* iArg:      */ 0 },
#endif
#if !defined(SQLITE_OMIT_PAGER_PRAGMAS)
 {/* zName:     */ "synchronous",
  /* ePragTyp:  */ PragTyp_SYNCHRONOUS,
  /* ePragFlg:  */ PragFlg_NeedSchema|PragFlg_Result0|PragFlg_SchemaReq|PragFlg_NoColumns1,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ 0 },
#endif
#if !defined(SQLITE_OMIT_SCHEMA_PRAGMAS)
 {/* zName:     */ "table_info",
  /* ePragTyp:  */ PragTyp_TABLE_INFO,
  /* ePragFlg:  */ PragFlg_NeedSchema|PragFlg_Result1|PragFlg_SchemaOpt,
  /* ColNames:  */ 8, 6,
  /* iArg:      */ 0 },
 {/* zName:     */ "table_list",
  /* ePragTyp:  */ PragTyp_TABLE_LIST,
  /* ePragFlg:  */ PragFlg_NeedSchema|PragFlg_Result1,
  /* ColNames:  */ 15, 6,
  /* iArg:      */ 0 },
 {/* zName:     */ "table_xinfo",
  /* ePragTyp:  */ PragTyp_TABLE_INFO,
  /* ePragFlg:  */ PragFlg_NeedSchema|PragFlg_Result1|PragFlg_SchemaOpt,
  /* ColNames:  */ 8, 7,
  /* iArg:      */ 1 },
#endif
#if !defined(SQLITE_OMIT_PAGER_PRAGMAS)
 {/* zName:     */ "temp_store",
  /* ePragTyp:  */ PragTyp_TEMP_STORE,
  /* ePragFlg:  */ PragFlg_Result0|PragFlg_NoColumns1,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ 0 },
 {/* zName:     */ "temp_store_directory",
  /* ePragTyp:  */ PragTyp_TEMP_STORE_DIRECTORY,
  /* ePragFlg:  */ PragFlg_NoColumns1,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ 0 },
#endif
/* BEGIN SQLCIPHER */
#if defined(SQLITE_HAS_CODEC)
 {/* zName:     */ "textkey",
  /* ePragTyp:  */ PragTyp_KEY,
  /* ePragFlg:  */ 0,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ 4 },
 {/* zName:     */ "textrekey",
  /* ePragTyp:  */ PragTyp_KEY,
  /* ePragFlg:  */ 0,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ 5 },
#endif
/* END SQLCIPHER */
 {/* zName:     */ "threads",
  /* ePragTyp:  */ PragTyp_THREADS,
  /* ePragFlg:  */ PragFlg_Result0,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ 0 },
#if !defined(SQLITE_OMIT_FLAG_PRAGMAS)
 {/* zName:     */ "trusted_schema",
  /* ePragTyp:  */ PragTyp_FLAG,
  /* ePragFlg:  */ PragFlg_Result0|PragFlg_NoColumns1,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ SQLITE_TrustedSchema },
#endif
#if !defined(SQLITE_OMIT_SCHEMA_VERSION_PRAGMAS)
 {/* zName:     */ "user_version",
  /* ePragTyp:  */ PragTyp_HEADER_VALUE,
  /* ePragFlg:  */ PragFlg_NoColumns1|PragFlg_Result0,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ BTREE_USER_VERSION },
#endif
#if !defined(SQLITE_OMIT_FLAG_PRAGMAS)
#if defined(SQLITE_DEBUG)
 {/* zName:     */ "vdbe_addoptrace",
  /* ePragTyp:  */ PragTyp_FLAG,
  /* ePragFlg:  */ PragFlg_Result0|PragFlg_NoColumns1,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ SQLITE_VdbeAddopTrace },
 {/* zName:     */ "vdbe_debug",
  /* ePragTyp:  */ PragTyp_FLAG,
  /* ePragFlg:  */ PragFlg_Result0|PragFlg_NoColumns1,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ SQLITE_SqlTrace|SQLITE_VdbeListing|SQLITE_VdbeTrace },
 {/* zName:     */ "vdbe_eqp",
  /* ePragTyp:  */ PragTyp_FLAG,
  /* ePragFlg:  */ PragFlg_Result0|PragFlg_NoColumns1,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ SQLITE_VdbeEQP },
 {/* zName:     */ "vdbe_listing",
  /* ePragTyp:  */ PragTyp_FLAG,
  /* ePragFlg:  */ PragFlg_Result0|PragFlg_NoColumns1,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ SQLITE_VdbeListing },
 {/* zName:     */ "vdbe_trace",
  /* ePragTyp:  */ PragTyp_FLAG,
  /* ePragFlg:  */ PragFlg_Result0|PragFlg_NoColumns1,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ SQLITE_VdbeTrace },
#endif
#endif
#if !defined(SQLITE_OMIT_WAL)
 {/* zName:     */ "wal_autocheckpoint",
  /* ePragTyp:  */ PragTyp_WAL_AUTOCHECKPOINT,
  /* ePragFlg:  */ 0,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ 0 },
 {/* zName:     */ "wal_checkpoint",
  /* ePragTyp:  */ PragTyp_WAL_CHECKPOINT,
  /* ePragFlg:  */ PragFlg_NeedSchema,
  /* ColNames:  */ 50, 3,
  /* iArg:      */ 0 },
#endif
#if !defined(SQLITE_OMIT_FLAG_PRAGMAS)
 {/* zName:     */ "writable_schema",
  /* ePragTyp:  */ PragTyp_FLAG,
  /* ePragFlg:  */ PragFlg_Result0|PragFlg_NoColumns1,
  /* ColNames:  */ 0, 0,
  /* iArg:      */ SQLITE_WriteSchema|SQLITE_NoSchemaError },
#endif
};
/* Number of pragmas: 68 on by default, 78 total. */