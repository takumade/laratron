/*                                                                -*- C -*-
   +----------------------------------------------------------------------+
   | PHP Version 7                                                        |
   +----------------------------------------------------------------------+
   | Copyright (c) 1997-2018 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Author: Stig Sæther Bakken <ssb@php.net>                             |
   +----------------------------------------------------------------------+
*/

/* $Id$ */

#define CONFIGURE_COMMAND " './configure'  '--prefix=/usr/local/Cellar/php@7.2/7.2.33' '--localstatedir=/usr/local/var' '--sysconfdir=/usr/local/etc/php/7.2' '--with-config-file-path=/usr/local/etc/php/7.2' '--with-config-file-scan-dir=/usr/local/etc/php/7.2/conf.d' '--with-pear=/usr/local/Cellar/php@7.2/7.2.33/share/php@7.2/pear' '--enable-bcmath' '--enable-calendar' '--enable-dba' '--enable-dtrace' '--enable-exif' '--enable-ftp' '--enable-fpm' '--enable-intl' '--enable-mbregex' '--enable-mbstring' '--enable-mysqlnd' '--enable-opcache-file' '--enable-pcntl' '--enable-phpdbg' '--enable-phpdbg-readline' '--enable-phpdbg-webhelper' '--enable-shmop' '--enable-soap' '--enable-sockets' '--enable-sysvmsg' '--enable-sysvsem' '--enable-sysvshm' '--enable-wddx' '--enable-zip' '--with-apxs2=/usr/local/opt/httpd/bin/apxs' '--with-bz2=/usr' '--with-curl=/usr/local/opt/curl-openssl' '--with-fpm-user=_www' '--with-fpm-group=_www' '--with-freetype-dir=/usr/local/opt/freetype' '--with-gd' '--with-gettext=/usr/local/opt/gettext' '--with-gmp=/usr/local/opt/gmp' '--with-iconv=/usr' '--with-icu-dir=/usr/local/opt/icu4c' '--with-jpeg-dir=/usr/local/opt/jpeg' '--with-kerberos=/usr' '--with-layout=GNU' '--with-ldap=/usr/local/opt/openldap' '--with-ldap-sasl=/usr' '--with-libxml-dir=/usr' '--with-libedit=/usr' '--with-libzip' '--with-mhash=/usr' '--with-mysql-sock=/tmp/mysql.sock' '--with-mysqli=mysqlnd' '--with-ndbm=/usr' '--with-openssl=/usr/local/opt/openssl@1.1' '--with-password-argon2=/usr/local/opt/argon2' '--with-pdo-dblib=/usr/local/opt/freetds' '--with-pdo-mysql=mysqlnd' '--with-pdo-odbc=unixODBC,/usr/local/opt/unixodbc' '--with-pdo-pgsql=/usr/local/opt/libpq' '--with-pdo-sqlite=/usr/local/opt/sqlite' '--with-pgsql=/usr/local/opt/libpq' '--with-pic' '--with-png-dir=/usr/local/opt/libpng' '--with-pspell=/usr/local/opt/aspell' '--with-sodium=/usr/local/opt/libsodium' '--with-sqlite3=/usr/local/opt/sqlite' '--with-tidy=/usr/local/opt/tidy-html5' '--with-unixODBC=/usr/local/opt/unixodbc' '--with-webp-dir=/usr/local/opt/webp' '--with-xmlrpc' '--with-xsl=/usr' '--with-zlib=/usr'"
#define PHP_ADA_INCLUDE		""
#define PHP_ADA_LFLAGS		""
#define PHP_ADA_LIBS		""
#define PHP_APACHE_INCLUDE	""
#define PHP_APACHE_TARGET	""
#define PHP_FHTTPD_INCLUDE      ""
#define PHP_FHTTPD_LIB          ""
#define PHP_FHTTPD_TARGET       ""
#define PHP_CFLAGS		"$(CFLAGS_CLEAN) -prefer-non-pic -static"
#define PHP_DBASE_LIB		""
#define PHP_BUILD_DEBUG		""
#define PHP_GDBM_INCLUDE	""
#define PHP_IBASE_INCLUDE	""
#define PHP_IBASE_LFLAGS	""
#define PHP_IBASE_LIBS		""
#define PHP_IFX_INCLUDE		""
#define PHP_IFX_LFLAGS		""
#define PHP_IFX_LIBS		""
#define PHP_INSTALL_IT		"$(mkinstalldirs) '$(INSTALL_ROOT)/usr/local/Cellar/php@7.2/7.2.33/lib/httpd/modules' &&                  /usr/local/opt/httpd/bin/apxs -S LIBEXECDIR='/usr/local/Cellar/php\@7.2/7.2.33/lib/httpd/modules'                        -i -n php7 libs/libphp7.so"
#define PHP_IODBC_INCLUDE	""
#define PHP_IODBC_LFLAGS	""
#define PHP_IODBC_LIBS		""
#define PHP_MSQL_INCLUDE	""
#define PHP_MSQL_LFLAGS		""
#define PHP_MSQL_LIBS		""
#define PHP_MYSQL_INCLUDE	"@MYSQL_INCLUDE@"
#define PHP_MYSQL_LIBS		"@MYSQL_LIBS@"
#define PHP_MYSQL_TYPE		"@MYSQL_MODULE_TYPE@"
#define PHP_ODBC_INCLUDE	"-I/usr/local/opt/unixodbc/include"
#define PHP_ODBC_LFLAGS		"-L/usr/local/opt/unixodbc/lib"
#define PHP_ODBC_LIBS		"-lodbc"
#define PHP_ODBC_TYPE		"unixODBC"
#define PHP_OCI8_SHARED_LIBADD 	""
#define PHP_OCI8_DIR			""
#define PHP_OCI8_ORACLE_VERSION		""
#define PHP_ORACLE_SHARED_LIBADD 	"@ORACLE_SHARED_LIBADD@"
#define PHP_ORACLE_DIR				"@ORACLE_DIR@"
#define PHP_ORACLE_VERSION			"@ORACLE_VERSION@"
#define PHP_PGSQL_INCLUDE	""
#define PHP_PGSQL_LFLAGS	""
#define PHP_PGSQL_LIBS		""
#define PHP_PROG_SENDMAIL	"/usr/sbin/sendmail"
#define PHP_SOLID_INCLUDE	""
#define PHP_SOLID_LIBS		""
#define PHP_EMPRESS_INCLUDE	""
#define PHP_EMPRESS_LIBS	""
#define PHP_SYBASE_INCLUDE	""
#define PHP_SYBASE_LFLAGS	""
#define PHP_SYBASE_LIBS		""
#define PHP_DBM_TYPE		""
#define PHP_DBM_LIB		""
#define PHP_LDAP_LFLAGS		""
#define PHP_LDAP_INCLUDE	""
#define PHP_LDAP_LIBS		""
#define PHP_BIRDSTEP_INCLUDE     ""
#define PHP_BIRDSTEP_LIBS        ""
#define PEAR_INSTALLDIR         "/usr/local/Cellar/php@7.2/7.2.33/share/php@7.2/pear"
#define PHP_INCLUDE_PATH	".:/usr/local/Cellar/php@7.2/7.2.33/share/php@7.2/pear"
#define PHP_EXTENSION_DIR       "/usr/local/Cellar/php@7.2/7.2.33/lib/php/20170718"
#define PHP_PREFIX              "/usr/local/Cellar/php@7.2/7.2.33"
#define PHP_BINDIR              "/usr/local/Cellar/php@7.2/7.2.33/bin"
#define PHP_SBINDIR             "/usr/local/Cellar/php@7.2/7.2.33/sbin"
#define PHP_MANDIR              "/usr/local/Cellar/php@7.2/7.2.33/share/man"
#define PHP_LIBDIR              "/usr/local/Cellar/php@7.2/7.2.33/lib/php"
#define PHP_DATADIR             "/usr/local/Cellar/php@7.2/7.2.33/share/php"
#define PHP_SYSCONFDIR          "/usr/local/etc/php/7.2"
#define PHP_LOCALSTATEDIR       "/usr/local/var"
#define PHP_CONFIG_FILE_PATH    "/usr/local/etc/php/7.2"
#define PHP_CONFIG_FILE_SCAN_DIR    "/usr/local/etc/php/7.2/conf.d"
#define PHP_SHLIB_SUFFIX        "so"
#define PHP_SHLIB_EXT_PREFIX    ""
