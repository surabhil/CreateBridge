#pragma once

namespace balances {

    struct [[eosio::table, eosio::contract("createbridge")]] balances {
        uint64_t memo;
        asset balance;

        uint64_t primary_key() const { return memo; }
    };

    typedef eosio::multi_index<"balances"_n, balances> Balances;
}