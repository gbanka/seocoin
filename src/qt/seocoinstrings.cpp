#include <QtGlobal>
// Automatically generated by extract_strings.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED *seocoin_strings[] = {
QT_TRANSLATE_NOOP("seocoin-core", ""
"%s, you must set a rpcpassword in the configuration file:\n"
" %s\n"
"It is recommended you use the following random password:\n"
"rpcuser=seocoinrpc\n"
"rpcpassword=%s\n"
"(you do not need to remember this password)\n"
"If the file does not exist, create it with owner-readable-only file "
"permissions.\n"),
QT_TRANSLATE_NOOP("seocoin-core", ""
"Acceptable ciphers (default: TLSv1+HIGH:!SSLv2:!aNULL:!eNULL:!AH:!3DES:"
"@STRENGTH)"),
QT_TRANSLATE_NOOP("seocoin-core", ""
"An error occurred while setting up the RPC port %u for listening on IPv4: %s"),
QT_TRANSLATE_NOOP("seocoin-core", ""
"An error occurred while setting up the RPC port %u for listening on IPv6, "
"falling back to IPv4: %s"),
QT_TRANSLATE_NOOP("seocoin-core", ""
"Cannot obtain a lock on data directory %s.  Freicoin is probably already "
"running."),
QT_TRANSLATE_NOOP("seocoin-core", ""
"Detach block and address databases. Increases shutdown time (default: 0)"),
QT_TRANSLATE_NOOP("seocoin-core", ""
"Error initializing database environment %s! To recover, BACKUP THAT "
"DIRECTORY, then remove everything from it except for wallet.dat."),
QT_TRANSLATE_NOOP("seocoin-core", ""
"Error: The transaction was rejected.  This might happen if some of the coins "
"in your wallet were already spent, such as if you used a copy of wallet.dat "
"and coins were spent in the copy but not marked as spent here."),
QT_TRANSLATE_NOOP("seocoin-core", ""
"Error: This transaction requires a transaction fee of at least %s because of "
"its amount, complexity, or use of recently received funds  "),
QT_TRANSLATE_NOOP("seocoin-core", ""
"Execute command when the best block changes (%s in cmd is replaced by block "
"hash)"),
QT_TRANSLATE_NOOP("seocoin-core", ""
"Listen for JSON-RPC connections on <port> (default: 8638 or testnet: 18638)"),
QT_TRANSLATE_NOOP("seocoin-core", ""
"Number of seconds to keep misbehaving peers from reconnecting (default: "
"86400)"),
QT_TRANSLATE_NOOP("seocoin-core", ""
"Set maximum size of high-priority/low-fee transactions in bytes (default: "
"27000)"),
QT_TRANSLATE_NOOP("seocoin-core", ""
"Unable to bind to %s on this computer. Freicoin is probably already running."),
QT_TRANSLATE_NOOP("seocoin-core", ""
"Warning: -paytxfee is set very high! This is the transaction fee you will "
"pay if you send a transaction."),
QT_TRANSLATE_NOOP("seocoin-core", ""
"Warning: Displayed transactions may not be correct! You may need to upgrade, "
"or other nodes may need to upgrade."),
QT_TRANSLATE_NOOP("seocoin-core", ""
"Warning: Please check that your computer's date and time are correct! If "
"your clock is wrong Freicoin will not work properly."),
QT_TRANSLATE_NOOP("seocoin-core", ""
"Warning: error reading wallet.dat! All keys read correctly, but transaction "
"data or address book entries might be missing or incorrect."),
QT_TRANSLATE_NOOP("seocoin-core", ""
"Warning: wallet.dat corrupt, data salvaged! Original wallet.dat saved as "
"wallet.{timestamp}.bak in %s; if your balance or transactions are incorrect "
"you should restore from a backup."),
QT_TRANSLATE_NOOP("seocoin-core", ""
"You must set rpcpassword=<password> in the configuration file:\n"
"%s\n"
"If the file does not exist, create it with owner-readable-only file "
"permissions."),
QT_TRANSLATE_NOOP("seocoin-core", "Accept command line and JSON-RPC commands"),
QT_TRANSLATE_NOOP("seocoin-core", "Accept connections from outside (default: 1 if no -proxy or -connect)"),
QT_TRANSLATE_NOOP("seocoin-core", "Add a node to connect to and attempt to keep the connection open"),
QT_TRANSLATE_NOOP("seocoin-core", "Allow DNS lookups for -addnode, -seednode and -connect"),
QT_TRANSLATE_NOOP("seocoin-core", "Allow JSON-RPC connections from specified IP address"),
QT_TRANSLATE_NOOP("seocoin-core", "Attempt to recover private keys from a corrupt wallet.dat"),
QT_TRANSLATE_NOOP("seocoin-core", "Bind to given address. Use [host]:port notation for IPv6"),
QT_TRANSLATE_NOOP("seocoin-core", "Block creation options:"),
QT_TRANSLATE_NOOP("seocoin-core", "Cannot downgrade wallet"),
QT_TRANSLATE_NOOP("seocoin-core", "Cannot initialize keypool"),
QT_TRANSLATE_NOOP("seocoin-core", "Cannot resolve -bind address: '%s'"),
QT_TRANSLATE_NOOP("seocoin-core", "Cannot resolve -externalip address: '%s'"),
QT_TRANSLATE_NOOP("seocoin-core", "Cannot write default address"),
QT_TRANSLATE_NOOP("seocoin-core", "Connect only to the specified node(s)"),
QT_TRANSLATE_NOOP("seocoin-core", "Connect through socks proxy"),
QT_TRANSLATE_NOOP("seocoin-core", "Connect to a node to retrieve peer addresses, and disconnect"),
QT_TRANSLATE_NOOP("seocoin-core", "Discover own IP address (default: 1 when listening and no -externalip)"),
QT_TRANSLATE_NOOP("seocoin-core", "Don't generate coins"),
QT_TRANSLATE_NOOP("seocoin-core", "Done loading"),
QT_TRANSLATE_NOOP("seocoin-core", "Error loading blkindex.dat"),
QT_TRANSLATE_NOOP("seocoin-core", "Error loading wallet.dat"),
QT_TRANSLATE_NOOP("seocoin-core", "Error loading wallet.dat: Wallet corrupted"),
QT_TRANSLATE_NOOP("seocoin-core", "Error loading wallet.dat: Wallet requires newer version of Freicoin"),
QT_TRANSLATE_NOOP("seocoin-core", "Error"),
QT_TRANSLATE_NOOP("seocoin-core", "Error: Transaction creation failed  "),
QT_TRANSLATE_NOOP("seocoin-core", "Error: Wallet locked, unable to create transaction  "),
QT_TRANSLATE_NOOP("seocoin-core", "Error: could not start node"),
QT_TRANSLATE_NOOP("seocoin-core", "Failed to listen on any port. Use -listen=0 if you want this."),
QT_TRANSLATE_NOOP("seocoin-core", "Fee per KB to add to transactions you send"),
QT_TRANSLATE_NOOP("seocoin-core", "Find peers using DNS lookup (default: 1 unless -connect)"),
QT_TRANSLATE_NOOP("seocoin-core", "Find peers using internet relay chat (default: 0)"),
QT_TRANSLATE_NOOP("seocoin-core", "Freicoin version"),
QT_TRANSLATE_NOOP("seocoin-core", "Freicoin"),
QT_TRANSLATE_NOOP("seocoin-core", "Generate coins"),
QT_TRANSLATE_NOOP("seocoin-core", "Get help for a command"),
QT_TRANSLATE_NOOP("seocoin-core", "How many blocks to check at startup (default: 2500, 0 = all)"),
QT_TRANSLATE_NOOP("seocoin-core", "How thorough the block verification is (0-6, default: 1)"),
QT_TRANSLATE_NOOP("seocoin-core", "Importing blockchain data file."),
QT_TRANSLATE_NOOP("seocoin-core", "Importing bootstrap blockchain data file."),
QT_TRANSLATE_NOOP("seocoin-core", "Imports blocks from external blk000?.dat file"),
QT_TRANSLATE_NOOP("seocoin-core", "Insufficient funds"),
QT_TRANSLATE_NOOP("seocoin-core", "Invalid -proxy address: '%s'"),
QT_TRANSLATE_NOOP("seocoin-core", "Invalid -tor address: '%s'"),
QT_TRANSLATE_NOOP("seocoin-core", "Invalid amount for -paytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("seocoin-core", "Invalid amount"),
QT_TRANSLATE_NOOP("seocoin-core", "List commands"),
QT_TRANSLATE_NOOP("seocoin-core", "Listen for connections on <port> (default: 8639 or testnet: 18639)"),
QT_TRANSLATE_NOOP("seocoin-core", "Loading addresses..."),
QT_TRANSLATE_NOOP("seocoin-core", "Loading block index..."),
QT_TRANSLATE_NOOP("seocoin-core", "Loading wallet..."),
QT_TRANSLATE_NOOP("seocoin-core", "Maintain at most <n> connections to peers (default: 125)"),
QT_TRANSLATE_NOOP("seocoin-core", "Maximum per-connection receive buffer, <n>*1000 bytes (default: 5000)"),
QT_TRANSLATE_NOOP("seocoin-core", "Maximum per-connection send buffer, <n>*1000 bytes (default: 1000)"),
QT_TRANSLATE_NOOP("seocoin-core", "Only connect to nodes in network <net> (IPv4, IPv6 or Tor)"),
QT_TRANSLATE_NOOP("seocoin-core", "Options:"),
QT_TRANSLATE_NOOP("seocoin-core", "Output extra debugging information. Implies all other -debug* options"),
QT_TRANSLATE_NOOP("seocoin-core", "Output extra network debugging information"),
QT_TRANSLATE_NOOP("seocoin-core", "Password for JSON-RPC connections"),
QT_TRANSLATE_NOOP("seocoin-core", "Prepend debug output with timestamp"),
QT_TRANSLATE_NOOP("seocoin-core", "Rescan the block chain for missing wallet transactions"),
QT_TRANSLATE_NOOP("seocoin-core", "Rescanning..."),
QT_TRANSLATE_NOOP("seocoin-core", "Run in the background as a daemon and accept commands"),
QT_TRANSLATE_NOOP("seocoin-core", "SSL options: (see the Bitcoin Wiki for SSL setup instructions)"),
QT_TRANSLATE_NOOP("seocoin-core", "Select the version of socks proxy to use (4-5, default: 5)"),
QT_TRANSLATE_NOOP("seocoin-core", "Send command to -server or seocoind"),
QT_TRANSLATE_NOOP("seocoin-core", "Send commands to node running on <ip> (default: 127.0.0.1)"),
QT_TRANSLATE_NOOP("seocoin-core", "Send trace/debug info to console instead of debug.log file"),
QT_TRANSLATE_NOOP("seocoin-core", "Send trace/debug info to debugger"),
QT_TRANSLATE_NOOP("seocoin-core", "Sending..."),
QT_TRANSLATE_NOOP("seocoin-core", "Server certificate file (default: server.cert)"),
QT_TRANSLATE_NOOP("seocoin-core", "Server private key (default: server.pem)"),
QT_TRANSLATE_NOOP("seocoin-core", "Set database cache size in megabytes (default: 25)"),
QT_TRANSLATE_NOOP("seocoin-core", "Set database disk log size in megabytes (default: 100)"),
QT_TRANSLATE_NOOP("seocoin-core", "Set key pool size to <n> (default: 100)"),
QT_TRANSLATE_NOOP("seocoin-core", "Set maximum block size in bytes (default: 250000)"),
QT_TRANSLATE_NOOP("seocoin-core", "Set minimum block size in bytes (default: 0)"),
QT_TRANSLATE_NOOP("seocoin-core", "Shrink debug.log file on client startup (default: 1 when no -debug)"),
QT_TRANSLATE_NOOP("seocoin-core", "Specify configuration file (default: seocoin.conf)"),
QT_TRANSLATE_NOOP("seocoin-core", "Specify connection timeout in milliseconds (default: 5000)"),
QT_TRANSLATE_NOOP("seocoin-core", "Specify data directory"),
QT_TRANSLATE_NOOP("seocoin-core", "Specify pid file (default: seocoind.pid)"),
QT_TRANSLATE_NOOP("seocoin-core", "Specify your own public address"),
QT_TRANSLATE_NOOP("seocoin-core", "This help message"),
QT_TRANSLATE_NOOP("seocoin-core", "Threshold for disconnecting misbehaving peers (default: 100)"),
QT_TRANSLATE_NOOP("seocoin-core", "To use the %s option"),
QT_TRANSLATE_NOOP("seocoin-core", "Unable to bind to %s on this computer (bind returned error %d, %s)"),
QT_TRANSLATE_NOOP("seocoin-core", "Unknown -socks proxy version requested: %i"),
QT_TRANSLATE_NOOP("seocoin-core", "Unknown network specified in -onlynet: '%s'"),
QT_TRANSLATE_NOOP("seocoin-core", "Upgrade wallet to latest format"),
QT_TRANSLATE_NOOP("seocoin-core", "Usage:"),
QT_TRANSLATE_NOOP("seocoin-core", "Use OpenSSL (https) for JSON-RPC connections"),
QT_TRANSLATE_NOOP("seocoin-core", "Use UPnP to map the listening port (default: 0)"),
QT_TRANSLATE_NOOP("seocoin-core", "Use UPnP to map the listening port (default: 1 when listening)"),
QT_TRANSLATE_NOOP("seocoin-core", "Use proxy to reach tor hidden services (default: same as -proxy)"),
QT_TRANSLATE_NOOP("seocoin-core", "Use the test network"),
QT_TRANSLATE_NOOP("seocoin-core", "Username for JSON-RPC connections"),
QT_TRANSLATE_NOOP("seocoin-core", "Verifying database integrity..."),
QT_TRANSLATE_NOOP("seocoin-core", "Wallet needed to be rewritten: restart Freicoin to complete"),
QT_TRANSLATE_NOOP("seocoin-core", "Warning: Disk space is low!"),
QT_TRANSLATE_NOOP("seocoin-core", "Warning: This version is obsolete, upgrade required!"),
QT_TRANSLATE_NOOP("seocoin-core", "wallet.dat corrupt, salvage failed"),
};