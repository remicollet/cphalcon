
extern zend_class_entry *phalcon_assets_inline_ce;

ZEPHIR_INIT_CLASS(Phalcon_Assets_Inline);

PHP_METHOD(Phalcon_Assets_Inline, getType);
PHP_METHOD(Phalcon_Assets_Inline, getContent);
PHP_METHOD(Phalcon_Assets_Inline, getFilter);
PHP_METHOD(Phalcon_Assets_Inline, getAttributes);
PHP_METHOD(Phalcon_Assets_Inline, __construct);
PHP_METHOD(Phalcon_Assets_Inline, setType);
PHP_METHOD(Phalcon_Assets_Inline, setFilter);
PHP_METHOD(Phalcon_Assets_Inline, setAttributes);
PHP_METHOD(Phalcon_Assets_Inline, getAssetKey);

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_inline_gettype, 0, 0, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_inline_gettype, 0, 0, IS_STRING, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_inline_getfilter, 0, 0, _IS_BOOL, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_inline_getfilter, 0, 0, _IS_BOOL, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_inline_getattributes, 0, 0, IS_ARRAY, 1)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_inline_getattributes, 0, 0, IS_ARRAY, NULL, 1)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_assets_inline___construct, 0, 0, 2)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, type, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, type)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, content, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, content)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, filter, _IS_BOOL, 0)
#else
	ZEND_ARG_INFO(0, filter)
#endif
	ZEND_ARG_ARRAY_INFO(0, attributes, 0)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_phalcon_assets_inline_settype, 0, 1, Phalcon\\Assets\\AssetInterface, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_inline_settype, 0, 1, IS_OBJECT, "Phalcon\\Assets\\AssetInterface", 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, type, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, type)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_phalcon_assets_inline_setfilter, 0, 1, Phalcon\\Assets\\AssetInterface, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_inline_setfilter, 0, 1, IS_OBJECT, "Phalcon\\Assets\\AssetInterface", 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, filter, _IS_BOOL, 0)
#else
	ZEND_ARG_INFO(0, filter)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_phalcon_assets_inline_setattributes, 0, 1, Phalcon\\Assets\\AssetInterface, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_inline_setattributes, 0, 1, IS_OBJECT, "Phalcon\\Assets\\AssetInterface", 0)
#endif
	ZEND_ARG_ARRAY_INFO(0, attributes, 0)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_inline_getassetkey, 0, 0, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_inline_getassetkey, 0, 0, IS_STRING, NULL, 0)
#endif
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(phalcon_assets_inline_method_entry) {
	PHP_ME(Phalcon_Assets_Inline, getType, arginfo_phalcon_assets_inline_gettype, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Assets_Inline, getContent, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Assets_Inline, getFilter, arginfo_phalcon_assets_inline_getfilter, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Assets_Inline, getAttributes, arginfo_phalcon_assets_inline_getattributes, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Assets_Inline, __construct, arginfo_phalcon_assets_inline___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Phalcon_Assets_Inline, setType, arginfo_phalcon_assets_inline_settype, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Assets_Inline, setFilter, arginfo_phalcon_assets_inline_setfilter, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Assets_Inline, setAttributes, arginfo_phalcon_assets_inline_setattributes, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Assets_Inline, getAssetKey, arginfo_phalcon_assets_inline_getassetkey, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
