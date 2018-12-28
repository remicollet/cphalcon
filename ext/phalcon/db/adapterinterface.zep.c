
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


/**
 * This file is part of the Phalcon.
 *
 * (c) Phalcon Team <team@phalcon.com>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */
/**
 * Phalcon\Db\AdapterInterface
 *
 * Interface for Phalcon\Db adapters
 */
ZEPHIR_INIT_CLASS(Phalcon_Db_AdapterInterface) {

	ZEPHIR_REGISTER_INTERFACE(Phalcon\\Db, AdapterInterface, phalcon, db_adapterinterface, phalcon_db_adapterinterface_method_entry);

	return SUCCESS;

}

/**
 * Adds a column to a table
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, addColumn);

/**
 * Adds an index to a table
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, addIndex);

/**
 * Adds a foreign key to a table
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, addForeignKey);

/**
 * Adds a primary key to a table
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, addPrimaryKey);

/**
 * Returns the number of affected rows by the last INSERT/UPDATE/DELETE reported by the database system
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, affectedRows);

/**
 * Starts a transaction in the connection
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, begin);

/**
 * Closes active connection returning success. Phalcon automatically closes
 * and destroys active connections within Phalcon\Db\Pool
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, close);

/**
 * Commits the active transaction in the connection
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, commit);

/**
 * This method is automatically called in \Phalcon\Db\Adapter\Pdo constructor.
 * Call it when you need to restore a database connection
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, connect);

/**
 * Creates a new savepoint
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, createSavepoint);

/**
 * Creates a table
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, createTable);

/**
 * Creates a view
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, createView);

/**
 * Deletes data from a table using custom RDBMS SQL syntax
 *
 * @param  string whereCondition
 * @param  array placeholders
 * @param  array dataTypes
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, delete);

/**
 * Returns an array of Phalcon\Db\Column objects describing a table
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, describeColumns);

/**
 * Lists table indexes
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, describeIndexes);

/**
 * Lists table references
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, describeReferences);

/**
 * Drops a column from a table
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, dropColumn);

/**
 * Drops a foreign key from a table
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, dropForeignKey);

/**
 * Drop an index from a table
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, dropIndex);

/**
 * Drops primary key from a table
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, dropPrimaryKey);

/**
 * Drops a table from a schema/database
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, dropTable);

/**
 * Drops a view
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, dropView);

/**
 * Escapes a column/table/schema name
 *
 * @param string identifier
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, escapeIdentifier);

/**
 * Escapes a value to avoid SQL injections
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, escapeString);

/**
 * Sends SQL statements to the database server returning the success state.
 * Use this method only when the SQL statement sent to the server doesn't return any rows
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, execute);

/**
 * Dumps the complete result of a query into an array
 *
 * @param int placeholders
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, fetchAll);

/**
 * Returns the n'th field of first row in a SQL query result
 *
 *<code>
 * // Getting count of robots
 * $robotsCount = $connection->fetchColumn("SELECT count(*) FROM robots");
 * print_r($robotsCount);
 *
 * // Getting name of last edited robot
 * $robot = $connection->fetchColumn(
 *     "SELECT id, name FROM robots order by modified desc",
 *     1
 * );
 * print_r($robot);
 *</code>
 *
 * @param  int|string column
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, fetchColumn);

/**
 * Returns the first row in a SQL query result
 *
 * @param int placeholders
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, fetchOne);

/**
 * Returns a SQL modified with a FOR UPDATE clause
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, forUpdate);

/**
 * Returns the SQL column definition from a column
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, getColumnDefinition);

/**
 * Gets a list of columns
 *
 * @param	array columnList
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, getColumnList);

/**
 * Gets the active connection unique identifier
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, getConnectionId);

/**
 * Return descriptor used to connect to the active database
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, getDescriptor);

/**
 * Returns internal dialect instance
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, getDialect);

/**
 * Returns the name of the dialect used
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, getDialectType);

/**
 * Return the default identity value to insert in an identity column
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, getDefaultIdValue);

/**
 * Return internal PDO handler
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, getInternalHandler);

/**
 * Returns the savepoint name to use for nested transactions
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, getNestedTransactionSavepointName);

/**
 * Active SQL statement in the object without replace bound parameters
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, getRealSQLStatement);

/**
 * Active SQL statement in the object
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, getSQLStatement);

/**
 * Active SQL statement in the object
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, getSQLBindTypes);

/**
 * Active SQL statement in the object
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, getSQLVariables);

/**
 * Returns type of database system the adapter is used for
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, getType);

/**
 * Inserts data into a table using custom RDBMS SQL syntax
 *
 * @param 	array fields
 * @param 	array dataTypes
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, insert);

/**
 * Inserts data into a table using custom RBDM SQL syntax
 *
 * <code>
 * // Inserting a new robot
 * $success = $connection->insertAsDict(
 *     "robots",
 *     [
 *         "name" => "Astro Boy",
 *         "year" => 1952,
 *     ]
 * );
 *
 * // Next SQL sentence is sent to the database system
 * INSERT INTO `robots` (`name`, `year`) VALUES ("Astro boy", 1952);
 * </code>
 *
 * @param 	array data
 * @param 	array dataTypes
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, insertAsDict);

/**
 * Returns if nested transactions should use savepoints
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, isNestedTransactionsWithSavepoints);

/**
 * Checks whether connection is under database transaction
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, isUnderTransaction);

/**
 * Returns insert id for the auto_increment column inserted in the last SQL statement
 *
 * @param string sequenceName
 * @return int
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, lastInsertId);

/**
 * Appends a LIMIT clause to sqlQuery argument
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, limit);

/**
 * List all tables on a database
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, listTables);

/**
 * List all views on a database
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, listViews);

/**
 * Modifies a table column based on a definition
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, modifyColumn);

/**
 * Sends SQL statements to the database server returning the success state.
 * Use this method only when the SQL statement sent to the server return rows
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, query);

/**
 * Releases given savepoint
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, releaseSavepoint);

/**
 * Rollbacks the active transaction in the connection
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, rollback);

/**
 * Rollbacks given savepoint
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, rollbackSavepoint);

/**
 * Returns a SQL modified with a LOCK IN SHARE MODE clause
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, sharedLock);

/**
 * Set if nested transactions should use savepoints
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, setNestedTransactionsWithSavepoints);

/**
 * Check whether the database system requires a sequence to produce auto-numeric values
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, supportSequences);

/**
 * Generates SQL checking for the existence of a schema.table
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, tableExists);

/**
 * Gets creation options from a table
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, tableOptions);

/**
 * Updates data on a table using custom RDBMS SQL syntax
 *
 * @param 	array fields
 * @param 	array values
 * @param 	string whereCondition
 * @param 	array dataTypes
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, update);

/**
 * Updates data on a table using custom RBDM SQL syntax
 * Another, more convenient syntax
 *
 * <code>
 * // Updating existing robot
 * $success = $connection->updateAsDict(
 *     "robots",
 *     [
 *         "name" => "New Astro Boy",
 *     ],
 *     "id = 101"
 * );
 *
 * // Next SQL sentence is sent to the database system
 * UPDATE `robots` SET `name` = "Astro boy" WHERE id = 101
 * </code>
 *
 * @param 	array data
 * @param 	string whereCondition
 * @param 	array dataTypes
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, updateAsDict);

/**
 * Check whether the database system requires an explicit value for identity columns
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, useExplicitIdValue);

/**
 * Generates SQL checking for the existence of a schema.view
 */
ZEPHIR_DOC_METHOD(Phalcon_Db_AdapterInterface, viewExists);

