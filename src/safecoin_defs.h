#ifndef SAFECOIN_DEFS_H
#define SAFECOIN_DEFS_H

#define ASSETCHAINS_MINHEIGHT 128
#define ASSETCHAINS_MAX_ERAS 3
#define SAFECOIN_ELECTION_GAP 2000
#define ROUNDROBIN_DELAY 61
#define SAFECOIN_ASSETCHAIN_MAXLEN 65
#define SAFECOIN_LIMITED_NETWORKSIZE 4
#define IGUANA_MAXSCRIPTSIZE 10001
#define SAFECOIN_MAXMEMPOOLTIME 3600 // affects consensus
#define CRYPTO777_PUBSECPSTR "02004a23684b6e12441ac4c913775f4f74584c48a9167d2fb65da6a2ddc9852761"
#define SAFECOIN_FIRSTFUNGIBLEID 100
#define SAFECOIN_SAPLING_ACTIVATION 1551916800 // March 7th, 2019
#define SAFECOIN_SAPLING_DEADLINE 1551398400 // March 1st, 2019
#define COLLATERAL_MATURITY 100 // 100 blocks during testing phase, in production should be at least one week => 10080
#define REGISTRATION_GAP 900 // min number of blocks allowed since last safenode registration
#define REGISTRATION_TRIGGER_DAYS 30 // number of days between two automatic safenode registrations
 
extern uint8_t ASSETCHAINS_TXPOW,ASSETCHAINS_PUBLIC;
int32_t MAX_BLOCK_SIZE(int32_t height);

#endif
