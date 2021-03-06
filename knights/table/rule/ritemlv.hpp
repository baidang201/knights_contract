//@abi table ritemlv i64
struct ritemlv {
    uint64_t level = 0;
    uint16_t count = 0;
    uint16_t bonus = 0;
    uint16_t powder1 = 0;
    uint16_t powder2 = 0;
    uint16_t powder3 = 0;
    uint16_t powder4 = 0;

    ritemlv() {
    }

    uint64_t primary_key() const {
        return level;
    }

    EOSLIB_SERIALIZE(
            ritemlv,
            (level)
            (count)
            (bonus)
            (powder1)
            (powder2)
            (powder3)
            (powder4)
    )
};

typedef eosio::multi_index< N(ritemlv), ritemlv> ritemlv_table;
