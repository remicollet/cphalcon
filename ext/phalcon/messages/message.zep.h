
extern zend_class_entry *phalcon_messages_message_ce;

ZEPHIR_INIT_CLASS(Phalcon_Messages_Message);

PHP_METHOD(Phalcon_Messages_Message, __construct);
PHP_METHOD(Phalcon_Messages_Message, getCode);
PHP_METHOD(Phalcon_Messages_Message, getField);
PHP_METHOD(Phalcon_Messages_Message, getMessage);
PHP_METHOD(Phalcon_Messages_Message, getType);
PHP_METHOD(Phalcon_Messages_Message, jsonSerialize);
PHP_METHOD(Phalcon_Messages_Message, setCode);
PHP_METHOD(Phalcon_Messages_Message, setField);
PHP_METHOD(Phalcon_Messages_Message, setMessage);
PHP_METHOD(Phalcon_Messages_Message, setType);
PHP_METHOD(Phalcon_Messages_Message, __toString);
PHP_METHOD(Phalcon_Messages_Message, __set_state);

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_messages_message___construct, 0, 0, 1)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, message, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, message)
#endif
	ZEND_ARG_INFO(0, field)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, type, IS_STRING, 1)
#else
	ZEND_ARG_INFO(0, type)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, code, IS_LONG, 1)
#else
	ZEND_ARG_INFO(0, code)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_messages_message_getcode, 0, 0, IS_LONG, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_messages_message_getcode, 0, 0, IS_LONG, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_messages_message_getmessage, 0, 0, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_messages_message_getmessage, 0, 0, IS_STRING, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_messages_message_gettype, 0, 0, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_messages_message_gettype, 0, 0, IS_STRING, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_messages_message_jsonserialize, 0, 0, IS_ARRAY, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_messages_message_jsonserialize, 0, 0, IS_ARRAY, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_phalcon_messages_message_setcode, 0, 1, Phalcon\\Messages\\MessageInterface, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_messages_message_setcode, 0, 1, IS_OBJECT, "Phalcon\\Messages\\MessageInterface", 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, code, IS_LONG, 0)
#else
	ZEND_ARG_INFO(0, code)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_phalcon_messages_message_setfield, 0, 1, Phalcon\\Messages\\MessageInterface, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_messages_message_setfield, 0, 1, IS_OBJECT, "Phalcon\\Messages\\MessageInterface", 0)
#endif
	ZEND_ARG_INFO(0, field)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_phalcon_messages_message_setmessage, 0, 1, Phalcon\\Messages\\MessageInterface, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_messages_message_setmessage, 0, 1, IS_OBJECT, "Phalcon\\Messages\\MessageInterface", 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, message, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, message)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_phalcon_messages_message_settype, 0, 1, Phalcon\\Messages\\MessageInterface, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_messages_message_settype, 0, 1, IS_OBJECT, "Phalcon\\Messages\\MessageInterface", 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, type, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, type)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_messages_message___tostring, 0, 0, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_messages_message___tostring, 0, 0, IS_STRING, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_phalcon_messages_message___set_state, 0, 1, Phalcon\\Messages\\MessageInterface, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_messages_message___set_state, 0, 1, IS_OBJECT, "Phalcon\\Messages\\MessageInterface", 0)
#endif
	ZEND_ARG_ARRAY_INFO(0, message, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(phalcon_messages_message_method_entry) {
	PHP_ME(Phalcon_Messages_Message, __construct, arginfo_phalcon_messages_message___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Phalcon_Messages_Message, getCode, arginfo_phalcon_messages_message_getcode, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Messages_Message, getField, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Messages_Message, getMessage, arginfo_phalcon_messages_message_getmessage, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Messages_Message, getType, arginfo_phalcon_messages_message_gettype, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Messages_Message, jsonSerialize, arginfo_phalcon_messages_message_jsonserialize, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Messages_Message, setCode, arginfo_phalcon_messages_message_setcode, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Messages_Message, setField, arginfo_phalcon_messages_message_setfield, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Messages_Message, setMessage, arginfo_phalcon_messages_message_setmessage, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Messages_Message, setType, arginfo_phalcon_messages_message_settype, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Messages_Message, __toString, arginfo_phalcon_messages_message___tostring, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Messages_Message, __set_state, arginfo_phalcon_messages_message___set_state, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
