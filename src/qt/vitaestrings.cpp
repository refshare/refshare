

#include <QtGlobal>

// Automatically generated by extract_strings.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED *refshare_strings[] = {
QT_TRANSLATE_NOOP("refshare-core", " mints deleted\n"),
QT_TRANSLATE_NOOP("refshare-core", " mints updated, "),
QT_TRANSLATE_NOOP("refshare-core", " unconfirmed transactions removed\n"),
QT_TRANSLATE_NOOP("refshare-core", ""
"(1 = keep tx meta data e.g. account owner and payment request information, 2 "
"= drop tx meta data)"),
QT_TRANSLATE_NOOP("refshare-core", ""
"Allow JSON-RPC connections from specified source. Valid for <ip> are a "
"single IP (e.g. 1.2.3.4), a network/netmask (e.g. 1.2.3.4/255.255.255.0) or "
"a network/CIDR (e.g. 1.2.3.4/24). This option can be specified multiple times"),
QT_TRANSLATE_NOOP("refshare-core", ""
"An error occurred while setting up the RPC address %s port %u for listening: "
"%s"),
QT_TRANSLATE_NOOP("refshare-core", ""
"Bind to given address and always listen on it. Use [host]:port notation for "
"IPv6"),
QT_TRANSLATE_NOOP("refshare-core", ""
"Bind to given address and whitelist peers connecting to it. Use [host]:port "
"notation for IPv6"),
QT_TRANSLATE_NOOP("refshare-core", ""
"Bind to given address to listen for JSON-RPC connections. Use [host]:port "
"notation for IPv6. This option can be specified multiple times (default: "
"bind to all interfaces)"),
QT_TRANSLATE_NOOP("refshare-core", ""
"Calculated accumulator checkpoint is not what is recorded by block index"),
QT_TRANSLATE_NOOP("refshare-core", ""
"Cannot obtain a lock on data directory %s. REFSHARE Core is probably already "
"running."),
QT_TRANSLATE_NOOP("refshare-core", ""
"Change automatic finalized budget voting behavior. mode=auto: Vote for only "
"exact finalized budget match to my generated budget. (string, default: auto)"),
QT_TRANSLATE_NOOP("refshare-core", ""
"Continuously rate-limit free transactions to <n>*1000 bytes per minute "
"(default:%u)"),
QT_TRANSLATE_NOOP("refshare-core", ""
"Create new files with system default permissions, instead of umask 077 (only "
"effective with disabled wallet functionality)"),
QT_TRANSLATE_NOOP("refshare-core", ""
"Delete all wallet transactions and only recover those parts of the "
"blockchain through -rescan on startup"),
QT_TRANSLATE_NOOP("refshare-core", ""
"Disable all REFSHARE specific functionality (Fundamentalnodes, Zerocoin, SwiftX, "
"Budgeting) (0-1, default: %u)"),
QT_TRANSLATE_NOOP("refshare-core", ""
"Distributed under the MIT software license, see the accompanying file "
"COPYING or <http://www.opensource.org/licenses/mit-license.php>."),
QT_TRANSLATE_NOOP("refshare-core", ""
"Enable SwiftX, show confirmations for locked transactions (bool, default: %s)"),
QT_TRANSLATE_NOOP("refshare-core", ""
"Enable automatic wallet backups triggered after each zREFSHARE minting (0-1, "
"default: %u)"),
QT_TRANSLATE_NOOP("refshare-core", ""
"Enable spork administration functionality with the appropriate private key."),
QT_TRANSLATE_NOOP("refshare-core", ""
"Enter regression test mode, which uses a special chain in which blocks can "
"be solved instantly."),
QT_TRANSLATE_NOOP("refshare-core", ""
"Error: Listening for incoming connections failed (listen returned error %s)"),
QT_TRANSLATE_NOOP("refshare-core", ""
"Error: The transaction was rejected! This might happen if some of the coins "
"in your wallet were already spent, such as if you used a copy of wallet.dat "
"and coins were spent in the copy but not marked as spent here."),
QT_TRANSLATE_NOOP("refshare-core", ""
"Error: This transaction requires a transaction fee of at least %s because of "
"its amount, complexity, or use of recently received funds!"),
QT_TRANSLATE_NOOP("refshare-core", ""
"Error: Unsupported argument -checklevel found. Checklevel must be level 4."),
QT_TRANSLATE_NOOP("refshare-core", ""
"Error: Unsupported argument -socks found. Setting SOCKS version isn't "
"possible anymore, only SOCKS5 proxies are supported."),
QT_TRANSLATE_NOOP("refshare-core", ""
"Execute command when a relevant alert is received or we see a really long "
"fork (%s in cmd is replaced by message)"),
QT_TRANSLATE_NOOP("refshare-core", ""
"Execute command when a wallet transaction changes (%s in cmd is replaced by "
"TxID)"),
QT_TRANSLATE_NOOP("refshare-core", ""
"Execute command when the best block changes (%s in cmd is replaced by block "
"hash)"),
QT_TRANSLATE_NOOP("refshare-core", ""
"Fees (in REFSHARE/Kb) smaller than this are considered zero fee for relaying "
"(default: %s)"),
QT_TRANSLATE_NOOP("refshare-core", ""
"Fees (in REFSHARE/Kb) smaller than this are considered zero fee for transaction "
"creation (default: %s)"),
QT_TRANSLATE_NOOP("refshare-core", ""
"Flush database activity from memory pool to disk log every <n> megabytes "
"(default: %u)"),
QT_TRANSLATE_NOOP("refshare-core", ""
"Found unconfirmed denominated outputs, will wait till they confirm to "
"continue."),
QT_TRANSLATE_NOOP("refshare-core", ""
"If paytxfee is not set, include enough fee so transactions begin "
"confirmation on average within n blocks (default: %u)"),
QT_TRANSLATE_NOOP("refshare-core", ""
"In this mode -genproclimit controls how many blocks are generated "
"immediately."),
QT_TRANSLATE_NOOP("refshare-core", ""
"Insufficient or insufficient confirmed funds, you might need to wait a few "
"minutes and try again."),
QT_TRANSLATE_NOOP("refshare-core", ""
"Invalid amount for -maxtxfee=<amount>: '%s' (must be at least the minrelay "
"fee of %s to prevent stuck transactions)"),
QT_TRANSLATE_NOOP("refshare-core", ""
"Keep the specified amount available for spending at all times (default: 0)"),
QT_TRANSLATE_NOOP("refshare-core", ""
"Log transaction priority and fee per kB when mining blocks (default: %u)"),
QT_TRANSLATE_NOOP("refshare-core", ""
"Maintain a full transaction index, used by the getrawtransaction rpc call "
"(default: %u)"),
QT_TRANSLATE_NOOP("refshare-core", ""
"Maximum size of data in data carrier transactions we relay and mine "
"(default: %u)"),
QT_TRANSLATE_NOOP("refshare-core", ""
"Maximum total fees to use in a single wallet transaction, setting too low "
"may abort large transactions (default: %s)"),
QT_TRANSLATE_NOOP("refshare-core", ""
"Number of seconds to keep misbehaving peers from reconnecting (default: %u)"),
QT_TRANSLATE_NOOP("refshare-core", ""
"Obfuscation uses exact denominated amounts to send funds, you might simply "
"need to anonymize some more coins."),
QT_TRANSLATE_NOOP("refshare-core", ""
"Output debugging information (default: %u, supplying <category> is optional)"),
QT_TRANSLATE_NOOP("refshare-core", ""
"Preferred Denomination for automatically minted Zerocoin  "
"(1/5/10/50/100/500/1000/5000), 0 for no preference. default: %u)"),
QT_TRANSLATE_NOOP("refshare-core", ""
"Query for peer addresses via DNS lookup, if low on addresses (default: 1 "
"unless -connect)"),
QT_TRANSLATE_NOOP("refshare-core", ""
"Randomize credentials for every proxy connection. This enables Tor stream "
"isolation (default: %u)"),
QT_TRANSLATE_NOOP("refshare-core", ""
"Require high priority for relaying free or low-fee transactions (default:%u)"),
QT_TRANSLATE_NOOP("refshare-core", ""
"Send trace/debug info to console instead of debug.log file (default: %u)"),
QT_TRANSLATE_NOOP("refshare-core", ""
"Set maximum size of high-priority/low-fee transactions in bytes (default: %d)"),
QT_TRANSLATE_NOOP("refshare-core", ""
"Set the number of script verification threads (%u to %d, 0 = auto, <0 = "
"leave that many cores free, default: %d)"),
QT_TRANSLATE_NOOP("refshare-core", ""
"Set the number of threads for coin generation if enabled (-1 = all cores, "
"default: %d)"),
QT_TRANSLATE_NOOP("refshare-core", ""
"Show N confirmations for a successfully locked transaction (0-9999, default: "
"%u)"),
QT_TRANSLATE_NOOP("refshare-core", ""
"Support filtering of blocks and transaction with bloom filters (default: %u)"),
QT_TRANSLATE_NOOP("refshare-core", ""
"SwiftX requires inputs with at least 6 confirmations, you might need to wait "
"a few minutes and try again."),
QT_TRANSLATE_NOOP("refshare-core", ""
"This is a pre-release test build - use at your own risk - do not use for "
"staking or merchant applications!"),
QT_TRANSLATE_NOOP("refshare-core", ""
"This product includes software developed by the OpenSSL Project for use in "
"the OpenSSL Toolkit <https://www.openssl.org/> and cryptographic software "
"written by Eric Young and UPnP software written by Thomas Bernard."),
QT_TRANSLATE_NOOP("refshare-core", ""
"To use refshared, or the -server option to refshare-qt, you must set an rpcpassword "
"in the configuration file:\n"
"%s\n"
"It is recommended you use the following random password:\n"
"rpcuser=refsharerpc\n"
"rpcpassword=%s\n"
"(you do not need to remember this password)\n"
"The username and password MUST NOT be the same.\n"
"If the file does not exist, create it with owner-readable-only file "
"permissions.\n"
"It is also recommended to set alertnotify so you are notified of problems;\n"
"for example: alertnotify=echo %%s | mail -s \"REFSHARE Alert\" admin@foo.com\n"),
QT_TRANSLATE_NOOP("refshare-core", ""
"Unable to bind to %s on this computer. REFSHARE Core is probably already running."),
QT_TRANSLATE_NOOP("refshare-core", ""
"Unable to locate enough Obfuscation denominated funds for this transaction."),
QT_TRANSLATE_NOOP("refshare-core", ""
"Unable to locate enough Obfuscation non-denominated funds for this "
"transaction that are not equal 10000 REFSHARE."),
QT_TRANSLATE_NOOP("refshare-core", ""
"Unable to locate enough funds for this transaction that are not equal 10000 "
"REFSHARE."),
QT_TRANSLATE_NOOP("refshare-core", ""
"Use separate SOCKS5 proxy to reach peers via Tor hidden services (default: "
"%s)"),
QT_TRANSLATE_NOOP("refshare-core", ""
"Warning: -maxtxfee is set very high! Fees this large could be paid on a "
"single transaction."),
QT_TRANSLATE_NOOP("refshare-core", ""
"Warning: -paytxfee is set very high! This is the transaction fee you will "
"pay if you send a transaction."),
QT_TRANSLATE_NOOP("refshare-core", ""
"Warning: Please check that your computer's date and time are correct! If "
"your clock is wrong REFSHARE Core will not work properly."),
QT_TRANSLATE_NOOP("refshare-core", ""
"Warning: The network does not appear to fully agree! Some miners appear to "
"be experiencing issues."),
QT_TRANSLATE_NOOP("refshare-core", ""
"Warning: We do not appear to fully agree with our peers! You may need to "
"upgrade, or other nodes may need to upgrade."),
QT_TRANSLATE_NOOP("refshare-core", ""
"Warning: error reading wallet.dat! All keys read correctly, but transaction "
"data or address book entries might be missing or incorrect."),
QT_TRANSLATE_NOOP("refshare-core", ""
"Warning: wallet.dat corrupt, data salvaged! Original wallet.dat saved as "
"wallet.{timestamp}.bak in %s; if your balance or transactions are incorrect "
"you should restore from a backup."),
QT_TRANSLATE_NOOP("refshare-core", ""
"Whitelist peers connecting from the given netmask or IP address. Can be "
"specified multiple times."),
QT_TRANSLATE_NOOP("refshare-core", ""
"Whitelisted peers cannot be DoS banned and their transactions are always "
"relayed, even if they are already in the mempool, useful e.g. for a gateway"),
QT_TRANSLATE_NOOP("refshare-core", ""
"You must specify a fundamentalnodeprivkey in the configuration. Please see "
"documentation for help."),
QT_TRANSLATE_NOOP("refshare-core", "(8765 could be used only on mainnet)"),
QT_TRANSLATE_NOOP("refshare-core", "(default: %s)"),
QT_TRANSLATE_NOOP("refshare-core", "(default: 1)"),
QT_TRANSLATE_NOOP("refshare-core", "(must be 8765 for mainnet)"),
QT_TRANSLATE_NOOP("refshare-core", "<category> can be:"),
QT_TRANSLATE_NOOP("refshare-core", "Accept command line and JSON-RPC commands"),
QT_TRANSLATE_NOOP("refshare-core", "Accept connections from outside (default: 1 if no -proxy or -connect)"),
QT_TRANSLATE_NOOP("refshare-core", "Accept public REST requests (default: %u)"),
QT_TRANSLATE_NOOP("refshare-core", "Acceptable ciphers (default: %s)"),
QT_TRANSLATE_NOOP("refshare-core", "Add a node to connect to and attempt to keep the connection open"),
QT_TRANSLATE_NOOP("refshare-core", "Allow DNS lookups for -addnode, -seednode and -connect"),
QT_TRANSLATE_NOOP("refshare-core", "Already have that input."),
QT_TRANSLATE_NOOP("refshare-core", "Always query for peer addresses via DNS lookup (default: %u)"),
QT_TRANSLATE_NOOP("refshare-core", "Attempt to force blockchain corruption recovery"),
QT_TRANSLATE_NOOP("refshare-core", "Attempt to recover private keys from a corrupt wallet.dat"),
QT_TRANSLATE_NOOP("refshare-core", "Automatically create Tor hidden service (default: %d)"),
QT_TRANSLATE_NOOP("refshare-core", "Block creation options:"),
QT_TRANSLATE_NOOP("refshare-core", "Calculating missing accumulators..."),
QT_TRANSLATE_NOOP("refshare-core", "Can't denominate: no compatible inputs left."),
QT_TRANSLATE_NOOP("refshare-core", "Can't find random Fundamentalnode."),
QT_TRANSLATE_NOOP("refshare-core", "Can't mix while sync in progress."),
QT_TRANSLATE_NOOP("refshare-core", "Cannot downgrade wallet"),
QT_TRANSLATE_NOOP("refshare-core", "Cannot resolve -bind address: '%s'"),
QT_TRANSLATE_NOOP("refshare-core", "Cannot resolve -externalip address: '%s'"),
QT_TRANSLATE_NOOP("refshare-core", "Cannot resolve -whitebind address: '%s'"),
QT_TRANSLATE_NOOP("refshare-core", "Cannot write default address"),
QT_TRANSLATE_NOOP("refshare-core", "Collateral not valid."),
QT_TRANSLATE_NOOP("refshare-core", "Connect only to the specified node(s)"),
QT_TRANSLATE_NOOP("refshare-core", "Connect through SOCKS5 proxy"),
QT_TRANSLATE_NOOP("refshare-core", "Connect to a node to retrieve peer addresses, and disconnect"),
QT_TRANSLATE_NOOP("refshare-core", "Connection options:"),
QT_TRANSLATE_NOOP("refshare-core", "Copyright (C) 2009-%i The Bitcoin Core Developers"),
QT_TRANSLATE_NOOP("refshare-core", "Copyright (C) 2014-%i The Dash Core Developers"),
QT_TRANSLATE_NOOP("refshare-core", "Copyright (C) 2014-%i The PIVX Core Developers"),
QT_TRANSLATE_NOOP("refshare-core", "Copyright (C) 2018 The REFSHARE Core Developers"),
QT_TRANSLATE_NOOP("refshare-core", "Corrupted block database detected"),
QT_TRANSLATE_NOOP("refshare-core", "Could not parse -rpcbind value %s as network address"),
QT_TRANSLATE_NOOP("refshare-core", "Could not parse fundamentalnode.conf"),
QT_TRANSLATE_NOOP("refshare-core", "Debugging/Testing options:"),
QT_TRANSLATE_NOOP("refshare-core", "Delete blockchain folders and resync from scratch"),
QT_TRANSLATE_NOOP("refshare-core", "Disable OS notifications for incoming transactions (default: %u)"),
QT_TRANSLATE_NOOP("refshare-core", "Disable safemode, override a real safe mode event (default: %u)"),
QT_TRANSLATE_NOOP("refshare-core", "Discover own IP address (default: 1 when listening and no -externalip)"),
QT_TRANSLATE_NOOP("refshare-core", "Display the stake modifier calculations in the debug.log file."),
QT_TRANSLATE_NOOP("refshare-core", "Display verbose coin stake messages in the debug.log file."),
QT_TRANSLATE_NOOP("refshare-core", "Do not load the wallet and disable wallet RPC calls"),
QT_TRANSLATE_NOOP("refshare-core", "Do you want to rebuild the block database now?"),
QT_TRANSLATE_NOOP("refshare-core", "Done loading"),
QT_TRANSLATE_NOOP("refshare-core", "Enable automatic Zerocoin minting (0-1, default: %u)"),
QT_TRANSLATE_NOOP("refshare-core", "Enable publish hash block in <address>"),
QT_TRANSLATE_NOOP("refshare-core", "Enable publish hash transaction (locked via SwiftX) in <address>"),
QT_TRANSLATE_NOOP("refshare-core", "Enable publish hash transaction in <address>"),
QT_TRANSLATE_NOOP("refshare-core", "Enable publish raw block in <address>"),
QT_TRANSLATE_NOOP("refshare-core", "Enable publish raw transaction (locked via SwiftX) in <address>"),
QT_TRANSLATE_NOOP("refshare-core", "Enable publish raw transaction in <address>"),
QT_TRANSLATE_NOOP("refshare-core", "Enable staking functionality (0-1, default: %u)"),
QT_TRANSLATE_NOOP("refshare-core", "Enable the client to act as a fundamentalnode (0-1, default: %u)"),
QT_TRANSLATE_NOOP("refshare-core", "Entries are full."),
QT_TRANSLATE_NOOP("refshare-core", "Error connecting to Fundamentalnode."),
QT_TRANSLATE_NOOP("refshare-core", "Error initializing block database"),
QT_TRANSLATE_NOOP("refshare-core", "Error initializing wallet database environment %s!"),
QT_TRANSLATE_NOOP("refshare-core", "Error loading block database"),
QT_TRANSLATE_NOOP("refshare-core", "Error loading wallet.dat"),
QT_TRANSLATE_NOOP("refshare-core", "Error loading wallet.dat: Wallet corrupted"),
QT_TRANSLATE_NOOP("refshare-core", "Error loading wallet.dat: Wallet requires newer version of REFSHARE Core"),
QT_TRANSLATE_NOOP("refshare-core", "Error opening block database"),
QT_TRANSLATE_NOOP("refshare-core", "Error reading from database, shutting down."),
QT_TRANSLATE_NOOP("refshare-core", "Error recovering public key."),
QT_TRANSLATE_NOOP("refshare-core", "Error"),
QT_TRANSLATE_NOOP("refshare-core", "Error: A fatal internal error occured, see debug.log for details"),
QT_TRANSLATE_NOOP("refshare-core", "Error: Can't select current denominated inputs"),
QT_TRANSLATE_NOOP("refshare-core", "Error: Disk space is low!"),
QT_TRANSLATE_NOOP("refshare-core", "Error: Unsupported argument -tor found, use -onion."),
QT_TRANSLATE_NOOP("refshare-core", "Error: Wallet locked, unable to create transaction!"),
QT_TRANSLATE_NOOP("refshare-core", "Error: You already have pending entries in the Obfuscation pool"),
QT_TRANSLATE_NOOP("refshare-core", "Failed to calculate accumulator checkpoint"),
QT_TRANSLATE_NOOP("refshare-core", "Failed to listen on any port. Use -listen=0 if you want this."),
QT_TRANSLATE_NOOP("refshare-core", "Failed to read block index"),
QT_TRANSLATE_NOOP("refshare-core", "Failed to read block"),
QT_TRANSLATE_NOOP("refshare-core", "Failed to write block index"),
QT_TRANSLATE_NOOP("refshare-core", "Fee (in REFSHARE/kB) to add to transactions you send (default: %s)"),
QT_TRANSLATE_NOOP("refshare-core", "Finalizing transaction."),
QT_TRANSLATE_NOOP("refshare-core", "Force safe mode (default: %u)"),
QT_TRANSLATE_NOOP("refshare-core", "Found enough users, signing ( waiting %s )"),
QT_TRANSLATE_NOOP("refshare-core", "Found enough users, signing ..."),
QT_TRANSLATE_NOOP("refshare-core", "Generate coins (default: %u)"),
QT_TRANSLATE_NOOP("refshare-core", "How many blocks to check at startup (default: %u, 0 = all)"),
QT_TRANSLATE_NOOP("refshare-core", "If <category> is not supplied, output all debugging information."),
QT_TRANSLATE_NOOP("refshare-core", "Importing..."),
QT_TRANSLATE_NOOP("refshare-core", "Imports blocks from external blk000??.dat file"),
QT_TRANSLATE_NOOP("refshare-core", "Include IP addresses in debug output (default: %u)"),
QT_TRANSLATE_NOOP("refshare-core", "Incompatible mode."),
QT_TRANSLATE_NOOP("refshare-core", "Incompatible version."),
QT_TRANSLATE_NOOP("refshare-core", "Incorrect or no genesis block found. Wrong datadir for network?"),
QT_TRANSLATE_NOOP("refshare-core", "Information"),
QT_TRANSLATE_NOOP("refshare-core", "Initialization sanity check failed. REFSHARE Core is shutting down."),
QT_TRANSLATE_NOOP("refshare-core", "Input is not valid."),
QT_TRANSLATE_NOOP("refshare-core", "Insufficient funds"),
QT_TRANSLATE_NOOP("refshare-core", "Insufficient funds."),
QT_TRANSLATE_NOOP("refshare-core", "Invalid -onion address or hostname: '%s'"),
QT_TRANSLATE_NOOP("refshare-core", "Invalid -proxy address or hostname: '%s'"),
QT_TRANSLATE_NOOP("refshare-core", "Invalid amount for -maxtxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("refshare-core", "Invalid amount for -minrelaytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("refshare-core", "Invalid amount for -mintxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("refshare-core", "Invalid amount for -paytxfee=<amount>: '%s' (must be at least %s)"),
QT_TRANSLATE_NOOP("refshare-core", "Invalid amount for -paytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("refshare-core", "Invalid amount for -reservebalance=<amount>"),
QT_TRANSLATE_NOOP("refshare-core", "Invalid amount"),
QT_TRANSLATE_NOOP("refshare-core", "Invalid fundamentalnodeprivkey. Please see documenation."),
QT_TRANSLATE_NOOP("refshare-core", "Invalid netmask specified in -whitelist: '%s'"),
QT_TRANSLATE_NOOP("refshare-core", "Invalid port detected in fundamentalnode.conf"),
QT_TRANSLATE_NOOP("refshare-core", "Invalid private key."),
QT_TRANSLATE_NOOP("refshare-core", "Invalid script detected."),
QT_TRANSLATE_NOOP("refshare-core", "Keep at most <n> unconnectable transactions in memory (default: %u)"),
QT_TRANSLATE_NOOP("refshare-core", "Last Obfuscation was too recent."),
QT_TRANSLATE_NOOP("refshare-core", "Last successful Obfuscation action was too recent."),
QT_TRANSLATE_NOOP("refshare-core", "Limit size of signature cache to <n> entries (default: %u)"),
QT_TRANSLATE_NOOP("refshare-core", "Line: %d"),
QT_TRANSLATE_NOOP("refshare-core", "Listen for JSON-RPC connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("refshare-core", "Listen for connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("refshare-core", "Loading addresses..."),
QT_TRANSLATE_NOOP("refshare-core", "Loading block index..."),
QT_TRANSLATE_NOOP("refshare-core", "Loading budget cache..."),
QT_TRANSLATE_NOOP("refshare-core", "Loading fundamentalnode cache..."),
QT_TRANSLATE_NOOP("refshare-core", "Loading fundamentalnode payment cache..."),
QT_TRANSLATE_NOOP("refshare-core", "Loading sporks..."),
QT_TRANSLATE_NOOP("refshare-core", "Loading wallet... (%3.2f %%)"),
QT_TRANSLATE_NOOP("refshare-core", "Loading wallet..."),
QT_TRANSLATE_NOOP("refshare-core", "Lock is already in place."),
QT_TRANSLATE_NOOP("refshare-core", "Lock fundamentalnodes from fundamentalnode configuration file (default: %u)"),
QT_TRANSLATE_NOOP("refshare-core", "Maintain at most <n> connections to peers (default: %u)"),
QT_TRANSLATE_NOOP("refshare-core", "Fundamentalnode options:"),
QT_TRANSLATE_NOOP("refshare-core", "Fundamentalnode queue is full."),
QT_TRANSLATE_NOOP("refshare-core", "Fundamentalnode:"),
QT_TRANSLATE_NOOP("refshare-core", "Maximum per-connection receive buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("refshare-core", "Maximum per-connection send buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("refshare-core", "Missing input transaction information."),
QT_TRANSLATE_NOOP("refshare-core", "Mixing in progress..."),
QT_TRANSLATE_NOOP("refshare-core", "Need to specify a port with -whitebind: '%s'"),
QT_TRANSLATE_NOOP("refshare-core", "No Fundamentalnodes detected."),
QT_TRANSLATE_NOOP("refshare-core", "No compatible Fundamentalnode found."),
QT_TRANSLATE_NOOP("refshare-core", "No funds detected in need of denominating."),
QT_TRANSLATE_NOOP("refshare-core", "No matching denominations found for mixing."),
QT_TRANSLATE_NOOP("refshare-core", "Node relay options:"),
QT_TRANSLATE_NOOP("refshare-core", "Non-standard public key detected."),
QT_TRANSLATE_NOOP("refshare-core", "Not compatible with existing transactions."),
QT_TRANSLATE_NOOP("refshare-core", "Not enough file descriptors available."),
QT_TRANSLATE_NOOP("refshare-core", "Not in the Fundamentalnode list."),
QT_TRANSLATE_NOOP("refshare-core", "Number of automatic wallet backups (default: 10)"),
QT_TRANSLATE_NOOP("refshare-core", "Obfuscation is idle."),
QT_TRANSLATE_NOOP("refshare-core", "Obfuscation request complete:"),
QT_TRANSLATE_NOOP("refshare-core", "Obfuscation request incomplete:"),
QT_TRANSLATE_NOOP("refshare-core", "Only accept block chain matching built-in checkpoints (default: %u)"),
QT_TRANSLATE_NOOP("refshare-core", "Only connect to nodes in network <net> (ipv4, ipv6 or onion)"),
QT_TRANSLATE_NOOP("refshare-core", "Options:"),
QT_TRANSLATE_NOOP("refshare-core", "Password for JSON-RPC connections"),
QT_TRANSLATE_NOOP("refshare-core", "Percentage of automatically minted Zerocoin  (10-100, default: %u)"),
QT_TRANSLATE_NOOP("refshare-core", "Preparing for resync..."),
QT_TRANSLATE_NOOP("refshare-core", "Prepend debug output with timestamp (default: %u)"),
QT_TRANSLATE_NOOP("refshare-core", "Print version and exit"),
QT_TRANSLATE_NOOP("refshare-core", "RPC SSL options: (see the Bitcoin Wiki for SSL setup instructions)"),
QT_TRANSLATE_NOOP("refshare-core", "RPC server options:"),
QT_TRANSLATE_NOOP("refshare-core", "RPC support for HTTP persistent connections (default: %d)"),
QT_TRANSLATE_NOOP("refshare-core", "Randomly drop 1 of every <n> network messages"),
QT_TRANSLATE_NOOP("refshare-core", "Randomly fuzz 1 of every <n> network messages"),
QT_TRANSLATE_NOOP("refshare-core", "Rebuild block chain index from current blk000??.dat files"),
QT_TRANSLATE_NOOP("refshare-core", "Recalculating coin supply may take 30-60 minutes..."),
QT_TRANSLATE_NOOP("refshare-core", "Recalculating supply statistics may take 30-60 minutes..."),
QT_TRANSLATE_NOOP("refshare-core", "Receive and display P2P network alerts (default: %u)"),
QT_TRANSLATE_NOOP("refshare-core", "Reindex the accumulator database"),
QT_TRANSLATE_NOOP("refshare-core", "Relay and mine data carrier transactions (default: %u)"),
QT_TRANSLATE_NOOP("refshare-core", "Relay non-P2SH multisig (default: %u)"),
QT_TRANSLATE_NOOP("refshare-core", "Rescan the block chain for missing wallet transactions"),
QT_TRANSLATE_NOOP("refshare-core", "Rescanning..."),
QT_TRANSLATE_NOOP("refshare-core", "ResetMintZerocoin finished: "),
QT_TRANSLATE_NOOP("refshare-core", "ResetSpentZerocoin finished: "),
QT_TRANSLATE_NOOP("refshare-core", "Run a thread to flush wallet periodically (default: %u)"),
QT_TRANSLATE_NOOP("refshare-core", "Run in the background as a daemon and accept commands"),
QT_TRANSLATE_NOOP("refshare-core", "Send transactions as zero-fee transactions if possible (default: %u)"),
QT_TRANSLATE_NOOP("refshare-core", "Server certificate file (default: %s)"),
QT_TRANSLATE_NOOP("refshare-core", "Server private key (default: %s)"),
QT_TRANSLATE_NOOP("refshare-core", "Session not complete!"),
QT_TRANSLATE_NOOP("refshare-core", "Session timed out."),
QT_TRANSLATE_NOOP("refshare-core", "Set database cache size in megabytes (%d to %d, default: %d)"),
QT_TRANSLATE_NOOP("refshare-core", "Set external address:port to get to this fundamentalnode (example: %s)"),
QT_TRANSLATE_NOOP("refshare-core", "Set key pool size to <n> (default: %u)"),
QT_TRANSLATE_NOOP("refshare-core", "Set maximum block size in bytes (default: %d)"),
QT_TRANSLATE_NOOP("refshare-core", "Set minimum block size in bytes (default: %u)"),
QT_TRANSLATE_NOOP("refshare-core", "Set the Maximum reorg depth (default: %u)"),
QT_TRANSLATE_NOOP("refshare-core", "Set the fundamentalnode private key"),
QT_TRANSLATE_NOOP("refshare-core", "Set the number of threads to service RPC calls (default: %d)"),
QT_TRANSLATE_NOOP("refshare-core", "Sets the DB_PRIVATE flag in the wallet db environment (default: %u)"),
QT_TRANSLATE_NOOP("refshare-core", "Show all debugging options (usage: --help -help-debug)"),
QT_TRANSLATE_NOOP("refshare-core", "Shrink debug.log file on client startup (default: 1 when no -debug)"),
QT_TRANSLATE_NOOP("refshare-core", "Signing failed."),
QT_TRANSLATE_NOOP("refshare-core", "Signing timed out."),
QT_TRANSLATE_NOOP("refshare-core", "Signing transaction failed"),
QT_TRANSLATE_NOOP("refshare-core", "Specify configuration file (default: %s)"),
QT_TRANSLATE_NOOP("refshare-core", "Specify connection timeout in milliseconds (minimum: 1, default: %d)"),
QT_TRANSLATE_NOOP("refshare-core", "Specify data directory"),
QT_TRANSLATE_NOOP("refshare-core", "Specify fundamentalnode configuration file (default: %s)"),
QT_TRANSLATE_NOOP("refshare-core", "Specify pid file (default: %s)"),
QT_TRANSLATE_NOOP("refshare-core", "Specify wallet file (within data directory)"),
QT_TRANSLATE_NOOP("refshare-core", "Specify your own public address"),
QT_TRANSLATE_NOOP("refshare-core", "Spend unconfirmed change when sending transactions (default: %u)"),
QT_TRANSLATE_NOOP("refshare-core", "Staking options:"),
QT_TRANSLATE_NOOP("refshare-core", "Stop running after importing blocks from disk (default: %u)"),
QT_TRANSLATE_NOOP("refshare-core", "Submitted following entries to fundamentalnode: %u / %d"),
QT_TRANSLATE_NOOP("refshare-core", "Submitted to fundamentalnode, waiting for more entries ( %u / %d ) %s"),
QT_TRANSLATE_NOOP("refshare-core", "Submitted to fundamentalnode, waiting in queue %s"),
QT_TRANSLATE_NOOP("refshare-core", "SwiftX options:"),
QT_TRANSLATE_NOOP("refshare-core", "Synchronization failed"),
QT_TRANSLATE_NOOP("refshare-core", "Synchronization finished"),
QT_TRANSLATE_NOOP("refshare-core", "Synchronization pending..."),
QT_TRANSLATE_NOOP("refshare-core", "Synchronizing budgets..."),
QT_TRANSLATE_NOOP("refshare-core", "Synchronizing fundamentalnode winners..."),
QT_TRANSLATE_NOOP("refshare-core", "Synchronizing fundamentalnodes..."),
QT_TRANSLATE_NOOP("refshare-core", "Synchronizing sporks..."),
QT_TRANSLATE_NOOP("refshare-core", "This help message"),
QT_TRANSLATE_NOOP("refshare-core", "This is experimental software."),
QT_TRANSLATE_NOOP("refshare-core", "This is intended for regression testing tools and app development."),
QT_TRANSLATE_NOOP("refshare-core", "This is not a Fundamentalnode."),
QT_TRANSLATE_NOOP("refshare-core", "Threshold for disconnecting misbehaving peers (default: %u)"),
QT_TRANSLATE_NOOP("refshare-core", "Tor control port password (default: empty)"),
QT_TRANSLATE_NOOP("refshare-core", "Tor control port to use if onion listening enabled (default: %s)"),
QT_TRANSLATE_NOOP("refshare-core", "Transaction amount too small"),
QT_TRANSLATE_NOOP("refshare-core", "Transaction amounts must be positive"),
QT_TRANSLATE_NOOP("refshare-core", "Transaction created successfully."),
QT_TRANSLATE_NOOP("refshare-core", "Transaction fees are too high."),
QT_TRANSLATE_NOOP("refshare-core", "Transaction not valid."),
QT_TRANSLATE_NOOP("refshare-core", "Transaction too large for fee policy"),
QT_TRANSLATE_NOOP("refshare-core", "Transaction too large"),
QT_TRANSLATE_NOOP("refshare-core", "Transmitting final transaction."),
QT_TRANSLATE_NOOP("refshare-core", "Unable to bind to %s on this computer (bind returned error %s)"),
QT_TRANSLATE_NOOP("refshare-core", "Unable to sign spork message, wrong key?"),
QT_TRANSLATE_NOOP("refshare-core", "Unknown network specified in -onlynet: '%s'"),
QT_TRANSLATE_NOOP("refshare-core", "Unknown state: id = %u"),
QT_TRANSLATE_NOOP("refshare-core", "Upgrade wallet to latest format"),
QT_TRANSLATE_NOOP("refshare-core", "Use OpenSSL (https) for JSON-RPC connections"),
QT_TRANSLATE_NOOP("refshare-core", "Use UPnP to map the listening port (default: %u)"),
QT_TRANSLATE_NOOP("refshare-core", "Use UPnP to map the listening port (default: 1 when listening)"),
QT_TRANSLATE_NOOP("refshare-core", "Use a custom max chain reorganization depth (default: %u)"),
QT_TRANSLATE_NOOP("refshare-core", "Use the test network"),
QT_TRANSLATE_NOOP("refshare-core", "Username for JSON-RPC connections"),
QT_TRANSLATE_NOOP("refshare-core", "Value more than Obfuscation pool maximum allows."),
QT_TRANSLATE_NOOP("refshare-core", "Verifying blocks..."),
QT_TRANSLATE_NOOP("refshare-core", "Verifying wallet..."),
QT_TRANSLATE_NOOP("refshare-core", "Wallet %s resides outside data directory %s"),
QT_TRANSLATE_NOOP("refshare-core", "Wallet is locked."),
QT_TRANSLATE_NOOP("refshare-core", "Wallet needed to be rewritten: restart REFSHARE Core to complete"),
QT_TRANSLATE_NOOP("refshare-core", "Wallet options:"),
QT_TRANSLATE_NOOP("refshare-core", "Wallet window title"),
QT_TRANSLATE_NOOP("refshare-core", "Warning"),
QT_TRANSLATE_NOOP("refshare-core", "Warning: This version is obsolete, upgrade required!"),
QT_TRANSLATE_NOOP("refshare-core", "Warning: Unsupported argument -benchmark ignored, use -debug=bench."),
QT_TRANSLATE_NOOP("refshare-core", "Warning: Unsupported argument -debugnet ignored, use -debug=net."),
QT_TRANSLATE_NOOP("refshare-core", "Will retry..."),
QT_TRANSLATE_NOOP("refshare-core", "You need to rebuild the database using -reindex to change -txindex"),
QT_TRANSLATE_NOOP("refshare-core", "Your entries added successfully."),
QT_TRANSLATE_NOOP("refshare-core", "Your transaction was accepted into the pool!"),
QT_TRANSLATE_NOOP("refshare-core", "Zapping all transactions from wallet..."),
QT_TRANSLATE_NOOP("refshare-core", "ZeroMQ notification options:"),
QT_TRANSLATE_NOOP("refshare-core", "Zerocoin options:"),
QT_TRANSLATE_NOOP("refshare-core", "failed to validate zerocoin"),
QT_TRANSLATE_NOOP("refshare-core", "on startup"),
QT_TRANSLATE_NOOP("refshare-core", "wallet.dat corrupt, salvage failed"),
};
